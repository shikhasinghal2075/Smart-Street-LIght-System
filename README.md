# Smart-Street-Light-System
This project describes implementation of arduino based Smart Street Light System

![Image 2](image2.jpeg)

# Working
The smart street light system controls the intensity of light and automatically operates on detection of light. The street light system depends on the external light source. When its day time the lights are automatically switched off and it operates during night or evening time. On detecting the object on roads, the intensity of the following street lights is increased and  other remain operating at lower intensity, thereby saving power. 

Case 1: Automatic switching: 
The street lightening system consists of a LDR (light dependent resistor). When the  sunlight falls on it (indicating day time) the street lights are switched “OFF” automatically. 
When there is a very little or no light falling on the LDR (indicating night/evening time), the street  lights are switched “ON” automatically  

Case 2: Intensity control: 
Since during day time the street lights are switched OFF “the intensity control” part comes into picture during the night time. 
For intensity control, each street light contains an IR sensor, which detects the objects in  front of it. When a vehicle crosses that IR sensor, it detects the vehicle and the intensity  of street light 1 and 2 gets increased whereas the 3rd one still operates at lower intensity. 
When the vehicle passes the 1st street light and heads towards the 2nd one , now the 2nd and the 3rd one glows with maximum intensity and the 1st one back with lower intensity. 
When the vehicle passes through the last one, the last (3rd) street light glows with  maximum intensity whereas the other two are glowing at low intensity. 
When the IR sensor doesn't sense any vehicle during the night time, the street lights will remain glowing at low intensity. 


# Demo video

https://user-images.githubusercontent.com/60216456/133921334-cffe8e83-1d8d-47a8-8790-2be65ae9b433.mp4

