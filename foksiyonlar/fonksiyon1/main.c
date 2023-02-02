#include <stdio.h>
#include <stdlib.h>

int seriToplam(int x){
    int toplam=0;
    for(int i=1;i<=x;i++){
        toplam=i+toplam;
    }
    return toplam;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",seriToplam(x));
    return 0;
}
