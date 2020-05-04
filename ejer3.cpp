//EJERCICIO 3: HALLAR EL MAYOR FACTOR PRIMO EN 600851475143
#include <iostream>

using namespace std;

int main(){
    long long a=600851475143;
    int b=2;
    int prim_max=0;

    while(a>1){
        while(a%b==0){
            a=a/b;
            prim_max=b;
        }
        b++;
    }
    cout<<"el prim mayor es: "<<prim_max<<"\n";
    return 0;
}