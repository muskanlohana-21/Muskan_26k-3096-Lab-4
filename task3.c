#include <stdio.h>
int main() {
  int num;
  printf("enter a num");
  scanf("%d", &num);
  if (num % 2 == 0)
    printf("the num is even.\n");
  else
    printf("the num is odd.\n");
}
