#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int fakt(int n){
    int i;
    int fakt=1;
    for(i=1;i<=n;i++){
        fakt=fakt*i;
    }
    return fakt;
}
double faktop(int n, int x){
    double toplam=0.0;
    int i;
    for(i=1;i<=n;i++){
    double us= (double) pow(x,i);
    double f= (double) fakt(2*i-1);
    double bolum=us/f;
    toplam=toplam+bolum;
}
return toplam;
}
int main()
{
    int x,n;
    printf("x gir:");
    scanf("%d",&x);
    printf("n gir:");
    scanf("%d",&n);
    double toplam=faktop(n,x);
    printf("%f\n",faktop(n,x));
    printf("%f",floor(faktop(n,x)));
    return 0;
}
