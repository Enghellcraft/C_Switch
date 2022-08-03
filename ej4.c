#include <stdio.h>

int main() {
 char car;
 printf("\n Introduzca una letra: \n");
 scanf("%c",&car);
 switch (car)
 {
 case 'a' :printf("\n.-" );
 break;
 case 'e' :printf( "\n." );
 break;
 case 'i' :printf( "\n.." );
 break;
 case 'o' :printf( "\n---" );
 break;
 case 'u' :printf( "\n.--" );
 break;
 default : printf( "\nNo pertenece al Codigo Morse" );
 }
 return 0;
}

