#include <stdio.h>
#include <stdlib.h>

void sonuc(int i,int a[]){
    for(;i>-1;i--){
        printf("%d",a[i]);
    }
}

int main()
{
    int a[100];
    int sayi,kalan;
    int i;
    printf("gir: ");
    scanf("%d",&sayi);
    i=0;
    for(;sayi>1;sayi/=2){
        kalan=sayi%2;
        a[i]=kalan;
        i+=1;

    }
    a[i]=1;
    sonuc(i,a);
    return 0;
}
