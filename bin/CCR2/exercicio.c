#include <stdio.h>
int main() {
  int a = 8;
  int *p;
  char b[2];
  p = &a;
  *p = 21;
  printf("Valor de a: %d\n", a);
  return 0;
}
