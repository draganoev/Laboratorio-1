#include <iostream>

using namespace std;

int redondear(float n);

int main(){
float numero;

cout<<"Ingrese el numero que desea redondear:";
cin>>numero;

cout<<redondear(numero);


return 0;
}

int redondear(float n){
int r;
float resto;
r=n;
resto=n-r;

    if(resto>0.5){
        return n+1;
    }else{
    return n;}

}
