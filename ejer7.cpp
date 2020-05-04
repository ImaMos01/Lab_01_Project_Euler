//EJERCICIO 7: HALLAR EL 10001 NUMERO PRIMO
#include <iostream>

using namespace std;

int main(){
    int numero=0, a=1, cont=0, primo=0;

    while(numero<=10001){ 
        for(int i=1; i<=a; i++)  
            if(a%i==0)
                cont++;
        if(cont==2 || cont==1){
            primo=a;
            numero++;
        }
        cont=0;
        a++;
    }

    cout<<"el primo n 10001 es: "<<primo<<"\n";
    return 0;
}