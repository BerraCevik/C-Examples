#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float uzaklik(int x1,int x2,int y1,int y2){
    float uzaklik;
    uzaklik=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return uzaklik;
}

int main()
{
    int x1,x2,y1,y2;
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&y1);
    scanf("%d",&y2);
    printf("%f",uzaklik(x1,x2,y1,y2));
    return 0;
}
