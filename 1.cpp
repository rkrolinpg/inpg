#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
 
/* Funkcja czyszc¹ca planszê */
void wyczysc (char plansza[3][3])
{
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            plansza[i][j]=' ';
 
}
 
/* Funkcja rysuj¹ca planszê na ekranie */
void wypisz (char plansza[3][3])
{
    system("cls"); // czyœc ekran. S¹ szybsze sposoby czyszczenia, ale ten jest w miare uniwersalny
 
    printf("[%c][%c][%c]\n",plansza[0][0], plansza[0][1], plansza[0][2]);
    //printf("\n");
    printf("[%c][%c][%c]\n",plansza[1][0], plansza[1][1], plansza[1][2]);
   //printf("\n");
    printf("[%c][%c][%c]\n",plansza[2][0], plansza[2][1], plansza[2][2]);
}
 
int pelna(char plansza[3][3])
{
int i, j;
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
            if (plansza[i][j] == ' ')
                return 0;
    return 1;
 
}
/*Funkcja ruch_gracza wykona nastepujace czynnosci:
wyswietli plansze,
wczyta ruch gracza,
jezeli gracza wybierze niepoprawne wspó³rzedne pola
lub wspó³rzedne zajetego pola,
funkcja wczyta nowy ruch gracza.*/
void ruch_gracza(char plansza[3][3])
{
    unsigned int i=3, j;
    wypisz(plansza);
    printf("Podaj wiersz i kolumne w ktorej chcesz wstawic krzyzyk\n");
    while ((i>2)||(j>2) || (plansza[i][j]!=' '))
        scanf("%u %u", &i, &j);
    plansza[i][j]='x';
}
/*Funkcja sprawdz sprawdzi:
czy na planszy nie ma trzech takich samych znaków lezacych
w jednej linii (wtedy którys z graczy wygra³),
czy plansza jest juz pe³na (wtedy jest remis)*/
char sprawdz(char plansza[3][3])
{
int i;
for (i=0;i<3;i++)
{
    if ( (plansza[i][0]!=' ')
        && (plansza[i][0]==plansza[i][1])
        && (plansza[i][0]==plansza[i][2]))
        return plansza[i][0];
    if ( (plansza[0][i]!=' ')
        &&(plansza[0][i]==plansza[1][i])
        &&(plansza[0][i]==plansza[2][i]) )
return plansza [0][i];
 
} // for
 
if ((plansza[0][0]!=' ')
    && (plansza[0][0]==plansza[1][1])
    && (plansza[0][0]==plansza[2][2]))
    return plansza[0][0];
 
if ((plansza[2][0]!=' ')
&&(plansza[2][0]==plansza[1][1])
&&(plansza[2][0]==plansza[0][2]))
return plansza[2][0];
 
if (pelna(plansza)==1)
    return 1;
return 0;
 
} //sprawdz
 
int uzupelnij (char plansza[3][3], char c)
{
int i, j;
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        if ((plansza[i][j]==c) && (plansza[i][(j+1)%3]==c)
            && (plansza[i][(j+2)]%3==' '))
            {
                plansza[i][(j+2)%3]='o';
                return 1;
            } // if
        if ((plansza[j][i]==c)&&(plansza[(j+1)%3][i]==c)
            &&(plansza[(j+2)%3][i]==' '))
            {
                plansza[(j+2)%3][i]='o';
                return 1;
            } //if
    }// for
        if ((plansza[i][2-i]==c)
        &&(plansza[(i+1)%3][2-(i+1)%3]==c)
        &&(plansza[(i+2)%3][2-(i+2)%3]==' ')){
        plansza[(i+2)%3][2-(i+2)%3]='o';
        return 1;
        }//if
        }//for
 
    return 0;
}