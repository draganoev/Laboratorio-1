#include <iostream>

using namespace std;

void semana(int dia,string nombre[7]);
void semana(int dia,string nombre[7]){

int x;
for(x=0;x<7;x++){
    cout<<"El dia "<<x<<" corresponde a "<<nombre[x]<<endl;
}

}

int main(){
string nombre[7]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
int dia;

semana(dia,nombre);

return 0;
}
