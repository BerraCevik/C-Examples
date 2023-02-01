#include <stdio.h>
#include <stdlib.h>

int toplam(int b,int x[b],int y[b]){
    int sum[b];
    for(int i=0;i<b;i++){
        sum[i]=x[i]+y[i];
    }
    printf("\n");
    for(int i=0;i<b;i++){
        printf("%d  ",sum[i]);
    }
}

int main()
{
    int b,i;
    printf("boyut gir: ");
    scanf("%d",&b);
    int x[b];
    int y[b];
    for(i=0;i<b;i++){
        printf("gir: ");
        scanf("%d",&x[i]);
    }
    for(i=0;i<b;i++){
        printf("%d  ",x[i]);
    }
    printf("\n");
    for(i=0;i<b;i++){
        printf("gir: ");
        scanf("%d",&y[i]);
    }
    for(i=0;i<b;i++){
        printf("%d  ",y[i]);
    }
    toplam(b,x,y);
    return 0;
}
