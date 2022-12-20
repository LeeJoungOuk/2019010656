#define MINANALOG 0      
#define MAXANALOG 1023   
#define MINPIN 0         
#define MAXPIN 255        
#define nDARK_VAL_MAX 0    //Maximum size of Darkness
#define nDARK_VAL_MID 55   //Middle size of Darkness
#define nDARK_VAL_LOW 110  //Low size of Darkness
#define SIZLED 3             //Number of Pins
#define nDEL_MAX 100         //Maximum size of Delay
#define nDEL_LOW 10          //Low size of Delay

int nPirsen = 2;            // Senser reset
int nLightsen = A0;
int nPotenPin = A1;
int nLiValue = 0;

int nArrWPin[SIZLED] = { 3, 6, 10 };     //LED Pin reset
int nArrYPin[SIZLED] = { 5, 9, 11 };

int* pArrWPin = nArrWPin;         //LED Pointer
int* pArrYPin = nArrYPin;

void setup()
{
    pinMode(nPirsen, INPUT);        //Senser Settings
    pinMode(nLightsen, INPUT);
    pinMode(nPotenPin, INPUT);
    for (int i = 0; i < SIZLED; i++)
    {
        pinMode(*(pArrWPin + i), OUTPUT);  //LED Settings
        pinMode(*(pArrYPin + i), OUTPUT);
    }

    Serial.begin(9600);
}

void W_LED_Output(int* pArrWPin, int nDelaybright)    //W_LED ON
{
    for (int i = 0; i < SIZLED; i++)
    {
        analogWrite(pArrWPin[i], nDelaybright);
    }
}
void Y_LED_Output(int* pArrYPin, int nDelaybright)     //Y_LED ON
{
    for (int i = 0; i < SIZLED; i++)
    {
        analogWrite(pArrYPin[i], nDelaybright);
    }
}
void W_LED_Off(int* pArrWPin)            //W_LED OFF
{
    for (int i = 0; i < SIZLED; i++)
    {
        digitalWrite(pArrWPin[i], LOW);
    }
}
void Y_LED_Off(int* pArrYPin)              //Y_LED OFF
{
    for (int i = 0; i < SIZLED; i++)
    {
        digitalWrite(pArrYPin[i], LOW);
    }
}

typedef struct        //Structure declaration
{
    int nMotion;

    int nLiValue;

    int nDelaybright;
}Sen;

void loop()
{
    Sen k1;
    k1.nMotion = digitalRead(nPirsen);        // Read Digital Value
    int nLight = analogRead(nLightsen);       // Read Analog Value
    k1.nLiValue = map(nLight, MINANALOG, MAXANALOG, MINPIN, MAXPIN); //convert analog value to digital value
    int nKnobDelay = analogRead(nPotenPin);
    k1.nDelaybright = map(nKnobDelay, MINANALOG, MAXANALOG, MINPIN, MAXPIN);

    Operat_LED(k1.nMotion, k1.nLiValue, k1.nDelaybright);
}

void Operat_LED(int nMotion, int nLiValue, int nDelaybright)   // LED Operation
{
    if (((nLiValue) >= nDARK_VAL_MAX) && ((nLiValue) <= nDARK_VAL_MID))      //Brightness of Light
    {
        if (nMotion == HIGH)                           //Motion detection
        {
            W_LED_Output(pArrWPin, nDelaybright);
            delay(nDEL_MAX);                                   //Brightness control using PWM - HIGH
            W_LED_Off(pArrWPin);
            delay(nDEL_LOW);
            Y_LED_Output(pArrYPin, nDelaybright);
            delay(nDEL_MAX);
            Y_LED_Off(pArrYPin);
            delay(nDEL_LOW);
        }
        else                                              //else LED OFF
        {
            W_LED_Off(pArrWPin);
            Y_LED_Off(pArrYPin);
        }
    }
    else if (((nLiValue) > nDARK_VAL_MID) && ((nLiValue) <= nDARK_VAL_LOW)) //Brightness of Light
    {
        if (nMotion == HIGH)                           //Motion detection
        {
            Y_LED_Output(pArrYPin, nDelaybright);
            delay(nDEL_LOW);                             ////Brightness control using PWM - LOW
            Y_LED_Off(pArrYPin);
            delay(nDEL_MAX);
            W_LED_Off(pArrWPin);
        }
        else                                //else LED OFF
        {
            W_LED_Off(pArrWPin);
            Y_LED_Off(pArrYPin);
        }
    }
    else
    {
        W_LED_Off(pArrWPin);
        Y_LED_Off(pArrYPin);
    }
}