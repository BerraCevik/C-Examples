#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={2,4,6,12,24,64,66,46,26,44};
    int gir,j=0;
    printf("Bir sayi girin;");
    scanf("%d",&gir);
    for(int i=1;i<11;i++){
        if(gir==dizi[i]){
            printf("Girdiginiz sayi dizide var.");
            j++;
        }
    }
    if(j==0){printf("Girdiginiz sayi dizide yok.");}
    return 0;
}
