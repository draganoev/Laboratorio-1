#include <iostream>

using namespace std;

int main(){
int paisContinente[10]={},destino[10]={},industria[6]={};
float toneladasExportadas,importePorTonelada;
int x,continente,codigoPais,codigoIndustria;

for(x=0;x<10;x++){
    cout<<"Continente al que corresponde el pais "<<x+1<<endl;
    cin>>continente;
    paisContinente[x]=continente;
}

cout<<"Codigo de pais:";
cin>>codigoPais;

while(codigoPais!=0){
    cout<<"Codigo de industria:";
    cin>>codigoIndustria;
    cout<<"Toneladas exportadas:";
    cin>>toneladasExportadas;
    cout<<"Importe por tonelada:";
    cin>>importePorTonelada;

    //PUNTO A
    switch(codigoIndustria){
        case 11:industria[0]+=toneladasExportadas;
        break;
        case 22:industria[1]+=toneladasExportadas;
        break;
        case 33:industria[2]+=toneladasExportadas;
        break;
        case 44:industria[3]+=toneladasExportadas;
        break;
        case 55:industria[4]+=toneladasExportadas;
        break;
        case 66:industria[5]+=toneladasExportadas;
        break;
    }

    cout<<"Codigo de pais:";
    cin>>codigoPais;
}

for(x=0;x<6;x++){

    cout<<"La industria "<<(x+1)*11<<" exporto "<<industria[x]<<" toneladas"<<endl;

}


return 0;
}
