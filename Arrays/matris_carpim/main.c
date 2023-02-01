#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][3],m2[3][3],m3[3][3];
    int i,j;
    int carpim;
    printf("birinci matrisi girin: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("gir: ");
            scanf("%d",&m1[i][j]);
            }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",m1[i][j]);
            }
            printf("\n");
    }
    printf("\n");
    printf("ikinci matrisi girin: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("gir: ");
            scanf("%d",&m2[i][j]);
            }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",m2[i][j]);
            }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            carpim=0;
            for(int k=0;k<3;k++){
                carpim+= m1[i][k]*m2[k][j];
                m3[i][j]=carpim;
            }}
    }
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",m3[i][j]);
            }
            printf("\n");
    }
    return 0;
}
