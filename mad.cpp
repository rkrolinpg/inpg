
#include "stdio.h"
 
void potega_macierzy_modulo(int n, int* t, int a, int b, int m)
{
int p1,p2;
if(n>=1)
{
potega_macierzy_modulo(n/2, t, a, b, m);
p1=t[0]+t[3];
p2=t[2];
t[0]=t[0]*t[0]+t[1]*t[2];
t[2]*=p1;
t[3]=t[3]*t[3]+t[1]*p2;
t[1]*=p1;
if(n%2)
{
p1=t[0];
t[0]=t[2];
t[2]=t[2]*b+p1*a;
p1=t[1];
t[1]=t[3];
t[3]=t[3]*b+p1*a;
}
t[0]%=m;
t[1]%=m;
t[2]%=m;
t[3]%=m;
}
else
{
t[0]=1;
t[1]=0;
t[2]=0;
t[3]=1;
}
}
 
int main()
{
int t[4];
int n,a,b,x,y,m,res;
 
//dla ciagu Fibonacciego
a = 1;
b = 1;
x = 1;
y = 1;
 
m = 10; //modulo 10 bo bedziemy obliczac tylko ostatnia cyfre
 
printf("Podaj n\n");
scanf("%d",&n);
if (n==0) res = x;
else if (n==1) res = y;
else
{
potega_macierzy_modulo(n-2, t, a, b, m);
res = (x*(a*t[0]+b*t[2])+y*(a*t[1]+b*t[3])) % m;
}
printf("Ostatnia cyfra liczby Fibonacciego numer %d to %d\n",n,res);
return 0;
}