#include <stdio.h>
int main()
{
int a,b;
printf("Podaj a: ");
scanf("%i", &a);
printf("Podaj b: ");
scanf("%i", &b);
if (a < 1 || b < 1)
{printf("Error, zle dane !\n");}
else{
printf("Kalkulator by Ferex Blog 2013-2016\n");
printf("Wynik dodawania to: %i\n", a+b);
printf("Wynik odejmowania to: %i\n", a-b);
printf("Wynik modulo to: %i\n", a%b);
printf("Wynik mnozenia to: %i\n", a*b);
printf("Wynik dzielenia to: %i\n", a/b);
printf("Reszta funkcji na dzien dzisiejszy jest niedostepna :)\n");
}
return 0;
}
