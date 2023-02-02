#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yeni,j,k,b,i;
    int fac;
    int kalan;
    int toplam,toplam1=0;
    printf("kucuk gir: ");
    scanf("%d",&k);
    printf("buyuk gir: ");
    scanf("%d",&b);
    for(j=k; j<=b; j++)
    {
        yeni=j;
        toplam=0;
        while(yeni>=1)
        {

            fac=1;
            kalan=yeni%10;
            for(i=1; i<=kalan; i++)
            {
                fac*=i;
            }
            yeni/=10;
            toplam+=fac;
        }
        kalan=0;
        if(toplam==j)
        {
            printf("guclu %d",toplam);
        }
    }


    return 0;
}
