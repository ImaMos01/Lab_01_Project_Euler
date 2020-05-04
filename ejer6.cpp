//EJERCICIO 6: DIFERENCIA ENTRE LA SUMA DE CUADRADOS Y LA SUMA AL CUADRADO DE LOS 100 NUMEROS NATURALES
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int cuadrado=0, diferencia=0, suma=0;

    cuadrado=(100*101*201)/6; //aplicando formula (n*(n+1)*(2n+1))/6
    cout<<"la suma de los cuadrados de los 100 es: "<<cuadrado<<"\n";

    suma=pow(((100*101)/2),2);  //aplicando formula (n(n+1))/2
    cout<<"la suma de los 100 al cuadrado es: "<<suma<<"\n";

    diferencia=suma-cuadrado;
    cout<<"la diferencia es: "<<diferencia<<"\n";
    return 0;
}