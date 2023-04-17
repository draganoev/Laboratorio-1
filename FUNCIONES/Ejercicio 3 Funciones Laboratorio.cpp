#include <iostream>

using namespace std;

bool esPrimo(int n);


int main(){
int numero;

cout<<"Ingrese un numero:";
cin>>numero;

if(esPrimo(numero)==true){
    cout<<"Es primo";
}else{
cout<<"No es primo";}


return 0;
}

bool esPrimo(int n){
int cont=0;
int divisor;
divisor=n;

while(divisor!=0){

    if(n%divisor==0){
        cont++;
        divisor--;
    }else{
    divisor--;}
}
if(cont==2){
    return true;
}else{
return false;}

}

