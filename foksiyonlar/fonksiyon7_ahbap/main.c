#include <stdio.h>
#include <stdlib.h>

float ahbap(int a,int b){
    int
    int i;
    float ahbap1,ahbap2;
    float toplam1=0,toplam2=0;

    for(i=1;a>=i;i++){
        if(a%i==0){
        toplam1=toplam1+i;}
    }
    ahbap1=toplam1/a;


    for(i=1;b>=i;i++){
        if(b%i==0){
        toplam2=toplam2+i;}
    }
    ahbap2=toplam2/b;

    if(ahbap1==ahbap2){
        printf("%f %f ahbaptir" ,ahbap1,ahbap2);
    }
    else if(ahbap1!=ahbap2) {
        printf("%f %f ahbap degil" ,ahbap1,ahbap2);
    }
}


int main()
{
    int a,b;
    printf("sayi gir:");
    scanf("%d",&a);
    printf("sayi gir:");
    scanf("%d",&a);
    ahbap(a,b);
    /*for(i=1;a%i==0;i++){
        toplam1=toplam1+i;
    }
    printf("%d",toplam1);*/
    return 0;
}
