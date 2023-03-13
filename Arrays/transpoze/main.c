#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*int matris[3][3];
    int transpose[3][3];
    int satir=0,sutun=0;
    printf("\n3*3'luk matrisin degerlerini giriniz\n\n");
    for( satir=0 ; satir<3; satir++ )
    {
        for ( sutun=0; sutun<3; sutun++)
        {
            printf("Matrisin [%d][%d] elemani : ",satir+1,sutun+1);
            scanf("%d",&matris[satir][sutun]);
            transpose[sutun][satir]= matris[satir][sutun];
        }
    }
    printf("\nMatris\tve\tTranspozu\n");
    for( satir=0 ; satir<3; satir++ )
    {
        for ( sutun=0; sutun<3; sutun++)
        {
            printf("%d ",matris[satir][sutun]);
        }
        printf("\t\t"); // 2 tab boyutu bosluk birakir
        for ( sutun=0; sutun<3; sutun++)
        {
            printf("%d ",transpose[satir][sutun]);
        }
        printf("\n");
    }*/
    /*int i,j,matris[3][3];
    int transp[3][3];
    printf("matrisi girin:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matris[i][j]);
            transp[j][i]=matris[i][j];

        }
    }*/
    srand(time(NULL));
    int i,j,matris[3][3];
    int transp[3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matris[i][j]=rand()%10;
            transp[j][i]=matris[i][j];

        }
    }
    printf("matris:\t\ttranspoze:");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d  ",matris[i][j]);}
            printf("\t\t");
        for(j=0;j<3;j++){
            printf("%d  ",transp[i][j]);
        }}
    return 0;
}
