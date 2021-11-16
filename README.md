<h1>fastLed Multiple</h1> 

<p>Tips para tomar en cuenta al conectar tiras led con la esp32 devkit</p>
<p>Revisar el wiki de la biblioteca <a href="https://github.com/FastLED/FastLED/wiki/Basic-usage">FastLed</a></p>

<h3> pines que No se usa de ESP32</h3>
<ul>
  <li>del 6 - 11</li>
  <li>del 34 - 39 adelante son solo inputs</li>
  
</ul>



<p><b>La corriente de funcionamiento máxima que los pines GPIO pueden hundir y 
  generar es de 40 mA de acuerdo con la hoja de datos del chip ESP32. Pero se recomienda mantenerlo por debajo 
  de 20 mA. </b></p>

<p> Los siguientes pines por default el momento de inciar la esp32 tienen valor HIGH. Por eso hay que definirlos como LOW en
el setup del código:</p>
<ul>
  <li>GPIO1</li>
  <li>GPIO3</li>
  <li>GPIO5</li>
  <li>GPIO6 to GPIO11</li>
  <li>GPIO14</li>
  <li>GPIO15</li>  
</ul>
<h3>Ejemplos MultiArray</h3>
<p>es importante poner la cantidad total de leds en el objet CRGB</p>
<ul>
  <li><a href="https://github.com/marmilicious/FastLED_examples/blob/master/test_ArrayOfLedArrays.ino" target="_blank">varias tiras</a></li>
  <li><a href="https://github.com/marmilicious/FastLED_examples/blob/master/multipleStripsInOneArrayDifferentLengths.ino">varias tiras un arreglo</a></li>
</ul>
