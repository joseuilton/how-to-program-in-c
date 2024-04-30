#include <stdio.h>

int main(void) {
  int num1, num2, sum;
  
  printf("Digit the first number:\n");
  scanf("%d", &num1);
  printf("Digit the second number:\n");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("The sum is %d\n", sum);

  return 0;
}