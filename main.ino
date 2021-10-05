//***************************************************************************************
//**************** ARDUINO CODE FOR SMART STREET LIGHT **********************************
//***************************************************************************************
// Authors - 
// 1. Ramanpreet Kaur
// 2. Shikha Singhal
// 3. Simran Priyashi
// 4. Trishna Aryal
//*********************************** DECLARATIONS **************************************

int ir1=2;                                  //IR Sensor 1
int ir2=3;                                  //IR Sensor 2
int ir3=4;                                  //IR Sensor 3
int led1=5;                                 //Output LEDs 1
int led2=6;                                 //Output LEDs 2
int led3=10;       //Output LEDs 3

//*************************************** VOID SETUP ***********************************
void setup()
{
    pinMode(2,INPUT);                       //Define PIN as Input
    pinMode(3,INPUT);                       //Define PIN as Input
    pinMode(4,INPUT);                       //Define PIN as Input
    pinMode(5,OUTPUT);                      //Define PIN as Digital Output
    pinMode(6,OUTPUT);                      //Define PIN as Digital Output
    pinMode(10,OUTPUT);                     //Define PIN as Digital Output
    pinMode(A0,INPUT);                      //Define PIN as Analog Input
    Serial.begin(9600);                     //Define Baudrate for Serial Communication
}

//*************************************** VOID LOOP ***********************************
void loop()
{
    int ir1value=digitalRead(2);            //Detect Presence of Vehicle by IR Sensors (Respective irValue will become high)
    int ir2value=digitalRead(3);
    int ir3value=digitalRead(4);
    int sensorvalue=analogRead(A0);         //Read input from LDR to detect presence of light outside or day time
    
    if(sensorvalue<=100&&sensorvalue>0)     //Turn ON Lights only if light density is dim outside
    {
        analogWrite(5,300);                 //Analog Control to control intensity of street light
        analogWrite(6,300);
        analogWrite(10,300);
        if(ir1value==1)                     //Vehicle is detected by IR sensor
        {
            digitalWrite(5,HIGH);
            digitalWrite(6,HIGH);
        }
        else if(ir2value==1)
        {
            digitalWrite(6,HIGH);
            digitalWrite(10,HIGH);
        }
        else if(ir3value==1)
        {
            digitalWrite(10,HIGH);
        }
        else                                //If no vehicle detected turn OFF all the lights
        {
            analogWrite(5,0);
            analogWrite(6,0);
            analogWrite(10,0);
        }
    }
}
//********************************* END OF CODE ***************************************************

