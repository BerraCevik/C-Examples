#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,a,b;
    char sekil;
    printf("sekil:");
    scanf("%c",&sekil);
    printf("sayi:");
    scanf("%d",&sayi);
    for(a=sayi;a>0;a--){
        for(b=0;b<sayi-a;b++){
            printf(" ");
        }
        for(b=0;b<2*a-1;b++){
            printf("%c",sekil);
        }

        printf("\n");
    }
    for(a=0;a<=sayi;a++){
            for(b=0;b<sayi-a;b++){
                printf(" ");
            }

        for(b=0;b<a*2-1;b++){
            printf("%c",sekil);
        }

        printf("\n");
    }
    return 0;
}
