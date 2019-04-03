#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int sum = 0;

  while (n) {
    sum += n % 10;
    n /= 10;
  }
  printf("%d\n", sum);

  return 0;
}
