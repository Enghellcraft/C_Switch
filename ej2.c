#include <stdio.h>

int main() {
 char car;
 printf("\n Introduzca una letra: \n");
 scanf("%c",&car);
 switch (car)
 {
 case 'a' :printf("\nEs vocal" );
 break;
 case 'e' :printf( "\nEs vocal" );
 break;
 case 'i' :printf( "\nEs vocal" );
 break;
 case 'o' :printf( "\nEs vocal" );
 break;
 case 'u' :printf( "\nEs vocal" );
 break;
 default : printf( "\nNo es vocal" );
 }
 return 0;
}
