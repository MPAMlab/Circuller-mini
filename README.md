# Circuller-mini

A small &amp; round game controller that uses a 5.5' touchscreen and few buttons.

[中文文档](Readme-CN.md) (will be written after the project is complete)

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
- Keycaps (print in the model folder or buy existing low-profiled keycaps) x8

### PCB BOM

All capacitors and resistors are in the 0603 package.

Board 1:

- Gateron low-profiled key switch KS-33 / any other switch compatible x8
- 2x1x0.6mm switch button for reset x1
- WS2812B 6028/3528 RGB LED x8
- ATMEGA32U4 (needed to be bootloader pre-loaded)
- 1uF Capacitor x1
- 22pF Capacitor x2
- 100nF Capacitor x12
- 470nF Capacitor x1
- 10k ohm Resistor x2
- 22 ohm Resistor x2
- 5.1k ohm Resistor x2
- 2.5A/32V FUSE 0805 x1
- ZMM3V6 diode x2
- XH2.54-WI-3P x1
- TYPE-C 16PIN connector x1
- 16MHZ Oscillator x1

Board 2 x3:

- WS2812B 6028/3528 RGB LED x3
- XH2.54-WI-3P x5
- 100nF Capacitor x3

## PCB detail

TBD

## Assemble

TBD

## Firmware load

TBD

## Windows tool config.ini

Tested work on Wireshark 5.5-inch 2k display.

```
[Config]
1=Circuller
2=2250
3=1710
4=-165
5=0
```

## TODO

- rewrite the code
    - reorder LED part
    - rewrite debounce, reference: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_debounce_type.md
    
- Redo the modeling
- Model the case (probably two versions: 1. plain like a tablet, 2. assemble like a real wash machine)

## Credit

This design and repository are not meant to violate any copyrighted content.

No games are/will be tested, and I am unaware of which game this controller can work with.

Some references: 

LED support: https://github.com/Sucareto/Mai2Touch

Modeling reference: https://github.com/xiaopeng12138/MaiDXR
