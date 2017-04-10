#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insertionsort(int tablica[10], int ile_liczb)
{
int i,j,v;
for (i=1;i<ile_liczb;i++)
{
j=i;
v=tablica[i];
while ((j>0) && (tablica[j-1]>v))
{
tablica[j]=tablica[j-1];
j--;
}
tablica[j]=v;
}
}

void main(void)
{
int ile_liczb,i,liczba;
int tablica[10];

clrscr();
printf("Ile liczb chesz posortowac (do 10) ? ");
scanf("%i",&ile_liczb);
for(i=0; i<ile_liczb; i++)
{
printf("Wprowadz liczbe #%i: ",i+1);
scanf("%i",&liczba);
tablica[i]=liczba;
}

clrscr();
printf("Tablica przed posortowaniem:");
for(i=0; i<ile_liczb; i++) printf("\n%i",tablica[i]);

insertionsort(tablica,ile_liczb);

printf("\nTablica po posortowaniu:");
for(i=0; i<ile_liczb; i++) printf("\n%i",tablica[i]);

printf("\nDowolny klawisz...");
getch();
}
