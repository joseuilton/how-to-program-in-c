#include <stdio.h>

int main(void) {
  int num1, num2;

  printf("Enter with 2 integers and i will say\nwhat condition they satisfy:\n");
  scanf("%d%d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d\n", num1, num2);
  }

  if (num1 != num2) {
    printf("%d is not equal to %d\n", num1, num2);
  }

  if (num1 < num2) {
    printf("%d is less than %d\n", num1, num2);
  }

  if (num1 > num2) {
    printf("%d is greater than %d\n", num1, num2);
  }

  if (num1 <= num2) {
    printf("%d is less or equal to %d\n", num1, num2);
  }

  if (num1 >= num2) {
    printf("%d is greater or equal to %d\n", num1, num2);
  }

  return 0;
}