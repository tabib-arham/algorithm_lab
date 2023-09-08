#include <stdio.h>

int main() {

  int n, res = 0, remainder,real;

  printf("Enter an integer: ");
  scanf("%d", &n);
  real=n;

  while (n != 0) {
    remainder = n % 10;
    res += remainder*remainder*remainder;
    n /= 10;
  }


  if (real == res)
        printf("%d is a amstrong.", real);
    else
        printf("%d is not a amstrong.", real);

  return 0;
}
