#include<Servo.h>




#define MINANALOG 0      //Lower end of current range

#define MAXANALOG 1023   //upper end of current range

#define MINANG 0         //The lower bound of the range you want to map

#define MAXANG 180       //The uuper bound of the range you want to map


#define SIZLED 3            //LED Count

#define nDelay 20




int nPotenPin = A0;         // Reset pin values

int nSurvoPin = 2;

int nRedPin = 3;

int nYellowPin = 4;

int nGreenPin = 5;




int nArrPin[SIZLED] = { 3, 4, 5 };  // PIN value save arrangement

int* pArrPin = nArrPin;  // Pointer Declaration




Servo myServo;




void setup()

{

    myServo.attach(nSurvoPin);     //SurvoPin Set



    for (int i = 0; i < SIZLED; i++)

    {

        pinMode(*(pArrPin + i), OUTPUT);   //PIN Set

    }

    Serial.begin(9600);

}




void LEDigitalOutput(int nNumPin, int nServoAng)  //function of control LED Delay


{

    digitalWrite(nNumPin, HIGH);

    delay(nServoAng);

    digitalWrite(nNumPin, LOW);

    delay(nDelay);

}

void BatteryVolume(int nServoAng)     // function of situation

{

    if (((nServoAng) > 0) && ((nServoAng) < 50))

    {

        LEDigitalOutput(nRedPin, nServoAng);

        Serial.print("Situation : Warning\n");

    }

    else if (((nServoAng) > 90) && ((nServoAng) <= 180))

    {

        LEDigitalOutput(nGreenPin, nServoAng);

        Serial.print("Situation : Suffice\n");

    }

    else

    {

        LEDigitalOutput(nYellowPin, nServoAng);

        Serial.print("Situation : Caution\n");

    }

}




void loop()

{

    int nKnobServo = analogRead(nPotenPin); //Save analog value

    int nServoAng = map(nKnobServo, MINANALOG, MAXANALOG, MINANG, MAXANG); // Function of map



    Serial.print("ServoAnalog :");

    Serial.println(nKnobServo);

    Serial.print("ServoAge :");

    Serial.println(nServoAng);

    Serial.print("\n");



    myServo.write(nServoAng);

    delay(nDelay);



    BatteryVolume(nServoAng);



}