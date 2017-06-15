#include <stdio.h>
int main()
{
int a,b,c;
printf("Podaj a: ");
scanf("%i", &a);
printf("Podaj b: ");
scanf("%i", &b);
if (a < 1 || b < 1)
{printf("Error, zle dane !\n");}
else{
c = 0;
while ( c < 1 || c > 6 )
{
printf("Podaj mi co chcesz zrobic:\n");
printf("1) Dodać\n");
printf("2) Odjąć\n");
printf("3) Pomnożyć\n");
printf("4) Odjąć\n");
printf("5) Obliczyć modulo\n");
printf("6) Zakończyć program\n");
printf("Twój wybór to: ");
scanf("%i", &c);
}
if ( c == 1)
{printf("Wynik dodawania to: %i\n", a+b);}
else if ( c == 2)
{printf("Wynik odejmowania to: %i\n", a-b);}
else if ( c == 3)
{printf("Wynik mnożenia to: %i\n", a*b);}
else if ( c == 4)
{printf("Wynik dzielenia to: %i\n", a/b);}
else if ( c == 5)
{printf("Wynik modulo to: %i\n", a%b);}
else if ( c == 6)
{return 0;}

}
return 0;
}
