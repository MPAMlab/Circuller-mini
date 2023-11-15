# Circuller-mini
A small &amp; round game controller that uses a 5.5' touchscreen and few buttons.

[中文文档](Readme-CN.md)

## Requirements

- 3D printed cases [Print details](1.%20Model/readme.md)
- Waveshare 5.5inch 1440x2560 LCD
- Cables
    - HDMI 
    - micro-USB to USB-A x2 for Touch Display Power&Touch
    - USB-C cable for PCB
    - XH2.54-3pin cable
 
- M3 screws

- PCB (probably no perfboard support)

### PCB BOM

Board 1:

- Gateron low-profiled key switch KS-33 / any other switch compatible x8
- 2x1x0.6mm switch button for reset x1
- WS2812B 6028/3528 RGB LED x8
- ATMEGA32U4
- 1uF Capacitor x1
- 22pF Capacitor x2
- 100nF Capacitor x12
- 470nF Capacitor x1
- 10k ohm Resistor x2
- 22 ohm Resistor x2
- 5.1k ohm Resistor x2
- 2.5A/32V FUSESMD0805 x1
- ZMM3V6 diode x2
- XH2.54-WI-3P x1
- TYPE-C 16PIN connector

Board 2 x3:

- WS2812B 6028/3528 RGB LED x3
- XH2.54-WI-3P x5
- 100nF Capacitor x3

## PCB detail

TBD

## Assemble

TBD

## TODO

- The Current version(Rev 1.1) of Board 1 is 11x11cm, shrinking it down to 10x10cm(Rev 1.2) to make the PCB cheaper.
- Re-test the light (rewrite the code)
- Redo the modelling
- Model the case (probably two version: 1. plain like a tablet, 2. assemble like a real wash machine)

## Credit

This design and repository are not meant to violate any copyrighted content.

No games are/will be tested, and I do not know what game this controller will fit.

Some references: 

https://github.com/Sucareto/Mai2Touch

https://github.com/xiaopeng12138/MaiDXR
