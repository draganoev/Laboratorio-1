#include <iostream>

using namespace std;

void listarVector(int vec[],int tam);

int main(){
int tam,x;
int vec[tam];

cout<<"Ingrese el tamano del vector:";
cin>>tam;

listarVector(vec,tam);


return 0;
}

void listarVector(int vec[],int tam){
int x;

for(x=0;x<tam;x++){
    cin>>vec[x];
}
cout<<endl<<endl;

cout<<"Los numeros que componen este vector son:"<<endl;

for(x=0;x<tam;x++){
    cout<<vec[x]<<endl;
}


}
