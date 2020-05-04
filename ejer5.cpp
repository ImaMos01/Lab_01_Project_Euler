//EJERCICIO 5: HALLAR EL MENOR NÚMERO QUE ES DIVISIBLE ENTRE 1 HASTA 20
#include <iostream>

using namespace std;

int main(){    
    int n=100, numero=0, cont=0;
    while(true){
        for(int i=1; i<=20; i++)
            if(n%i==0)
                cont++;
            else 
                break;

        if(cont==20){
            numero=n;
            break;
        }
        cont=0;
        n++;
    }
    cout<<"n numero es: "<<numero<<"\n";
    return 0;
}