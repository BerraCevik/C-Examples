#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,j,i,d1,d2,d3,determinant;
    int matris[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("gir: ");
            scanf("%d",&matris[i][j]);
    }}
    i=0;
    j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",matris[i][j]);
        }
        printf("\n");
    }
        d1=matris[0][0]*((matris[1][1]*matris[2][2])-(matris[2][1]*matris[1][2]));
        d2=matris[1][0]*((matris[0][1]*matris[2][2])-(matris[2][1]*matris[0][2]));
        d3=matris[2][0]*((matris[0][1]*matris[1][2])-(matris[1][1]*matris[0][2]));
    determinant=d1-d2+d3;
    printf("%d %d %d",d1,d2,d3);
    printf("\n%d",determinant);

    return 0;
}
