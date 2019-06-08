#include <stdio.h>

int sum(int n)
{
  if (n == 0) return 0;
<<<<<<< HEAD
  if (n == 1) return 1;
  return fib(n-1) + fib(n-2);
=======
  return n + sum(n-1);
>>>>>>> master
}

int main()
{
  printf("Hello world!\n");
  printf("%d\n", fib(5));
  return 0;
}
