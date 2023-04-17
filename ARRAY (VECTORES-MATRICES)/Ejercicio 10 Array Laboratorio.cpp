#include <iostream>

using namespace std;

int main(){
bool numeros[100]={};
int x,ticket,acumuladorVentas=0,ganancia,perdida;
int esperado=50000;
bool afortunados[2]={};
int primerPuesto=7,segundoPuesto=15;

for(x=0;x<2;x++){
    afortunados[x]=false;
}

for(x=0;x<100;x++){
    numeros[x]=false;
}

cout<<"Numero de ticket:";
cin>>ticket;

while(ticket!=-1){

    if(numeros[ticket]==false){
    numeros[ticket]=true;
    acumuladorVentas+=500;
    }else {
    cout<<"Lo sentimos, este numero ya fue comprado"<<endl;;}

switch(ticket){
case 7:afortunados[1]=true;
break;
case 15:afortunados[2]=true;
break;
}

cout<<"Numero de ticket:";
cin>>ticket;

}
cout<<"El total recaudado en compra de numeros fue de $"<<acumuladorVentas<<endl;
esperado=esperado-acumuladorVentas;

if(acumuladorVentas>35000){
    ganancia=acumuladorVentas-35000;
    cout<<"Ganancia neta: $"<<ganancia<<endl;
}else {
perdida=acumuladorVentas-35000;
cout<<"La perdida fue de: $"<<perdida*(-1)<<endl;}

if(afortunados[1]==true){
    cout<<"El numero ganador fue el 7 y alguien lo obtuvo"<<endl;
}else{
cout<<"El numero ganador fue el 7 pero nadie lo obtuvo"<<endl;}

if(afortunados[2]==true){
    cout<<"El segundo ganador fue el 15 y alguien lo obtuvo"<<endl;
}else {
cout<<"El segundo ganador fue el 15 pero nadie lo obtuvo"<<endl;}


return 0;
}
