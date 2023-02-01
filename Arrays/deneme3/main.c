#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s,x,k=0;
    int a[100];
    int b[100];
    int c[100];
    printf("boyut: ");
    scanf("%d",&s);
    for(i=0;i<s;i++){
        printf("gir: ");
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<s;i++){
        printf("%d  ",a[i]);
    }

    for(i=0;i<s;i++){
        c[i]=0;
        for(int j=0;j<s;j++){
            if(a[i]==b[j]){
               c[i]++;}
        }
    }
    printf("\n");

    int buyuk;
    for(i=1;i<s;i++){
        buyuk=c[0];
        if(c[i]>buyuk){
            buyuk=c[i];
        }
    }

    printf("\n\nen cok tekrar eden eleman: %d\n tekrar etme sayisi: %d",a[i],buyuk);


}
