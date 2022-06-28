Zur an steurung der RGB_LED_Matriks 8x8.

erste Schrite:

Verbinden via Blutoothe mit "ESP_PA_RGB_LED" .

bei neustra sollte immer ein Rotes Kreutz erschiene.



Übertragung eier zeichnekete:

  erst den Prefix "STRING" dann ein "/" dahinter
  
  zweiten die nachricht z.B: "teST" dann wider mit "/" abschlisen.
  erlaubte zeichen "a-z" und "A-Z" -> werden alle Gross. und "."," ".
  
  letzten farbe auswellen zifer zwischen 0 und 2 KEINN "/" am abschlus.
  
  0 = ROT 
  
  1 = Grühn
  
  2 = Blau
  
  Z.B: STRING/TEST/0
    Gipt TEST in ROT aus.
    
    
    
 Übertragung eier Zahl:
 
 erst den Prefix "NUMBER" dann ein "/" dahinter
 
  zweiten die nachricht z.B: "123" dann wider mit "/" abschlisen.
  erlaubte zeichen "0-9" und "+", "-", "*".
  
  letzten farbe auswellen zifer zwischen 0 und 2 KEINN "/" am abschlus.
  
  0 = ROT 
  
  1 = Grühn
  
  2 = Blau
  
  Z.B: NUMBER/1289/2 Gipt 1289 in Blau aus.
