
#include <FastLED.h>

#define NUM_STRIPS 19
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define NUM_LEDS_PER_STRIP 13
#define BRIGHTNESS 64

int NUM_PER_TIRA[] = {66, 108, 144, 177, 206, 229};
//Usar el codigo Python para calcular las distancias
int LEDS_DISTANCES[] = {0, 66, 174, 318, 495, 701};
//Usar el codigo Python para calcular el arreglo de angulos
float alpha[] = {1.83, 2.01, 2.17, 2.33, 2.5, 2.66}
///Usar el codigo Python para el total de leds
int maxLEDS = 930;
//Distancia entre cada led
float dLed = 0.07;
//distancia del radio de la esfera
float radio = 0.75;

CRGB leds[maxLEDS];

void setup()
{
  delay(1000);
  //Tipo de led, input, color
  LEDS.addLeds<LED_TYPE, 3, COLOR_ORDER>(leds, maxLEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop()
{
  FastLED.clear();
  for (int i = 0; i < NUM_STRIPS; i++)
  {
    for (int j = 0; j < NUM_PER_TIRA[i]; j++)
    {

      //coordenadas polares
      //beta = map(j, 0, LED[i], 0, 2*PI)
      //k = ceil((radio*sin(alpha[i])*beta)/dLed)

      color = map(i, 0, NUM_STRIPS, 0, 255);
      leds[LEDS_DISTANCES[i] + j] = CRGB(255, color, color);
    }
  }
  FastLED.show();
}

//void map(value, start1, start1, stop1, stop2) {
//  float outgoing = start1 + (stop2 - start2) * ((value - start1) / (stop1 - start1));
//  return outgoing;
//}
