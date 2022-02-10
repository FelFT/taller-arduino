void setup() {
  Serial.begin(9600);
}
void loop() {
  char test_array[] = "P";
  char test_char = 56;
  Serial.print(F("Array: "));
  Serial.println(test_array);
  Serial.print(F("Char: "));
  Serial.println(test_char);
  delay(1000);
}
