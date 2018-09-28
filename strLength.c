#include <stdlib.h>
#include <stdio.h>

int strLength(char * c) {

  int sum = 0;
  while (*c) {
    sum += 1;
    c++;
  }
  
  return sum;
}

int main() {
  char * c = "Hi";
  printf("%s: %d\n", c, strLength(c));

  char * d = "What's up!";
  printf("%s: %d\n", d, strLength(d));
}
