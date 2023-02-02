#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int i){
    int f=1;
    for(int j=1;j<=i;j++){
        f*=j;
    }
    return f;
}


int main()
{
    float toplam=1.0;
    int x,n;
    printf("x gir: ");
    scanf("%d",&x);
    printf("n gir: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        toplam+=pow(x,i)/fact(i);
    }
    printf("sonuc= %f",toplam);
    return 0;
}
