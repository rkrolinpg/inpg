#include<conio>
#include<stdio>
#include<stdlib>
int tablica[20];    //10-cio elementowa tablica do posortowania
int count[20];      //Talica pomocnicza
int c;
//
void countingsort(void)

int i;
//
randomize();
clrscr();
printf("Tablica przed posortowaniem:\n");
//Generowanie losowej tablicy liczb calkowitych z zakresu 0-20
for (i=1;i<11;i++)
{
tablica[i]=random(20);
printf("%i\n",tablica[i]);
}
countingsort();
printf("Tablica po posortowaniu:\n");
for (i=1;i<c;i++)
{
if (tablica[i]!=0)
printf("%i\n",tablica[i]);
}
printf("Dowolny klawisz\n");
getch();
}
