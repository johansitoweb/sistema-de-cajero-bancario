#include <stdio.h>  

void mostrar_menu() {  
    printf("Bienvenido al sistema de cajero automatico\n");  
    printf("Seleccione una opción:\n");  
    printf("1. Consultar saldo\n");  
    printf("2. Ingresar dinero\n");  
    printf("3. Retirar dinero\n");  
    printf("4. Salir\n");  
}  

int main() {  
    int opcion;  
    float saldo = 0.0;  
    float monto;  

    do {  
        mostrar_menu();  
        printf("Ingrese su opción: ");  
        scanf("%d", &opcion);  

        switch (opcion) {  
            case 1:  
                printf("Su saldo actual es: $%.2f\n", saldo);  
                break;  
            case 2:  
                printf("Ingrese el monto a ingresar: $");  
                scanf("%f", &monto);  
                if (monto > 0) {  
                    saldo += monto;  
                    printf("Monto ingresado exitosamente. Su nuevo saldo es: $%.2f\n", saldo);  
                } else {  
                    printf("Por favor, ingrese un monto válido.\n");  
                }  
                break;  
            case 3:  
                printf("Ingrese el monto a retirar: $");  
                scanf("%f", &monto);  
                if (monto > 0 && monto <= saldo) {  
                    saldo -= monto;  
                    printf("Monto retirado exitosamente. Su nuevo saldo es: $%.2f\n", saldo);  
                } else if (monto > saldo) {  
                    printf("Fondos insuficientes.\n");  
                } else {  
                    printf("Por favor, ingrese un monto válido.\n");  
                }  
                break;  
            case 4:  
                printf("Gracias por usar el sistema de cajero automático. ¡Hasta luego!\n");  
                break;  
            default:  
                printf("Opción inválida. Por favor, elija una opción del menú.\n");  
                break;  
        }  

        printf("\n");  

    } while (opcion != 4);  

    return 0;  
}