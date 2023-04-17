#include <iostream>

using namespace std;

int main(){
int edad,contadorEdades[9]={}, rastreador,masVotado,aux,x;
char sexo,color;
char colores[4]={};
string ganador[4]={"Negro","Azul","Blanco","Otros"};

//NEGRO INDICE 0
//AZUL INDICE 1
//BLANCO INDICE 2
//OTRO INDICE 3

cout<<"Edad:";
cin>>edad;

while(edad!=0){
    cout<<"Hombre (H) o Mujer (M):";
    cin>>sexo;
    cout<<"Color preferido ('N','A','B','O'):";
    cin>>color;

    //PUNTO A
    if(sexo=='M'){
        switch(color){
        case 'N':colores[1]++;
        break;
        case 'A':colores[2]++;
        break;
        case 'B':colores[3]++;
        break;
        case 'O':colores[4]++;
        break;
        }

    }

cout<<"Edad:";
cin>>edad;
}

masVotado=colores[1];

for(x=0;x<4;x++){
    if(colores[x]>masVotado){
        masVotado=colores[x];
    }
}

if(masVotado==1){
    cout<<"El color mas votado fue el "<<ganador[1];
}else if(masVotado==2){
cout<<"El color mas votado fue el "<<ganador[2];} else if (masVotado==3){
    cout<<"El color mas votado fue el "<<ganador[3];
}else {
cout<<"El color mas votado fue el "<<ganador[4];}



return 0;
}
