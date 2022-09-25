#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char ch, b[100], a[100];
  scanf("%c ", &ch);
  scanf("%s", b);
  scanf(" %[^\n]%*c", &a);
  printf("%c\n", ch);
  printf("%s\n", b);
  printf("%s", a);
  return 0;
}
