//Pierwiastek n-tego stopnia
//Micha³ Witaszek
//dla www.algorytm.org

#include <iostream>
#include <cmath>

using namespace std;

double pierwiastek(double a, double n)
{
//poczatkowe przyblizenie
double result = n+a;
//x^n-1
double tmp = pow(result,(n-1));
//dokladnosc obliczen
double e = 0.00000001;

//dopoki wynik jest mniej dokladny niz zadana wartosc
while (abs(a - tmp * result)>= e)
{
//oblicz nowe przyblizenie
result = 1/n*((n-1)*result + (a/tmp));
//x^n-1
tmp = pow(result, n-1);
}

return result;
}

int main()
{

double a,b;
cout << "Pierwiastek n-tego stopnia" << endl;
cout << "Liczba pierwiastkowana: ";
cin >> a;
cout << "Podstawa pierwiastka: ";
cin >> b;

cout << pierwiastek(a,b);

return 0;
}
