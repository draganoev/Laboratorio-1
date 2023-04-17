#include <iostream>
using namespace std;

int main () {
int clientes[50]={},tiempoEntrenamiento[50]={}, tiposDeEntrenamiento[10]={},acumuladorTiempo,flagEntrenamientos,minutosDeEntrenamiento[10]={},clienteTrabajador,flagCliente=0,totalEntrenado,flagOlvidados=0;
int nroEntrenamiento, cliente,tipoEntrenamiento,tiempo,x,j,b,minutosEntrenados,horasEntrenadas;
bool entrenado[10];
bool olvidados[10];


for(b=0;b<10;b++){
    olvidados[b]=false;
}

for(x=0;x<3;x++){
    for(b=0;b<10;b++){
    entrenado[b]=false;
}
for(j=0;j<10;j++){
    minutosDeEntrenamiento[j]=0;
}

cout<<"Cliente (101 a 150):";
cin>>cliente;
cout<<"Numero de entrenamiento:";
cin>>nroEntrenamiento;
acumuladorTiempo=0;
minutosEntrenados=0;
horasEntrenadas=0;
flagEntrenamientos=0;

while(nroEntrenamiento!=0){
    cout<<"Tipo de entrenamiento:";
    cin>>tipoEntrenamiento;
    cout<<"Tiempo entrenado:";
    cin>>tiempo;

    //PUNTO B, PUNTO C y PUNTO E
    for(b=0;b<10;b++){
        if(tipoEntrenamiento==b+1){
            entrenado[b]=true;
            olvidados[b]=true;
            flagOlvidados=1;
            minutosDeEntrenamiento[b]+=tiempo;
            flagEntrenamientos=1;
        }
    }



    //PUNTO A
    acumuladorTiempo+=tiempo;

cout<<"Numero de entrenamiento:";
cin>>nroEntrenamiento;
}
//PUNTO D
 if(flagCliente==0){
        clienteTrabajador=cliente;
        totalEntrenado=acumuladorTiempo;
        flagCliente=1;}else if(acumuladorTiempo>totalEntrenado){
        clienteTrabajador=cliente;
        totalEntrenado=acumuladorTiempo;}
//PUNTO A
minutosEntrenados=acumuladorTiempo%60;
horasEntrenadas=acumuladorTiempo/60;
cout<<"Entreno un total de "<<horasEntrenadas<<" horas con "<<minutosEntrenados<<" minutos"<<endl;

//PUNTO B
if(flagEntrenamientos!=0){
        cout<<"Este cliente entreno los tipos:"<<endl;
 for(b=0;b<3;b++){
    if(entrenado[b]==true){
        cout<<"Del tipo de entrenamiento "<<b<<" este cliente entreno un total de: "<<minutosDeEntrenamiento[b]<<" minutos"<<endl;
    }
}
}else{
cout<<"Este cliente es un vago y no entreno"<<endl;}


}
//PUNTO D
cout<<"El cliente que mas entreno fue:"<<clienteTrabajador<<endl;
cout<<"Con un total de "<<totalEntrenado<<" minutos entrenados"<<endl;

//PUNTO E
cout<<"Los tipos de entrenamiento que no se hicieron fueron los:"<<endl;
for(b=0;b<10;b++){
    if(olvidados[b]==false){cout<<b+1<<endl;
    }
}

return 0;
}
