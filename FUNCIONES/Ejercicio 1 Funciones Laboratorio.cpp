#include <iostream>

using namespace std;

int esMultiplo(int n1, int n2);

int main(){
int n1,n2;
cout<<"Ingrese el primer numero:";
cin>>n1;
cout<<"Ingrese el segundo numero:";
cin>>n2;

if(esMultiplo(n1,n2)==1){
    cout<<"Es multiplo";
}else{
cout<<"No es multiplo";}


return 0;
}

int esMultiplo(int n1, int n2){
    if(n1%n2==0){
        return 1;
    }else {
    return 0;}

}
