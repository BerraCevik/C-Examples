#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <time.h>

int fonk(int a,int b){
    srand(time(NULL));
    int i;
    for(i=1;i<=10;i++){
    int kucuk,buyuk;
    if(a<b){
        kucuk=a;
        buyuk=b;
        int rn;
    rn=rand()%(buyuk-kucuk+1)+kucuk;
    printf("%d\n",rn);}
    else if (b<a){
        kucuk=b;
        buyuk=a;
        int rn;
    rn=rand()%(buyuk-kucuk+1)+kucuk;
    printf("%d\n",rn);}
    }

}


int main()
{
    int a,b;
    printf("sayi 1: ");
    scanf("%d",&a);
    printf("sayi 2: ");
    scanf("%d",&b);
    fonk(a,b);
    return 0;
}
