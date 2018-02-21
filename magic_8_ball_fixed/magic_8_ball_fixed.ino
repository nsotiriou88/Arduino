#include <LiquidCrystal.h> //Include the LCD library

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 7;     // the number of the pushbutton pin

// variables (ints,floats etc) will change:
int buttonState = 0;  // variable for reading the pushbutton status

int flag = 0;      //'flag' variable, used to indicate whether the intial message has already been printed

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // these are the pins connected to the display.

void setup() //Runs once when the board is powered up
{
  // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);  
  //How columns, rows
  lcd.begin(16,2);  
  //start with blank screen
  lcd.clear(); 
  //set cursor to column 0, row 0
  lcd.setCursor(0,0);  

}

// End of the setup. Now moving to the loop, the main function of Arduino.

void loop()
{  

  buttonState = digitalRead(buttonPin);  // read the state of the pushbutton value:

  // check if the tilt switch have move.
  // if it is, the buttonState is LOW:
  if (buttonState == LOW)
  {
    flag = 0; //reset flag
    
    //Reset the LCD display

    lcd.begin(16,2);  //columns, rows
    lcd.clear();  //start with blank screen
    lcd.setCursor(0,0);  //set cursor to column 0, row 0

      int randomNumber = random(0, 10); // random chooses a number at random (supprise) between 
    // the range of 0 and 9.

    switch (randomNumber) { //Here, we're using a switch statement that takes the random number generated above
      //and selects the appropriate case below.

    case 0:
      lcd.print("You may rely"); //The first line of the LCD display
      lcd.setCursor(0,1); // Move the cursor to the first (0) block but on the second (1) line.
      lcd.print("on it");
      break; //break out

    case 1:
      lcd.print("It is certain");
      break;

    case 2:
      lcd.print("Outlook good");
      break;

    case 3:
      lcd.print("Most likely");  //no space to make output look good
      break;

    case 4:
      lcd.print("Cannot predict");
      lcd.setCursor(0,1);
      lcd.print("now");
      break;

    case 5:
      lcd.print("Results are");
      lcd.setCursor(0,1);
      lcd.print("cloudy");
      break;

    case 6:
      lcd.print("Better not");
      lcd.setCursor(0,1);
      lcd.print("tell you now");
      break;

    case 7:
      lcd.print("Outlook not");
      lcd.setCursor(0,1);
      lcd.print("so good");
      break;

    case 8:
      lcd.print("My sources say");
      lcd.setCursor(0,1);
      lcd.print("no");
      break;

    case 9:
      lcd.print("Very doubtful");
      break;
    }
    delay(2000);
  }
  
  if (flag == 0) //if the flag hasn't been set to one, display initial message
  {
    lcd.clear(); // clear the LCD display. Alternatively we could display:
    lcd.print("Shake to update");
    flag = 1;  //prevent the initial message refreshing constantly
  };
}

//End of sketch. The program will now fire to the top of the "void loop()" function and start again.






