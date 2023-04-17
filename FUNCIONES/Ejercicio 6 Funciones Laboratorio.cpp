#include <iostream>

using namespace std;
int buscador(int valor_buscado,int vNumeros[],int TAM);

int buscador(int valor_buscado,int vNumeros[],int TAM){
int x,flag=0;

cout<<"Ingrese los numeros que componen el vector:"<<endl;
for(x=0;x<TAM;x++){
    cin>>vNumeros[x];
}

for(x=0;x<TAM;x++){
    if(valor_buscado==vNumeros[x]){
        flag=1;
    }

}
return flag;

}


int main(){
int valor_buscado, TAM;
int vNumeros[TAM];
int h;

cout<<"Tamano del vector:";
cin>>TAM;

cout<<"Valor buscado:";
cin>>valor_buscado;

h=buscador(valor_buscado,vNumeros,TAM);

if(h==1){
    cout<<"Verdadero";
}else{
cout<<"Falso";}


return 0;
}
