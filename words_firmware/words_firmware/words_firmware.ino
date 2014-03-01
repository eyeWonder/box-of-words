
#include <SPI.h>
#include <SD.h>

#include "Words.h"

// 10 - SD chip select
Words words(10);
  
void setup()
{
 words.init();
}


void loop(void) {

int list_size = 3;
char *list[] = {"","",""};

words.getFilesList(list, list_size);

for (int i = 0; i < list_size; i++) {
  Serial.println(list[i]);
}

  delay(4000);
}
