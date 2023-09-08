#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");//164
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;//4,6,1
    reverse = reverse * 10 + remainder;//4,46,461
    n /= 10;//16,1,0
    printf("Reversed number = %d\n", reverse);
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
