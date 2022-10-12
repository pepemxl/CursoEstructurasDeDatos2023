#include <stdio.h>


int sumaEnteros(int a, int b){
    return a+5*b;
}

float sumaFlotantes(float a, float b){
    return 3*a+b;
}

int main(int argc, char *argv[]){
    printf("%d + %d = %d\n", 1, 2, sumaEnteros(1,2));
    printf("%f + %f = %f\n", 1.0, 2.0, sumaFlotantes(1.0,2.0));
}