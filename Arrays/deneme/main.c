#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,kalan;
    int i;
    int a[50];
    printf("gir: ");
    scanf("%d",&sayi);
    i=0;
    for(;sayi>0;sayi/=2){
        kalan=sayi%2;
        a[i]=kalan;
        i+=1;
    }
    a[i]=1;
    for(;i>-1;i--){
        printf("%d",a[i]);
    }
    return 0;
}
