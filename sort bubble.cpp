#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
int t[6]={33,41,54,43,61,1},schowek,zamiana; //deklaracja zmiennych, przypisanie liczb do tablicy
do
{
zamiana=0;//przed ka�dym "przejazdem" p�tli for zmienna zamiana jest zerowana
for (int i=0; i<5; i++)
{
if (t[i]>t[i+1])// je�li element tablicy jest wi�kszy od nast�pnego elementu
{
zamiana=zamiana+1; //je�li jest jaka� zmiana, to zmienne zamiana powi�ksza swoj� warto��
schowek=t[i];//warto�� t[i] jest kopiowana do schowka
t[i]=t[i+1];//t[i] przyjmuje warto�� nast�pnego elementu, gdy� jest on mniejszy
t[i+1]=schowek;//kolejny element tablicy przejmuje wcze�niejsz� warto�� poprzedniego elementu, gdy� jest on wi�kszy
}
}
}
while(zamiana!=0);//je�li zmienna zamiana mia�aby warto�� 0, oznacza�oby to �e nie dokonano �adnych zmian, a wi�c nie ma potrzeby dalszego sortowania
 
for (int j=0; j<=5; j++)
{
cout<<t[j]<<" ";// wypisanie posortowanych liczb
}
getch();
return 0;
}