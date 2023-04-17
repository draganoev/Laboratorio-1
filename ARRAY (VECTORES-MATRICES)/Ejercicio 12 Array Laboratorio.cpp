#include <iostream>

using namespace std;

int main(){
int vectorProvincias[24]={},vectorZonas[9]={},contadorZonas[9]={};
int provincia,zona,x,j,zonaEvaluada=0;
string nombreProvincias[24]={"Cordoba","Entre Rios","Santa Fe","Capital Federal","Catamarca","Buenos Aires","Neuquen","Rio Negro","Mendoza","Salta","San Juan","Tucuman","Chaco","Formosa","Santiago del Estero","Tierra del Fuego","Corrientes","La Rioja","Chubut","Misiones","San Luis","Santa Cruz","Jujuy","La Pampa"};

for(x=0;x<24;x++){
    cout<<"Provincia:"<<endl;
    cin>>provincia;
    cout<<"Zona:"<<endl;
    cin>>zona;

    vectorProvincias[provincia-1]=zona;
    contadorZonas[zona-1]++;

    cout<<"La provincia es "<<provincia<<endl;
    cout<<"Esta provincia pertenece a la zona:"<<vectorProvincias[provincia-1]<<endl;
    cout<<"La zona "<<zona<<" hasta el momento tiene "<<contadorZonas[zona-1]<<endl;

}

for(x=0;x<9;x++){
    if(contadorZonas[x]>=3){
        cout<<"La zona "<<x+1<<" tiene mas de tres provincias:"<<endl;
            for(j=0;j<24;j++){
                if(vectorProvincias[j]==x+1){
                    cout<<nombreProvincias[j]<<endl;
                }
            }
    }
}

return 0;
}
