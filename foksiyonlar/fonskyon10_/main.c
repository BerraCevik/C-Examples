#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mod,a,i,j,toplam=0;
    printf("gir: ");
    scanf("%d",&a);
    for(i=1; i<a; i++)
    {
        for(j=1; j<=i; j++)
        {
            mod=i%j;
            if(mod==0)
            {
                toplam=toplam+j;
            }

        }
        if(toplam==i){
            printf("%d",i);}
    }

    return 0;
}
