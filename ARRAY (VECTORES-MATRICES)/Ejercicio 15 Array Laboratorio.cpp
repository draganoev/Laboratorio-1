#include <iostream>

using namespace std;

int main(){
int cinco[5]={},diez[10]={};
int v_interseccion[5]={};
int x,j,rastreador;

for(x=0;x<5;x++){
    cout<<"Numero:";
    cin>>cinco[x];
}
cout<<endl;
cout<<"NUEVO VECTOR"<<endl;
for(x=0;x<10;x++){
    cout<<"Numero:";
    cin>>diez[x];
}

for(x=0;x<10;x++){
        rastreador=diez[x];
        for(j=0;j<5;j++){
            if(rastreador==cinco[j]){
               v_interseccion[j]=rastreador;}
        }
}

cout<<"Los numeros que comparten ambos vectores son:"<<endl;
for(x=0;x<5;x++){
    if(v_interseccion[x]!=0){
        cout<<v_interseccion[x]<<endl;
    }
}

return 0;
}
