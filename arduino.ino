#define SensorSol 10  
#define SensorOrta 11
#define SensorSag 12

#define MotorR1 5
#define MotorR2 4 
#define MotorRE 3

#define MotorL1 6
#define MotorL2 7
#define MotorLE 9



void setup() {
  
  pinMode(SensorSol, INPUT);
  pinMode(SensorOrta, INPUT);
  pinMode(SensorSag, INPUT);

  pinMode(MotorR1, OUTPUT);
  pinMode(MotorR2, OUTPUT);

  pinMode(MotorL1, OUTPUT);
  pinMode(MotorL2, OUTPUT);


}

void loop() {

  if(digitalRead(SensorSol) == 0 && digitalRead(SensorOrta) == 1 && digitalRead(SensorSag) == 0){  
  }

  if(digitalRead(SensorSol) == 0 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 1){
    sag();
  }

  if(digitalRead(SensorSol) == 1 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 0){ 
    sol();
  }
    if(digitalRead(SensorSol) == 1 && digitalRead(SensorOrta) == 1 && digitalRead(SensorSag) == 1){  
    ileri();
    }
    
  if(digitalRead(SensorSol) == 1 && digitalRead(SensorOrta) == 1&& digitalRead(SensorSag) == 0){  
    sol2();
  }
  if(digitalRead(SensorSol) == 0 && digitalRead(SensorOrta) == 1 && digitalRead(SensorSag) == 1){
    sag2();
  }
 
  

}


void ileri(){  

  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 100); 

  digitalWrite(MotorL1, HIGH);
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 100);
  
  
}


void sag(){ 

  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 0);

  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 80); 
  
  
}
void sag2(){ 

  digitalWrite(MotorR1, HIGH);
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 50); 

  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 100);
  
  
}

void sol(){ 

  digitalWrite(MotorR1, HIGH); 
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 80);

  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 0); 
  
}
void sol2(){ 

  digitalWrite(MotorR1, HIGH);
  digitalWrite(MotorR2, LOW); 
  analogWrite(MotorRE, 100); 

  digitalWrite(MotorL1, HIGH); 
  digitalWrite(MotorL2, LOW); 
  analogWrite(MotorLE, 50); 
  
}
