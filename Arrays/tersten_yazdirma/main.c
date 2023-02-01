#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gir,b;
    printf("boyut gir: ");
    scanf("%d",&b);
    int a[b];
    for(int i=0;i<b;i++){
        printf("gir: ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<b;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    for(int i=b-1;i>=0;i--){
        printf("%d",a[i]);
    }

    return 0;
}
