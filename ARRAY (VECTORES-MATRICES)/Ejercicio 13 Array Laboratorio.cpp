#include <iostream>

using namespace std;

int main(){
int stock[15]={},unidadesVendidas[15]={},flag=0,masVentas,sucursalMaxima;
int x,j,nroArticulo,cantVendida,nroSucursal;
int matrizSucursalArticulo[4][15]={};
int matrizArticuloSucursal[15][4]={};

for(x=0;x<15;x++){
    cout<<"Stock articulo "<<x+1<<":";
    cin>>stock[x];
}

cout<<"Numero de articulo:";
cin>>nroArticulo;

while(nroArticulo!=0){
    cout<<"Cantidad vendida:";
    cin>>cantVendida;
    cout<<"Numero de sucursal:";
    cin>>nroSucursal;

    //PUNTO A
    unidadesVendidas[nroArticulo-1]+=cantVendida;

    //PUNTO B
    matrizSucursalArticulo[nroSucursal-1][nroArticulo-1]+=cantVendida;
    matrizArticuloSucursal[nroArticulo-1][nroSucursal-1]+=cantVendida;

    cout<<"Numero de articulo:";
    cin>>nroArticulo;
}
//PUNTO A
for(x=0;x<15;x++){
    cout<<"El articulo "<<x+1<<" vendio: "<<unidadesVendidas[x]<<endl;
}
//PUNTO B
for(x=0;x<4;x++){
    for(j=0;j<15;j++){
        if(matrizSucursalArticulo[x][j]>=10){
            cout<<"Sucursal "<<x+1<<" vendio "<<matrizSucursalArticulo[x][j]<< " unidades del articulo "<<j+1<<endl;
        }
    }
}
for(j=0;j<15;j++){
    for(x=0;x<4;x++){
            if(matrizArticuloSucursal!=0){
                if(flag==0){
                masVentas=matrizArticuloSucursal[j][x];
                flag=1;
                sucursalMaxima=x;
            }else if(matrizArticuloSucursal[j][x]>masVentas){
            masVentas=matrizArticuloSucursal[j][x];
            sucursalMaxima=x+1;}
            }
    }
    if(flag!=0){
     cout<<"El articulo "<<j+1<<" se comercializo mayoritariamente en la sucursal:"<<sucursalMaxima<<endl;
    }

flag=0;
}

for(x=0;x<15;x++){
    if(stock[x]-unidadesVendidas[x]==0){
        cout<<"El articulo "<<x+1<<" quedo con stock 0"<<endl;
    }
}

for(x=0;x<15;x++){
    if(stock[x]/2<unidadesVendidas[x]){
        cout<<"El articulo "<<x+1<<" vendio mas de la mitad de su stock"<<endl;
    }
}

return 0;
}
