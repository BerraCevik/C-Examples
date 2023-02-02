#include <stdio.h>
#include <stdlib.h>
void sonuc(char sekil, int sayi){
int a,b;

for(a=sayi;a>0;a--){
        for(b=0;b<=sayi-a;b++){
            printf("%c",sekil);
        }
        for(b=sayi;b>sayi-a;b--){
            printf("  ");
        }


        for(b=0;b<=sayi-a;b++){
            printf("%c",sekil);
        }
        printf("\n");
    }
    for(a=sayi;a>0;a--){
        for(b=sayi;b>sayi-a;b--){
            printf("%c",sekil);
        }
        for(b=0;b<=sayi-a;b++){
            printf("  ");
        }
        for(b=sayi;b>sayi-a;b--){
            printf("%c",sekil);
        }
        printf("\n");
    }}
int main()
{
    int sayi,a,b;
    char sekil;
    printf("sekil:");
    scanf("%c",&sekil);
    printf("sayi:");
    scanf("%d",&sayi);
    sonuc(sekil,sayi);
    sonuc(sekil,sayi);
    return 0;
}
