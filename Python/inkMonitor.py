import time
import psutil
import serial
import sys
import clr
clr.AddReference(r'D:\Program Files\OpenHardwareMonitor\OpenHardwareMonitorLib') 
# e.g. clr.AddReference(r'OpenHardwareMonitor/OpenHardwareMonitorLib'), without .dll

from OpenHardwareMonitor.Hardware import Computer

from tkinter import Tk, Label, StringVar, Button


ser=serial.Serial()
ser.baudrate=115200
ser.port = 'COM10'
ser.timeout=0

root = Tk()
root.title("eInk Panel")
root.geometry("100x100")

c = Computer()
c.CPUEnabled = True
c.GPUEnabled = True
c.MemoryEnabled = True
c.Open()

cpuTemp=0
gpuTemp=0

cpuLoad=0
gpuLoad=0 #memory

ramLoad=0
fps=0

ser.open()
time.sleep(5)
ser.reset_input_buffer()
ser.reset_output_buffer()

a=(100,99,99,99,99,99,99)

for i in a:
        val = i.to_bytes(1)
        ser.write(val)


def readings():
        #ser.close()
        #ser.open()
        ser.reset_input_buffer()
        ser.reset_output_buffer()

        global cpuTemp, gpuTemp, cpuLoad, gpuLoad, ramLoad, fps

        #for a in range(0, len(c.Hardware)):
            #print(a)
        
        for a in range(0, len(c.Hardware[0].Sensors)):
            #print(c.Hardware[0].Sensors[a].Identifier)
            if "/temperature" in str(c.Hardware[0].Sensors[a].Identifier):
                cpuTemp=c.Hardware[0].Sensors[a].get_Value()
                
                c.Hardware[0].Update()
            if "/load/0" in str(c.Hardware[0].Sensors[a].Identifier):
                cpuLoad=c.Hardware[0].Sensors[a].get_Value()
             
                c.Hardware[0].Update()

        for a in range(0, len(c.Hardware[1].Sensors)):
            #print(c.Hardware[1].Sensors[a].Identifier)
            if "/temperature" in str(c.Hardware[1].Sensors[a].Identifier):
                gpuTemp=c.Hardware[1].Sensors[a].get_Value()
              
                c.Hardware[1].Update()
            if "/smalldata/2" in str(c.Hardware[1].Sensors[a].Identifier):
                gpuLoad=c.Hardware[1].Sensors[a].get_Value()
              
                c.Hardware[1].Update()

        ramLoad = psutil.virtual_memory()[3]/1000000000
        
        a=(int(100), int(cpuTemp), int(cpuLoad), int(gpuTemp), int(gpuLoad/100), int(ramLoad), int(fps))

        for i in a:
              val = i.to_bytes(1)
              ser.write(val)
                        
        info.config(text = str(a[1])+", "+str(a[2])+"\n"+
                            str(a[3])+", "+str(a[4])+"\n"+
                            str(a[5])+", "+str(a[6])
                    )
        inputSerial = str(ser.readline().decode('utf-8')[:-2])
        print(inputSerial)
        serialLabel.config(text = inputSerial)        
        root.after(1500, readings)

def closeSerial():
        ser.close()
        root.destroy()
        ser.close()
        sys.exit()

info = Label(root, text = "wait oi")
info.pack()

serialLabel = Label(root, text = "reading")
serialLabel.pack()

endButton = Button(root, text="end", command=closeSerial
        )
endButton.pack()
            
if __name__ == "__main__":
    root.after(4000, readings)    
    root.mainloop()
