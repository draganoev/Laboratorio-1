#include <iostream>

using namespace std;

int mostrarMaximo(int vNumeros[],int TAM);

int mostrarMaximo(int vNumeros[],int TAM){
int maximo,x,posicionMaximo;


cout<<"Ingrese los numeros que forman el vector:"<<endl;
for(x=0;x<TAM;x++){
    cin>>vNumeros[x];
}

maximo=vNumeros[0];
posicionMaximo=0;

for(x=0;x<TAM;x++){
    if(vNumeros[x]>maximo){
        maximo=vNumeros[x];
        posicionMaximo=x+1;
    }

}
return posicionMaximo;

}

int main(){
int TAM,resultado;
int vNumeros[TAM];

cout<<"Tamano del vector:";
cin>>TAM,

resultado=mostrarMaximo(vNumeros,TAM);

cout<<"La posicion del numero maximo fue la:"<<resultado<<endl;


return 0;
}
