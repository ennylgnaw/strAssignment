#include <stdlib.h>
#include <stdio.h>
#include "string.h"

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
   while ((*s1 == *s2) && (*s1 && *s2)) {
     s1++;
     s2++;
   }
   return *s1 - *s2;
  // int c = 0;
  // while (s1[c] == s2[c]){
  //   if (s1[c] == '\0' || s2[c] == '\0')
  //     break;
  //   c++;
  // }
  // if (s1[c] == '\0' && s2[c] == '\0')
  //   return 0;
  // else{
  //   return -1;
  // }
}

char * strChar(char *str, char *c) {
  if (*str == c){
    return str;
  }
  if (*str == 0){
    return 0;
  }
return strChar(str+=1, c);
  // while (*str != *c) {
  //   str++;
  //   if (! *str)
  //     return 0;
  // }
  // return str;
}
int main() {
    char s1[20] = "heyo";
    char s2[20] = "elephants";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);

    printf("\n---- Testing strLength() ----\n");
    printf("[mine]: %d \n[standard]: %d \n\n", strLength(s1), strlen(s1));
    printf("[mine]: %d \n[standard]: %d \n", strLength(s2), strlen(s2));

    printf("\n---- Testing strnCopy() ----\n");
    printf("[mine]: %s\n", strnCopy(s1, s2, 3));
    strcpy(s1,"heyo");
    printf("[standard]: %s\n", strncpy(s1, s2, 3));
    strcpy(s2, "elephants"); // Reset back to original value for tests

    printf("\n---- Testing strCat() ----\n");
    printf("[mine]: %s\n", strCat(s1, s2));
    strcpy(s1, "hello");  // Reset back to original value for tests
    printf("[standard]: %s\n", strcat(s1, s2));
    strcpy(s1, "hello");  // Reset back to original value for tests

    printf("\n---- Testing strCompare() ----\n");
    printf("[mine]: %d \n[standard]: %d \n\n", strCompare(s1, s2), strcmp(s1, s2));
    printf("[mine]: %d \n[standard]: %d \n", strCompare(s2, s1), strcmp(s2, s1));

    printf("\n---- Testing strChar() ----\n");
    printf("[mine] find_char(s1, 'y'): %p\n [standard] strchr(s1, 'y'): %p\n\n", strChar(s1, 'y'), strchr(s1, 'y'));
    printf("[mine] find_char(s2 'p'): %p\n[standard] strchr(s2, 'p'): %p\n", strChar(s2, 'p'), strchr(s2, 'p'));

    return 0;
}
