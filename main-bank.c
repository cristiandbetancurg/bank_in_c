#include <stdio.h>
#include <stdlib.h>
#include <math.h>	

int main ()

{
    int saldo;   
    int deposito;
    int pregunta;

    printf("\n\n....::::Bienvenido a su Portal de Mi-Banco el Línea::::....\n\n\n\n¿Qué desea hacer?\n\nPresione:\n 1-Consultar Saldo\n2-Depositar Fondos\n3-Trasnferir Fondos\n4-Pagar con Débito\nIngrese su opción:");
    
    scanf("%d",&pregunta);

    if (pregunta == 2){
       printf("Ingrese el monto a depositar\n");    
    }else{
        printf("intente de nuevo\n");
        scanf("%d",&pregunta);

        if (pregunta == 2){
             printf("Ingrese el monto a depositar\n");    
        }
    
    }    
    
    return 0;

}