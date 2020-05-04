//EJERCICIO 4: HALLAR EL MAYOR PALINDROMO
#include <iostream>

using namespace std;

int main(){
    int n=0, residuo=0, invertir=0, palindromo=0;
    for(int i=999; i>=100; i--)
        for (int j=999; j>=100; j--){
            n=i*j;
            while(n>0){        //invertir el numero
                residuo=n%10;
                invertir=(invertir*10)+residuo;
                n/=10;
            }
            if((i*j)==invertir){      //comprobar si es un palindromo
                if(palindromo<invertir)
                    palindromo=invertir;
            }
            invertir=0;
        }
    cout<<"largest palindrome: "<<palindromo<<"\n";
    return 0;
}