#include <stdio.h>

int main() {
    int nota, suma=0, cont=0, prom;
    while (nota!=-1){
        printf("Ingrese las notas de los alumnos del curso:\n");
        scanf("%d", &nota);
        if(nota!=-1){
        suma=suma+nota;
        cont++;
        }
    }
    prom=suma/cont;
    printf("El promedio es: %d", prom);
    return 0;
}
