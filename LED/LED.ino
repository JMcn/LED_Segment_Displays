byte index = 0;
const byte LEDs[10] = { //用于共阳数码管
  B00010001, //0
  B11111000, //1
  B00100010, //2
  B01100000, //3
  B11001000, //4
  B01000100, //5
  B00000100, //6
  B11110000, //7
  B00000000,  //8
  B01000000   //9
};

void setup() {
  DDRD = B11111111;
}

void loop() {
  PORTD = LEDs[index];
  index++;
  if (index == 10) {
    index = 0;
  }
  delay(1000);
}
