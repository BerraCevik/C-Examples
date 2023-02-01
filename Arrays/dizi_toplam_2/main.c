#include <stdio.h>
#include <stdlib.h>

int toplam(int b,int x[b],int y[b]){
    int sum[b+1];
    int elde=0;
    for(int i=b-1;i>=0;i--){
        int t=(x[i]+y[i]+elde);
        sum[i+1]=t%10;
        elde=(x[i]+y[i])/10;
    }
    sum[0]=elde;
    printf("\n");
    for(int i=0;i<b+1;i++){
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
        printf("gir: ");
        scanf("%d",&y[i]);
    }
    for(i=0;i<b;i++){
        printf("%d  ",x[i]);
    }
    printf("\n");
    for(i=0;i<b;i++){
        printf("%d  ",y[i]);
    }
    printf("\n");
    toplam(b,x,y);
    return 0;
}
