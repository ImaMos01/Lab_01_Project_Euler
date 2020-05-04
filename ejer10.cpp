//EJERCICIO 10: HALLAR LA SUMA TE LOS PRIMOS DEBAJO EL 2000000
#include <iostream>

using namespace std;

int main(){
    long long primo=1, cont=0, a=2000000;
    double suma=0;

    while(primo<=a){ 
        for(int i=1; i<=primo; i++)  
            if(primo%i==0){
                cont++;
                if (cont>2)
                    break;
            }
        if(cont==2){
            suma+=primo;
        }
        cont=0;
        primo++;
    }
    
    cout<<"la suma de los primos son: "<<suma;
    return 0;
}