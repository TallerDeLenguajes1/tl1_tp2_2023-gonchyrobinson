#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAMA 50
#define TAMA2 6
#define TAMA3 5

struct PC{
    int velocidadProcesamiento;
    int anio;
    char *tipo;
    int cantNucleos;
}typedef PC;

PC InicializaPc();
void CargaVector(PC vector[]);
void MuestraVector(PC vector[]);
void MuestraEstructura(PC estruct);
void pcMasVieja(PC vector[]);
void pcMasRapida(PC vector[]);

int main(){
    PC computadoras[5];
    CargaVector(computadoras);
    MuestraVector(computadoras);
    pcMasVieja(computadoras);
    pcMasRapida(computadoras);
}

PC InicializaPc(){
    char *tipos [] ={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    PC datos;
    datos.velocidadProcesamiento=1+rand()%3;
    datos.anio=2015+rand()%9;
    datos.cantNucleos=1+rand()%8;
    datos.tipo= tipos[rand()%7];
    return(datos);
}
void CargaVector(PC vector[]){
    for(int i=0; i<TAMA3;i++){
        vector[i]=InicializaPc();
    }
}
void MuestraVector(PC vector[]){
    for(int i=0; i<TAMA3;i++){
        printf("\n\n==============DATOS COMPUTADORA %d ===================", i+1);
        MuestraEstructura(vector[i]);
    }
}
void MuestraEstructura(PC estruct){
    printf("\nVelocidad:   %d", estruct.velocidadProcesamiento);
    printf("\nAnio:   %d", estruct.anio );
    printf("\n Cantidad Nucleos:   %d", estruct.cantNucleos );
    printf("\nTipo:  %s", (estruct.tipo));
}

void pcMasVieja(PC vector[]){
    int indiceMax;
    int min=2024;
    for(int i=0; i<TAMA3;i++){
        if(vector[i].anio<min){
            indiceMax=i;
            min=vector[i].anio;
        }
    }
    printf("\n==============PC MAS VIEJA ==================\n");
    MuestraEstructura(vector[indiceMax]);
}
void pcMasRapida(PC vector[]){
    int indiceMax;
    int velMax=0;
    for(int i=0; i<TAMA3;i++){
        if(vector[i].velocidadProcesamiento>velMax){
            indiceMax=i;
            velMax=vector[i].velocidadProcesamiento;
        }
    }
    printf("\n========================PC MAS RAPIDA ===========================\n");
    MuestraEstructura(vector[indiceMax]);
   
}