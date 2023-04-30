# APIR
[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://en.wikipedia.org/wiki/C%2B%2B) [![forthebadge](https://forthebadge.com/images/badges/open-source.svg)](https://en.wikipedia.org/wiki/Open-source_software) ![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)

**Abstract Programming Interface for Robotics**, or **APIR** for short, is a library with a collection of tools that helps robotics students accomplish their robotics project!

# Features
- It has useful tools for different kinds of sensors
- Portable
- Flexible
- Easy to use
- Easy to adapt
- Easy to import to your project

# Using the Library
- Install the .ZIP file from the [releases](https://github.com/QuadraBoy/APIR/releases) page.

- If you have Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library**
![image](https://user-images.githubusercontent.com/79918051/235280104-cad9c829-4d14-4910-9f49-2e85e458fb63.png)

- And finally, locate the .ZIP file you've just downloaded and select it.

# Why use APIR?
```cpp
#define TRIG 1
#define ECHO 2

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}
void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  int duration = pulseIn(ECHO, HIGH);
  
  int cm = duration / 29 / 2;
  int inch = cm * 0.393701;
  int meter = cm * 0.01;
}
```
In this code example, we can see that this code is for ultrasonic sensor.
```cpp
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
```
In the setup function, we set the pins of the ultrasonic sensor to OUTPUT and INPUT.

```cpp
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  int duration = pulseIn(ECHO, HIGH);
  
  int cm = duration / 29 / 2;
  int inch = cm * 0.393701;
  int meter = cm * 0.01;
```
In the loop function, we write HIGH for the TRIG pin because we need it to know the duration of the ultrasonic sound. And after that, we used that duration, converted it to cm, and converted that cm to inch and meter.

Now here's the problem: doing all of what I mentioned is a hassle. Sometimes,  when the robotics student is writing code, they may write one number wrong in the formulas and the whole output will be wrong, and this will annoy robotics students. This is where APIR comes in. With APIR, we could just do this.
```cpp
#include "SonicSensor.h"

#define TRIG_PIN 1
#define ECHO_PIN 2

SonicSensor sensor(TRIG_PIN, ECHO_PIN);

void setup() {
  sensor.setup();
}

void loop() {
  //NOTE: sensor.begin() must be called first before accesing the distance!!!
  sensor.begin();

  int cm = sensor.getDistance(CENTIMETERS);
  int inch = sensor.getDistance(INCHES);
  int meters = sensor.getDistance(METERS);
}
```
Seeing any difference? If your answer is yes, that would be correct! As you can see from this example, that code is much cleaner and hides the complicated details. 

# History
It all started when we were finishing our robotic research project. My classmates keep asking me how to use this, how to use that, and how to fix this. And this inspired me to make a project (or library, in this case) that provides my classmates or even other robotics students with a collection of useful tools that can make life easier when making a robotics project.

# Project Status
**The project is still in development**. APIR still needs a lot of time to get shaped. Feel free to submit a [pull request](https://github.com/QuadraBoy/APIR/pulls) if you want to request something that can improve APIR! Any contributions to the project will be appreciated!

# Project Goals
The goals of this project are to provide a collection of useful tools for robotics students without any overheads that can affect performance and speed while being easy to use.

# Reporting Bugs or Errors
Does APIR have any errors or bugs when you use it? Report it at the [issues](https://github.com/QuadraBoy/APIR/issues) tab.

When making an issue report, make sure that your issue report is very in-depth and can be reproduce or in other words, can be repeated.

# Code Examples
Check the [wiki](https://github.com/QuadraBoy/APIR/wiki) page for code examples.
