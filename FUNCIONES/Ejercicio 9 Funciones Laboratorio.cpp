#include <iostream>

using namespace std;

int buscador(char valor_buscado,char vec[],int TAM);
int buscador(char valor_buscado,char vec[],int TAM){
int x,cont=0;

for(x=0;x<TAM;x++){
    cout<<"Caracter: "<<endl;
    cin>>vec[x];
}

for(x=0;x<TAM;x++){
    if(vec[x]==valor_buscado){
        cont++;
    }

}
return cont;

}

int main(){
int x, TAM,resultado;
char valor_buscado,vec[TAM];

cout<<"Tamano del vector:";
cin>>TAM;
cout<<"Caracter buscado:";
cin>>valor_buscado;

resultado=buscador(valor_buscado,vec,TAM);

cout<<"El caracter ingresado figura "<<resultado<<" veces en el vector"<<endl;


return 0;
}
