#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /*srand(time(NULL));
    int matris[3][3];
    int i,j,toplam;
    for(i=0;i<3;i++){
        toplam=0;
        for(j=0;j<3;j++){
            matris[i][j]=1+rand()%9;
            printf("%d ",matris[i][j]);
            toplam+=matris[i][j];

            }
        printf("=%d ",toplam);
        }
        printf("\n");

    for(j=0;j<3;j++){
        toplam=0;
        for(i=0;i<3;i++){
            toplam+=matris[i][j];

        }
        printf("=%d ",toplam);
    }

    */srand(time(NULL));
    for(int k=1;k<4;k++){
        printf("    ");
        printf("%d.",k);

    }
    printf("\n");
    int matris[3][3];
    int i,j,toplam=0,toplam1;
    for(i=0;i<3;i++){
        printf("%d.  ",i+1);
            toplam1=0;
        for(j=0;j<3;j++){
            matris[i][j]=1+rand()%9;
            printf("%d     ",matris[i][j]);
            toplam1+=matris[i][j];
        }
        printf("=%d ",toplam1);
        printf("\n");
    }
    for(j=0;j<3;j++){
        toplam=0;
        for(i=0;i<3;i++){
            toplam+=matris[i][j];

        }
        printf("   =%d ",toplam);
    }

    return 0;
}
