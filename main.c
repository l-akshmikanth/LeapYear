#include <stdio.h>

int main(void) {

  int year;
  printf("Enter the Year\n");
  scanf("%d",&year);
  if((year%4 == 0 && year%100 != 0 )||year % 400 ==0 )
  printf("Leap Year\n");
  else
  printf("Not a Leap Year\n");
  return 0;
}