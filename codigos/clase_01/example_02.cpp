#include <stdio.h>


int suma(int a, int b){
    return a+b;
}


int main(int argc, char *argv[]){
    printf("%d + %d = %d\n", 1, 2, suma(1,2));
    printf("%f + %f = %f\n", float(1),float(2), suma(float(1),float(2)));
    return 0;
}