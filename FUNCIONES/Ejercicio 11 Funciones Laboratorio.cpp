#include <iostream>

using namespace std;

void asignarEstacion(int dia, int mes, int hemisferio, string estacion[]);

int main(){
int d,m,h;
string e[4]={"Primavera","Verano","Invierno","Otono"};

cout<<"Dia:";
cin>>d;
cout<<"Mes:";
cin>>m;
cout<<"Hemisferio:";
cin>>h;


asignarEstacion(d,m,h,e);


return 0;
}

void asignarEstacion(int dia, int mes, int hemisferio, string estacion[]){
int flagHemisferio=0,nroMes,nroDia,x;

if(hemisferio==1){
    flagHemisferio=1;
}


}



