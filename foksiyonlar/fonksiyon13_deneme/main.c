#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*int a,gir,toplam=0;
    printf("gir: ");
    scanf("%d",&gir);
    a=gir;
    while(a>=10)
    {
        toplam=0;
        while(a>0)
        {
            int rakam=a%10;
            toplam+=rakam*rakam;
            a/=10;
        }
        a=toplam;

    }
    if(toplam==1)

        printf("muk");

    else
    {
        printf("no");
    }*/
  /////////////////////////////////////////

   /* int j,num,sum=0;
 printf("Enter number\n");
 scanf("%d",&num);
  while(num>=10)
  {
   sum=0;
   while(num>0)
  {
    j=num%10;
    sum+=(j*j);
    num=num/10;
  }
  num=sum;
  }

  if(sum==1)
 printf("Happy Number\n  %d",sum);
 else
 printf("UnHappy Number\n  %d",sum);*/


    int gir,rakam,toplam=0;
    printf("gir: ");
    scanf("%d",&gir);
    while(gir>=10){
            toplam=0;
        while(gir>0){
            rakam=gir%10;
            gir=gir/10;
            toplam=toplam+(rakam*rakam);
        }
        gir=toplam;
    }
    if(toplam==1)
        printf("happy");
    else
        printf("unhappy");


    return 0;
}
