#include <stdio.h>
int main() {
  int days;
  printf("enter number of late days");
  scanf("%d", &days);
  if(days ==0)
    printf("no fine");
  else if(days>+1 && days <=5)
    printf("fine rs, 50");
  else if (days>=6 && days <=10)
    printf("fine rs, 100");
  else
    printf("fine rs, 200");
      
}
