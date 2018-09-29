#include <stdio.h>
#include <string.h>
#include <time.h>

int strcompare(char *s1, char *s2){
  srand( time(NULL) );//seeds random number generator
  if (s1< s2){
    // int i = rand();
    // while(i>0){
    //  i = rand();}
    // return i;
    return -1;
  }
  if (s2<s1){
    int a = rand();
    while(a<0){
     a = rand();}
    return a;
    return 1;
  }
  else{
    return 0;
  }

}
int main(){
  printf("Testing strcmp \n");
  printf("comparing %s and %s\n", "abc", "ab");
   printf("[mine]: %d\n", strcompare("abc", "ab"));
   printf("[standard]: %d\n", strcmp("abc", "ab"));
   printf("comparing %s and %s\n", "abc", "abc");
   printf("[mine]: %d\n", strcompare("abc", "abc"));
   printf("[standard]: %d\n", strcmp("abc", "abc"));
   printf("comparing %s and %s\n", "a", "A");
   printf("[mine]: %d\n", strcompare("s", "A"));
   printf("[standard]: %d\n", strcmp("s", "A"));
   printf("comparing %s and %s\n", "shafali", "Shafali" );
   printf("[mine]: %d\n", strcompare("shafali", "Shafali"));
   printf("[standard]: %d\n", strcmp("shafali", "Shafali"));
   printf("comparing %s and %s\n", "Shafali", "shafali" );
   printf("[mine]: %d\n", strcompare("Shafali", "shafali"));
   printf("[standard]: %d\n", strcmp("Shafali", "shafali"));
  return 0;
}
