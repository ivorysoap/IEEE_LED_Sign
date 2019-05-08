  // IEEE Morse Code Flasher
  
  #define BLUEPIN 3
  #define FADESPEED 3
  #define SHORTWAIT 50
  #define MEDWAIT 900
  #define LONGWAIT 2500

  int b;
   
  void setup() {

    pinMode(BLUEPIN, OUTPUT);
    
  }
   
   
  void loop() {

    flash(); 
    delay(SHORTWAIT);
    flash();
    delay(MEDWAIT); //flash "I"
    flash();
    delay(MEDWAIT); //flash "E"
    flash();
    delay(MEDWAIT); //flash "E"
    flash();
    delay(LONGWAIT); //flash "E"

  }

void fadeOn(){

  for(b = 0; b < 256; b++){
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  }
  
}

void fadeOff(){

  for(b = 256; b > 0; b--){
    analogWrite(BLUEPIN, b);
    delay(FADESPEED);
  }
  
}

void flash(){
  
   fadeOn();
   fadeOff();
   
}
