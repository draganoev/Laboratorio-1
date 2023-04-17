#include <iostream>

using namespace std;

int main(){
float horas[5]={},extras[5]={},valorHoras,valorExtras,horasTrabajadas,calculoSueldo=0,acumuladorSueldo[5]={},horasTotales[5]={},realTrabajado;
int vectorEmpleados[5]={},nroEmpleado,dia;
int x;
bool trabajado[5]={};

for(x=0;x<5;x++){
    trabajado[x]=false;
}

for(x=0;x<5;x++){
    cout<<"Empleado:";
    cin>>nroEmpleado;
    cout<<"Valor horas:";
    cin>>valorHoras;
    cout<<"Valor extras:";
    cin>>valorExtras;

    horas[nroEmpleado-1]=valorHoras;
    extras[nroEmpleado-1]=valorExtras;
}

cout<<"----------------------------"<<endl;
cout<<"FIN DE CARGA DEL PRIMER LOTE"<<endl;
cout<<"----------------------------"<<endl;

cout<<"Empleado:";
cin>>nroEmpleado;

while(nroEmpleado!=0){
    cout<<"Dia:";
    cin>>dia;
    cout<<"Horas trabajadas:";
    cin>>horasTrabajadas;

    trabajado[nroEmpleado-1]=true;

    horasTotales[nroEmpleado-1]+=horasTrabajadas;

    if(horasTrabajadas<8){
        realTrabajado=horasTrabajadas;
    }else{
    realTrabajado=8;}

    acumuladorSueldo[nroEmpleado-1]+=(horas[nroEmpleado-1]*realTrabajado)+(horasTrabajadas-8)*extras[nroEmpleado-1];

    cout<<"Emppleado:";
    cin>>nroEmpleado;
}

for(x=0;x<5;x++){
    if(trabajado[x]==false){
        cout<<"El empleado con legajo "<<x+1<<" no trabajo"<<endl;
    }
}

for(x=0;x<5;x++){
    cout<<"El empleado con legajo "<<x+1<<" trabajo un total de "<<horasTotales[x]<<endl;
    cout<<"Su sueldo es de:"<<acumuladorSueldo[x]<<endl;
}

return 0;
}
