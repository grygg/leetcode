#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int n=2000;
    double p,sum;
    int i,j;
    p=1;
    sum = 0;
    for(i=1;i<=n;i++){
        p = 1;
        for(j=1; j<=i; j++){
            p = p *0.5;
        }
        sum = sum + (i+1)*p;
    }
    printf("%f",sum);
    return 0;
}
