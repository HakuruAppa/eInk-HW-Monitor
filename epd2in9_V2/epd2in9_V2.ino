#include <SPI.h>
#include "epd2in9_V2.h"
#include "epdpaint.h"
#include "imagedata.h"
#include "imagedata_jag.h"
#include "imagedata_idle.h"

#define COLORED 0
#define UNCOLORED 1

unsigned char image[1024];
Paint paint(image, 0, 0);
Epd epd;

int valArray[7];
int valArrayOld[7];
//[begin=100, cpu temp, cpu load, gpu temp, gpu load, ram load, fps]

bool idle=true;
bool active=false;

void setup() {
  Serial.begin(115200);
  if(epd.Init() != 0){
    Serial.println("fail");
    return;
  }
  epd.ClearFrameMemory(0xFF);
  epd.DisplayFrame();
  idleScreen();
  epd.DisplayFrame();
  epd.Sleep();
  Serial.println("sleep");
}

void loop(){
    if(Serial.available()>6){
      Serial.println("running?");
      for(int i=0; i<7; i++){
        valArray[i] = Serial.read();
      }
      if(valArray[0]==100){
        active=true;
        if(idle==false){
          bool arrayCheck=true;
          for (int i=0; i<7; i++){
            if(valArray[i]!=valArrayOld[i]){
              arrayCheck=false;
            }
          }
          if(arrayCheck==false){
          
            statsScreenInfo(valArray);
            epd.DisplayFrame_Partial();
            Serial.println("updated");
            delay(1000);
          }
        }else{
          for (int i=0; i<7; i++){
            valArrayOld[i]=valArray[i];
          }
          if(epd.Init() != 0){
            Serial.println("fail");
            return;
          }
          epd.ClearFrameMemory(0xFF);
          epd.DisplayFrame();
          statsScreen();
          epd.DisplayFrame();
          statsScreenInfo(valArray);
          epd.DisplayFrame_Partial();
          idle=false;
          active=true;
          Serial.println("active");
        }
      }else{
        active=false;
      }
    }

    if(idle==false&&active==false){
      epd.ClearFrameMemory(0xFF);
      epd.DisplayFrame();
      idleScreen();
      epd.DisplayFrame();
      epd.Sleep();
      Serial.println("sleep");
      idle=true;
  }
}

void idleScreen(){
  paint.SetRotate(ROTATE_180);
  epd.SetFrameMemory_Base(epd_bitmap_idle);
}

void statsScreen(){
  paint.SetRotate(ROTATE_180);
  epd.SetFrameMemory_Base(epd_bitmap_jag);
}

void statsScreenInfo(int valArray[]){
  char cpuT[3], cpuL[3], gpuT[3], gpuL[3], ramR[3], fpsR[3];
  String(valArray[1]).toCharArray(cpuT, 3);
  String(valArray[2]).toCharArray(cpuL, 3);
  String(valArray[3]).toCharArray(gpuT, 3);
  String(valArray[4]).toCharArray(gpuL, 3);
  String(valArray[5]).toCharArray(ramR, 3);
  String(valArray[6]).toCharArray(fpsR, 3);

  //CPU
  paint.SetWidth(36);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, cpuT, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 18, 262, paint.GetWidth(), paint.GetHeight());
  
  paint.SetWidth(36);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, cpuL, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 26, 225, paint.GetWidth(), paint.GetHeight());  

  //GPU
  paint.SetWidth(36);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, gpuT, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 18, 188, paint.GetWidth(), paint.GetHeight());

  paint.SetWidth(36);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, gpuL, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 26, 151, paint.GetWidth(), paint.GetHeight());

  //RAM
  paint.SetWidth(32);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, ramR, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 24, 116, paint.GetWidth(), paint.GetHeight());

  //FPS
  paint.SetWidth(48);
  paint.SetHeight(24);
  paint.Clear(UNCOLORED);
  paint.DrawStringAt(0, 0, fpsR, &Font24, COLORED);
  epd.SetFrameMemory_Partial(paint.GetImage(), 6, 79, paint.GetWidth(), paint.GetHeight());    
}