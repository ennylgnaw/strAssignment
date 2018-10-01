#include <stdlib.h>
#include <stdio.h>

int strLength(char *c) {
  int sum = 0;
  while (*c) {
    sum += 1;
    c++;
  }  
  return sum;
}

char * strnCopy(char *dst, char *src, int n) {
  for (int i = 0; i < n; i++)
    *(dst + i) = *(src + i);
  return dst; 
}

char * strCat(char *dst, char *src) {
  char *dstEnd = dst;
  while (*dst)
    dst++;
  while (*src) {
    *dst = *src;
    dst++;
    src++;
  }
  return dstEnd;
}

int strCompare(char *s1, char *s2) {
  while ((*s1 == *s2) && *s1 && *s2) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
}

char *strChar(char *str, char *c) {
  while (*str != *c) {
    str++;
    if (! *str)
      return 0;
  }
  return str;
}

int main() {

  char a[] = "Today is a lovely day";
  char b[30] = "Goodness";
  char c[] = "Flowers and skulls";
  
  //strLength
  printf("%d\n", strLength(b));

  //strnCopy
  printf("[%s]\n", strnCopy(a, b, 4));

  //strCat
  printf("[%s]\n", strCat(b, c));

  //strCompare
  printf("%s, %s, %d\n", a, b, strCompare(a, b));
  printf("%s, %s, %d\n", b, a, strCompare(b, a));
  printf("%s, %s, %d\n", a, c, strCompare(a, c));
  printf("%s, %s, %d\n", b, c, strCompare(b, c));

  //strChar
  printf("[%s]\n", strChar(a, "i"));
  printf("[%s]\n", strChar(a, "x"));
  
  return 0;
}
