# include <stdio.h>
int main (void){
    int P,K,A,c,p;
    printf("         SITIO DE CAMIONES  EL GOLEM\n\n\n");
    printf("Tipos de autobus y costos:\n");
    printf("[1].-Tipo A($2.00 x Km)\n");
    printf("[2].-Tipo A($2.50 x Km)\n");
    printf("[3].-Tipo A($3.00 x Km)\n");
    printf("\nIngrese en que autobus desea viajar:");
    scanf("%i",&A);
    printf("\nIngrese el total de personas: ");
    scanf("%i",&P);
    printf("\nIngrese los kilometros recorridos: ");
    scanf("%i",&K);
    switch(A){
        case 1:
            if(P>20){
                c=P*2;
                p=c*K;
                printf("El total a pagar es: $%i",p);
                printf("Gracias por elegir a CAMIONES EL GOLEM\n");
            }
                else{
                    c=20*2;
                    p=c*K;
                    printf("El total a pagar es: $%i",p);
                    printf("Gracias por elegir a CAMIONES EL GOLEM\n");
                }
            break;
        case 2:
            if(P>20){
                c=P*2.50;
                p=c*K;
                printf("El total a pagar es: $%i",p);
                printf("Gracias por elegir a CAMIONES EL GOLEM\n");
            }
                else{
                    c=20*2.50;
                    p=c*K;
                    printf("El total a pagar es: $%i",p);
                    printf("Gracias por elegir a CAMIONES EL GOLEM\n");
                }
            break;
        case 3:
                if(P>20){
                c=P*3;
                p=c*K;
                printf("El total a pagar es: $%i",p);
                printf("Gracias por elegir a CAMIONES EL GOLEM\n");
            }
                else{
                    c=20*3;
                    p=c*K;
                    printf("El total a pagar es: $%i",p);
                    printf("Gracias por elegir a CAMIONES EL GOLEM\n");
                }
            break;
        default:
            printf("Ha elegido una opcion que no existe\n");      
    }
    return 0;
}