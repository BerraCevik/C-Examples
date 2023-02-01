#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<10;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<10;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}
