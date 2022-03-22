//load lcd library
#include <LiquidCrystal.h>

// set crystal pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int BTN = 9;
const int LED = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(BTN , INPUT);
  pinMode(LED , OUTPUT);
  
  //set lcd size
  lcd.begin(16,2);
  
  //set start
  lcd.setCursor(0,0);
  lcd.print("Press button to:"); 
}

bool buttonState = false;
void loop ()
{
	//schrijf hier je code

  bool buttonActivity = digitalRead(BTN);
  bool lightActivity = digitalRead(LED);
  
  if (lightActivity == false){
    if (buttonActivity == true){
      buttonState = true;
    }
  }
  else if(lightActivity == true){
    if (buttonActivity == true){
      buttonState = false;
    }
  }
  
  if (buttonState == true){
    digitalWrite(LED, HIGH);
    delay(100);
  }else{
    digitalWrite(LED, LOW);
    delay(100);
  }
  
	//schrijf hier je code
}
//schrijf hier eventuele functies



//schrijf hier eventuele functies