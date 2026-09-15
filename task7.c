#include <stdio.h>
int main() {
  float num1, num2, num3, average;
  printf("enter num1");
  scanf("%d", &num1);
  printf("enter num2");
  scanf("%d", &num2);
  printf("enter num3");
  scanf("%d", &num3);
  average = num1 + num2 + num3 / 3;
  printf("average = %.2f", average);
}
