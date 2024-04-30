#include <stdio.h>

int main(void) {
  int num1, num2;

  printf("Por favor informe dois números separados por espaço:\n");
  scanf("%d%d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, num1 + num2);
  printf("%d - %d = %d\n", num1, num2, num1 - num2);
  printf("%d X %d = %d\n", num1, num2, num1 * num2);
  printf("%d / %d = %d\n", num1, num2, num1 / num2);
  printf("%d rest %d = %d\n", num1, num2, num1 % num2);

  return 0;
}