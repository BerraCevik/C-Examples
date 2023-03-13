#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i,j;
    int matris[4][4];
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            matris[i][j]=rand()%10;}
        }
    for(i=0;i<4;i++){
        for(j=0;j<i;j++){
            matris[j][i]=matris[i][j];}
        }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
                printf("%d\t",matris[i][j]);
        }
        printf("\n");}

    return 0;
}
