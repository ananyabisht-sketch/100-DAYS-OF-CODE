Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int n;
    int sum;
 scanf("%d", &n);
   sum = (n * (n + 1)) / 2;

  printf("Sum = %d", sum);

    return 0;
}
