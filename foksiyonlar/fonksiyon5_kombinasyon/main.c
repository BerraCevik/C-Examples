#include <stdio.h>
#include <stdlib.h>

float fakt(x){
    int f;
    float faktoriyel=1;
    for(f=1;f<=x;f++)
        faktoriyel=faktoriyel*f;

    return faktoriyel;
}
float C(int a, int b){
    float komb;
    komb=fakt(a)/(fakt(a-b)*fakt(b));

    return komb;
}


int main()
{
    int a,b;
    printf("deger girin:");
    scanf("%d",&a);
    printf("deger girin:");
    scanf("%d",&b);
    printf("%f",C(a,b));
    return 0;
}
