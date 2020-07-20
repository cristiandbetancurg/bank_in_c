#include <stdio.h>
#include <stdlib.h>
#include <math.h>	

int main ()

{
    int saldo;   
    int deposito;
    int pregunta;

    printf("\n\n....::::Bienvenido a su Portal de Mi-Banco el Línea::::....\n\n¿Qué desea hacer?\n\nPresione:\n\n1-Consultar Saldo\n2-Depositar Fondos\n3-Trasnferir Fondos\n4-Pagar con Débito\nIngrese su opción:");
    
    scanf("%d",&pregunta);

    if (pregunta == 2){
       printf("Ingrese el monto a depositar\n");
       scanf("%d",&deposito);    
    }else{
        printf("intente de nuevo\n");
        scanf("%d",&pregunta);

        if (pregunta == 2){
             printf("Ingrese el monto a depositar\n");    
        }
    
    }

    printf("Gracias por depositar: %d",deposito);   
    
    return 0;

}