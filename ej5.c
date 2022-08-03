#include <stdio.h>
int main() {
 int peso, opcion;
 printf("Introduzca peso en kilogramos:");
 scanf("%d",&peso);
 printf("Seleccione opción:\n");
 scanf("%d",&opcion);
 switch (peso)

 {
 case 1 : printf("Hectogramos\n");
 break;
 case 2 : printf("Decagramos\n");
 break;
 case 3 : printf("Gramos\n");
 break;
 case 4 : printf("Decigramos\n");
 break;
 case 5 : printf("Centigramos\n");
 break;
 case 6 : printf("Miligramos\n");
 break;
 default : printf( "\n ERROR: Dia incorrecto." );
 }
 return 0;
}



