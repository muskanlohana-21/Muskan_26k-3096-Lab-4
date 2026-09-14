#include <stdio.h>
int main() {
  int age;
  printf("enter your age");
  scanf("%d", &age);

  if (age>=18)
    printf("elligible for vote.\n");
  else
    printf("not elligible for vote.\n");
}
