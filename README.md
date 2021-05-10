# Atmega Makefile
  
* build -> ```make```
* build and load-> ```make load```
* clean -> ```make clean```

#### Important Variables !

* ```PORT     = /dev/ttyUSB0```
* ```BAUDRATE = 57600```
* ```CPU      = atmega328p```
* ```CLOCK    = 16000000L```
* ```PLATFORM = arduino```
* ```ARDUINO_DIR = $(HOME)/apps/arduino-1.8.12/```

```ARDUINO_DIR``` is absolute path.  Change ```ARDUINO_DIR``` variable to your path.
