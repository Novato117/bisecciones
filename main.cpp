#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#define PRECISION 6
using namespace std;
double f(double x);
int main()
{
    reinicio:
cout << setprecision(PRECISION); // Establecemos la precisión 6
double a, b, tolerancia;
int k;
cout << "\nEscoja el intervalo [a,b] para la funcion 4x^3 - 5x^2 +3x -2" << endl;
do{
cout << "\na = ";
cin >> a;
cout << "b = ";
cin >> b;
if(b<0 && a>0){
    cout<<"valor invertido a: "<<a<<" b: "<<b<<endl;
    cout<<"ingrece 1 para reiniciar programa : "<<endl;
cin>>k;
if(k==1){
    system("clear");
    goto reinicio;
     system("CLS");
}
}
if(b<0){
cout<<"no se encuentra la raiz en intervalo a: "<<a<<" b: "<<b<<" error b debe ser mayor a (b>a)"<<endl;
cout<<"ingrece 1 para reiniciar programa : "<<endl;
cin>>k;
if(k==1){
    system("clear");
    goto reinicio;
     system("CLS");
}
}
// [a, b]
float xr; // raiz de la función
if (f(a) * f(b) > 0) {
cout << "\nNo se puede aplicar el metodo de la biseccion\n";
cout << "porque f(" << a << ") y f(" << b << ") " << endl;
cout<<"evaluando f(a)"<<a<<" "<<f(a);
cout<<"\n evaluando f(b)"<<b<<" "<<f(b);
} else {
cout << "Tolerancia = ";
cin >> tolerancia;
cout << "\na\tb\tx\tf(a)\t\tf(b)\t\tf(x)\n" << endl;
do {
xr = (b + a) / 2.0; //punto medio
cout << a << "\t" << b << "\t" << xr << "\t";
cout << f(a) << "\t" << f(b) << "\t" << f(xr) << endl;
// Vemos si cumple o no cumple
if (abs(f(xr)) <= tolerancia) { // xr sería la raiz de f
cout << "\n\nPara una tolerancia " << tolerancia << " la raiz de f es " << xr << endl;
break;
} else {
if (f(xr) * f(a) > 0) {
a = xr;
} else if (f(xr) * f(b) > 0) {
b = xr;
}
}
} while (1);
}
cin.get();
cin.get();
cout<<"ingrece 1 para reiniciar programa : "<<endl;
cin>>k;
if(k==1){
    system("cls");
}
}while(k==1);
return 0;
}
//funcion usada x^4 + 3*x^3 - 2
double f(double x)
{//pow(x, 4) + 3 * pow(x, 3) - 2
return 4*pow(x, 3) - 5 * pow(x, 2)+3*x -2 ;
}
