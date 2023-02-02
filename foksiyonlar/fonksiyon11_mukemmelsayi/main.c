#include <stdio.h>
#include <stdlib.h>



//mükemmel sayı: bölenleri toplamı kendisine eşit olan sayı
int fonk(int i,int a){
    int j,toplam=0;
        for(i=1;i<a;i++){
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                toplam=toplam+j;
            }
        }
        if(toplam==i)
        {
            printf("%d\n",i);
        }

    }}



int main()
{
    int a,i;
    printf("sayi gir: ");
    scanf("%d",&a);

        fonk(i,a);
        /*if(fonk(i)==1){
            printf("%d",i);
            */

    return 0;
}
