#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[]={0,1};
    int boyut,i,j;
    printf("boyut gir: ");
    scanf("%d",&boyut);
    for(i=0;i<boyut;i++){
        for(j=0;j<boyut;j++){
            if(i==j)
                printf("%d ",matris[1]);
            else printf("%d ",matris[0]);
        }
        printf("\n");
    }
    return 0;
}
