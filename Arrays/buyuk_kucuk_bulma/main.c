#include <stdio.h>
#include <stdlib.h>

int buyuk(int b, int a[b]){
    int buyuk= a[0];
    for (int i=0;i<b;i++){
        if(a[i]>buyuk){
            buyuk=a[i];
        }
    }
    return buyuk;
}
int kucuk(int b,int a[b]){
    int kucuk=a[0];
    for(int i=1;i<b;i++){
        if(a[i]<kucuk){
            kucuk=a[i];
        }
    }
    return kucuk;
}


int main()
{
    int k,b;
    printf("boyut gir: ");
    scanf("%d",&b);
    int a[b];
    for(int i=0;i<b;i++){
        printf("gir: ");
        scanf("%d",&a[i]);
    }
    printf("buyuk=%d\n",buyuk(b,a));
    printf("kucuk=%d",kucuk(b,a));
    return 0;
}
