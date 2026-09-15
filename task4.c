#include <stdio.h>
int main() {
  float length, area, width, perimeter;
  printf("enter length");
  scanf("%f", &length);
  printf("enter width");
  scanf("%f", &width);
  area = length * width;
  perimeter = 2 * (length * width);
  printf("area = %.2f\n", area);
  printf("perimeter = %.2f", perimeter);
}
