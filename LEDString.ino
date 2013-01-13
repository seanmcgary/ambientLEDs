int green = 9;
int red = 6;
int blue = 5;


void setup(){
  Serial.begin(9600);
}

void loop(){  
  analogWrite(green, 0);
  analogWrite(blue, 0);
  analogWrite(red, 0);
  
  for(int i = 0; i < 4; i++){
    Serial.println(i);
    Serial.println("=====================================");
    
     for(int led = 0; led <= 255; led += 1){
       Serial.println(led);
       
       
       // red up
       if(i == 0){
         analogWrite(red, led);
            
         analogWrite(green, 0);
         analogWrite(blue, 0);
       }
       
       // red down
       // green up
       if(i == 1){
         analogWrite(red, 255 - led);
         analogWrite(green, led);
            
         analogWrite(blue, 0);
         //analogWrite(red, 0);
       }
       
       // green down
       // blue up
       if(i == 2){
         analogWrite(green, 255 - led);
         analogWrite(blue, led);
            
         //analogWrite(red, 0);
         analogWrite(red, 0);
       }
       
       // blue down
       if(i == 3){
         analogWrite(blue, 255 - led);
         
         analogWrite(red, 0);
         analogWrite(green, 0); 
       }
        
       delay(30);
     } 
     Serial.println("-----------------------\n");
     delay(30);
  }
}
