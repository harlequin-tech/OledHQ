/*
 * Hello, World for OledHQ
 *
 * This sketch is released into the public domain.
 */

/*
 * The SSD1322 OLED module should be connected to as follows:
 */
/**************************************************
*    SSD1322 driver
*
*    Pin   Function     SPI connections
*    ----+------------+----------
*      1   VSS		GND
*      2   VBAT		3.3V-5V
*      3   NC
*      4   D0		SCLK	Serial Clock
*      5   D1		MOSI	Serial Data Input
*      6   D2		NC
*      7   D3 		GND
*      8   D4		GND
*      9   D5		GND
*     10   D6		GND
*     11   D7		GND
*     12   #RD		GND
*     13   #WR		GND
*     14   DC		Data / Command 
*     15   #RESET	
*     16   #CS		Chip select
*
*     Note: All logic pins are 3.3V max so use appropriate conversion hardware.
*
*     BS1 BS0	Mode
*     --------+---------------------
*      0   0	"4 Line SPI" 8-bit + DC pin
*
*      Note: SPI mode is write only (MOSI)
*
 *    GND  -> GND
 *    VCC  -> 3.3V
 *    CE   -> digital pin 8
 *    CSN  -> digital pin 9
 *    SCK  -> digital pin 13
 *    MOSI -> digital pin 11
 *    MISO -> digital pin 12
**************************************************/

#include <SPI.h>
#include <OledHQ.h>

#define CHANNELS  125
uint8_t channel[CHANNELS];

OledMP oled(9, 8, 10, 7, SPI);

void setup() 
{
    Serial.begin(115200);
    oled.begin();
    oled.printf("Hello, World");
}

void loop() 
{
}
