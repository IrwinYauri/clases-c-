#include<iostream>
using namespace std;

//Delete: Sirve para liberar memoria
    //1. Para reservas de objetos únicos
    //2. Para reservas de tablas

int main(){
    int a;
    int *p=new int;
    *p=5;
    cout<<*p<<endl;
    delete p;//Liberar memoria
    
    int *p2=new int[1000];
    for(int i=0;i<1000;i++){
        p2[i]=i+1;
    }
    delete [] p2;//Liberar tabla

}
