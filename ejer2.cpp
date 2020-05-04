//EJERCICIO 2: SUMAR LOS VALORES PAR DE LA SUCECION DE FIBONACCI hasta 4000000
#include <iostream>

using namespace std;

int main(){
    int cont=0, a=1, b=0, c=0;

    while(c<4000000){
        c=a+b;
        b=a;
        a=c;
        if (c%2==0)
            cont+=c;
    }
    
    cout<<cont;
    return 0;
}