#include<stdio.h>
#include<stdlib.h>
#define N 20

int main(){
    int i=0;
    double vt[N];
    double *punt = vt;
    while(i<N){
        *punt=1+rand()%100;
        printf("%f,  ", *punt);
        i++;
    }
    return(0);
}