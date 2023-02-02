#include <stdio.h>
#include <stdlib.h>

fact(int n){
    float f=1.0;
    int i;
    for(i=1;i<=n;i++){
        f*=i;}
        return f;
}
us(int x){
    int c=1;
    for(int i=1;i<=x;i++){
        c=c*x;
    }
    return c;
}

int main()
{
    int x,n,i;
    float sonuc;
    printf("x girin:");
    scanf("%d",&x);
    printf("n girin:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sonuc=us(x)/fact(n);
    printf("%f",sonuc);}
    return 0;
}
