#include <iostream>
using namespace std;
int main() {
int nroVenta,dia,x,diaMaximo;
float importe, vector[31],recaudacionMaxima=0;

for(x=0;x<31;x++){
    vector[x]=0;
    }

cout<<"Ingrese numero de venta:";
cin>>nroVenta;

while(nroVenta!=0){
    cout<<"Ingrese numero de dia:";
    cin>>dia;
    cout<<"Ingrese el importe:";
    cin>>importe;

    vector[dia-1]+=importe;

    cout<<"Ingrese numero de venta:";
    cin>>nroVenta;
    }

for(x=0;x<31;x++){
    if(vector[x]!=0){
        cout<<"En el día "<<x+1<<" se vendieron:"<< "$"<<vector[x]<<endl;
        }
    if(vector[x]>recaudacionMaxima){
        diaMaximo=x+1;
        recaudacionMaxima=vector[x];}
    }
cout<<"El dia que mas recaudo fue el numero:"<<diaMaximo<<endl;
cout<<"El cual recaudo un total de: $ "<<recaudacionMaxima;

return 0; }
