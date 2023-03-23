#include<stdio.h>
#include<stdlib.h>
#define M 7
#define N 5

int main(){
    int i=0;
    int j=0;
    int mt[N][M];
    int *pm=&mt[0][0];
    while(i<(N)){
        j=0;
        while(j<M){
            *(pm)=1+rand()%100;
            printf("%d  ", *(pm));
            pm++;
            j++;
        }
    printf("\n");
    i++;
    }
}