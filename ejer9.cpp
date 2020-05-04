//EJERCICIO 9: HALLAR LOS VALORES DE ABC QUE CUMPLA CON EL TRIPLE PITAGORICO DE A+B+C=100 Y LUEGO MULTIPLICAR ABC
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int multi=0;

    for(int i=998; i>0; i--){
        for(int j=1; j<i; j++){
            for (int k=0; k<j; k++)
                if (i+j+k==1000)
                    if(pow(k,2)+pow(j,2)==pow(i,2)){
                        multi=i*j*k;
                        break;
                    }
            if(multi>0)
                break;
        }            
        if(multi>0)
            break;
    }
        
    cout<<"la multiplicacion es: "<<multi<<"\n";
    return 0;
}