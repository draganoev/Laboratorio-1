#include <iostream>

using namespace std;

bool esBrianLarica(int matriz[5][5]);


int main(){
int x,j;
int matrizBrianLarina[5][5]={};
int posicion;

for(x=0;x<5;x++){
       for(j=0;j<5;j++){
    cout<<"CARGUE EL NUMERO DE LA FILA "<<x+1<<" COLUMNA "<<j+1<<endl;
    cin>>posicion;
    matrizBrianLarina[x][j]=posicion;
    }
}

for(x=0;x<5;x++){
    for(j=0;j<5;j++){
        cout<<matrizBrianLarina[x][j];
    }
    cout<<endl;
}

return 0;
}

bool esBrianLarica(int matriz[5][5]){
int x,j;
bool brianLarica=false;
int numeroARevisar;

    for(x=0;x<5;x++){
            numeroARevisar=matriz[x][j];
        for(j=0;j<5;j++){
            if(matriz[x][j]==numeroARevisar){
            }
        }
    }



}
