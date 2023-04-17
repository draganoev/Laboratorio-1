#include <iostream>

using namespace std;

int contadorCaracteres(char vec[],char caracter);
int contadorCaracteres(char vec[],char caracter){
int x, cont=0;

while(vec[x]!='\0'){
    cont++;
    x++;
}
return cont;
}

int main(){
int TAM,resultado,caracter;
char vec[5]={'a','b','c','d','\0'};


resultado=contadorCaracteres(vec,caracter);

cout<<"Este vector tiene:"<<resultado<<" caracteres"<<endl;

return 0;
}
