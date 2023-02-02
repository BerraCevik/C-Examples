#include <stdio.h>
#include <stdlib.h>

happy(int gir){
    int toplam=0;
    int rakam=0;
    int a=gir;
    while(a>0){
        while(a>0){
        rakam=a%10;
        toplam+=rakam*rakam;
        a/=10;
    }
    a=toplam;}
    if (a==1)
        return 1;
    else
        return 0;


    return toplam;

}


int main()
{
    int gir;
    printf("gir: ");
    scanf("%d",&gir);
    if(happy==1){
    printf("mutlu %d",happy(gir));}
    else{printf("mutsuz");}

    return 0;
}
