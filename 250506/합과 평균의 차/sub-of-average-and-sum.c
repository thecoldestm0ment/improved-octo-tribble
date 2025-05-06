#include <stdio.h>

int main() {
    int a=0,b=0,c=0;
    int sum=0, avg=0;
    scanf("%d%d%d", &a,&b,&c);
    sum= a+b+c;
    avg= sum/3;

    printf("%d\n%d\n%d", sum, avg, sum-avg);
    return 0;
}