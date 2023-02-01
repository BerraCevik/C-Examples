#include <stdio.h>
#include <stdlib.h>

float toplam(float sicaklik[]){
    float toplam=0;
    for(int i=0;i<7;i++){
        toplam+=sicaklik[i];
    }
    return toplam;
}

int main()
{
    int i;
    float sicaklik[7];
    for(i=0;i<7;i++){
        printf("gir: ");
        scanf("%f",&sicaklik[i]);
    }
    float ortalama=toplam(sicaklik)/7.0;
    printf("ort= %f\n",ortalama);
    for(i=0;i<7;i++){
        if(sicaklik[i]<ortalama){
            printf("%d. gun ortalama altinda\n",i+1);
        }
        else if(sicaklik[i]>ortalama){
            printf("%d. gun ortalama ustunde\n",i+1);
        }
        else if(sicaklik[i]=ortalama){
            printf("%d. gun ortalama kadar\n",i+1);
        }
    }
    return 0;
}
