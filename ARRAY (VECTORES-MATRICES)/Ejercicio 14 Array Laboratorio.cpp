#include <iostream>

using namespace std;

int main(){
int cinco[5]={},diez[10]={};
int v_union[15]={};
int x;

for(x=0;x<5;x++){
    cout<<"Numero:";
    cin>>cinco[x];
}
for(x=0;x<10;x++){
    cout<<"Numero:";
    cin>>diez[x];
}
for(x=0;x<5;x++){
    v_union[x]=cinco[x];
}
cout<<"El vector v_union hasta el momento contiene estos elementos:"<<endl;
for(x=0;x<15;x++){
    cout<<v_union[x]<<endl;
}
for(x=0;x<10;x++){
    v_union[x+5]=diez[x];
}

cout<<"Vector final:"<<endl;
for(x=0;x<15;x++){
    cout<<v_union[x]<<endl;
}


return 0;
}
