#include <stdio.h>
#include <stdlib.h>

int main()
{
char cadena [50];
char caracter;

printf("Introduce una cadena\n");
gets (cadena);
printf("Introduce un caracter\n"); 
caracter = getchar();

int i = 0;
int pos = -1;
while (cadena[i] != '\0' && pos == -1) {
    if (cadena [i] == caracter) {
        pos= i;
    }
    i = i + 1;
}
if (pos!=-1) {
    printf("El caracter so se encuentra en la cadena is en la posición d", caracter, cadena, pos);
}    
else{ 
    printf("El caracter sc no se encuentra en la cadena %s", caracter, cadena);
}
}