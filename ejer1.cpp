//EJERCICIO 1: MULTIPLOS DE 3 Y 5 DE BAJO DEL 1000
#include <iostream>

using namespace std;

int main(){
    int sum=0;
    for(int i=0; i<1000; i++){
        if(i%3==0 || i%5==0)
            sum+=i;
    }
    cout<<"la suma es: "<<sum<<"\n";
    return 0;
}