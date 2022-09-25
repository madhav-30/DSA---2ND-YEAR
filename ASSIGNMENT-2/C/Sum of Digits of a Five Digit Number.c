#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int a, sum = 0;
    for(int i=0;i<=5;i++){
      a = n % 10;
      sum = sum + a;
      n = n / 10;
    }
    printf("%d",sum);
    return 0;
}
