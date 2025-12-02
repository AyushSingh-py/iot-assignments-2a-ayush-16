void setup() {
  Serial.begin(9600);
  
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.println("Scratchfle setup complete.");
}