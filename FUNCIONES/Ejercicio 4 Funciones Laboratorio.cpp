#include <iostream>

using namespace std;

void cargarVector(int vec[],int tam);

int main(){
int tam,vec[tam];

cout<<"Tamano del vector:";
cin>>tam;

cargarVector(vec,tam);


return 0;
}
void cargarVector(int vec[],int tam){
int x;

for(x=0;x<tam;x++)

 cin>>vec[x];


}
