# 12864B (SKU: HCMODU0032)

## LCD Line Cross

VCC -> +5v
GND -> Ground

BLA -> +5V
BLK -> Ground

// Whatever digital pin usage, same as the defined pins is okay

RS -> Digital Pin 2
E -> Digital Pin 4
D4 -> Digital Pin 3

## Key code

define the pins for the LCD

```ino
#define RS 2  //Displays Chip Select pin
#define E 4   //Displays clock pin
#define RW 3  //Displays data pin
```
