#include <stdio.h>
#include <stdlib.h>

int main()
{
struct jugador{
    char nombre [50];
    int edad;
    float altura;
};

struct jugador jugadores [5];

for (int i=0; i<5; i++){
    printf("Introduce el nombre del jugador %d\n", i+1);
    gets (jugadores [i].nombre);
    printf("Introduce la edad del jugador %d\n", i+1);
    scanf("%d", &jugadores[i].edad);
     printf("Introduce la altura del jugador %d\n", i+1);
    scanf("%f", &jugadores [i].altura);

    fflush(stdin);
}
int opc= -1;

while (opc != 0){
    printf("Introduce la opcion que deseas realizar:\n1-Listar jugador\n2-Buscar jugador\n3-Jugador mas alto\no-Salir\n");
scanf ("%d",&opc);
fflush(stdin);

if (opc == 1) {
    for (int i=0;i<5;i++){
        printf("Jugador de nombres %s y altura %.2f\n", jugadores[i].nombre, jugadores [i].altura);
    }
}
if (opc == 2) {
char nombre_jugador [50]; 
printf("Introduce el nombre del jugador que deseas buscar\n"); 
gets (nombre_jugador);
int encontrado = 0;

for (int i=0; i<5; i++)
    if (strcmp(jugadores [i].nombre, nombre_jugador) == 0) {
        encontrado = 1;
        printf("La edad del jugador es %d y su altura %.2f", jugadores [i].edad, jugadores[i].altura);
            }
        }
   if (encontrado== 0) {
        printf("Jugador no encontrado\n");
        }
    }
if (opc == 3) {
    float mayor_altura = jugadores[0].altura;
    char nombre_mayor_altura [50];
    int edad_mayor_altura = jugadores[0].edad;
    stropy (nombre_mayor_altura, jugadores[0].nombre);
    for (int i=1; i<5; i++) {
        if (jugadores[i].altura > mayor_altura) {
            stropy (nombre_mayor_altura, jugadores [1].nombre);
            edad_mayor_altura = jugadores[i].edad;
            mayor_altura = jugadores [i].altura;
            }
        }
        
printf("El nombre del jugador de mayor altura es es y su edad es %d\n", nombre_mayor_altura, edad_mayor_altura);
    }    
}




