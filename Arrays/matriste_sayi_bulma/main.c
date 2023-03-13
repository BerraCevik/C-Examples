#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,sayi,matris[4][4];
    srand(time(NULL));
    printf("\nmatris:");
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<4;j++){
            matris[i][j]=rand()%10;
            printf("%d  ",matris[i][j]);
        }
    }
    printf("\naramak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    int k=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(sayi==matris[i][j]){
                printf("\naradiginiz sayi %d. satir, %d. sutunda vardir.\n",i+1,j+1);
                k=k+1;
            }
        }
    }
    if(k>0){printf("\naradiginiz sayi matriste %d tane vardir.",k);}
    else printf("aradiginiz sayi matriste yoktur.");


    return 0;
}
