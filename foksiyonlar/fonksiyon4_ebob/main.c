#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int secim(){
    int sec;
    printf("EBOB-1\n");
    printf("EKOK-2\n");
    scanf("%d",&sec);
    if (sec==1){
    int a,b;
    a=sayiAl();
    b=sayiAl();
    int ebob=EBOB(a,b);
    }
    else if(sec==2){
        int c,d;
    c=sayiAl();
    d=sayiAl();
    int ekok=EKOK(c,d);
    }
    else{printf("gecerli rakam degil.");}
}
int sayiAl(){
        int x;
        printf("sayi girin:");
        scanf("%d",&x);
        return x;
    }
int EBOB(int a,int b){
    int kucuk;
    if (a<b){
        kucuk=a;
    }
    else{kucuk=b;}
    int i;
    for(i=kucuk;i>0;i--){
        if(a%i==0 && b%i==0){
            printf("EBOB:%d",i);

        return i;}
    }
}
int EKOK(int a,int b){
    int kucuk,ebob,ekok;
    if (a<b){
        kucuk=a;
    }
    else{kucuk=b;}
    int i;
    for(i=kucuk;i>0;i--){
        if(a%i==0 && b%i==0){
            ebob=i;
            break
            ;
            }
    }
    ekok=(a*b)/i;
    printf("ekok:%d",ekok);
}
int main()
{
    secim();
    return 0;
}


