#include<iostream>
using namespace std;

int main()
{
    char palabra[5]={'h','o','l','a',char(0)};
    //cout<<"--"<<char(0)<<"--"<<endl;
    cout<<palabra<<endl;//debería devolvernos la dirección de memoria del primer elemento pero por ser tipo char hace un recorrido de byte por byte hasta encontrar código ascii "0" 

    int numeros[5]={1,2,3,4,5};
    cout<<numeros<<endl;//apunta a al dirección de memoria del primer elemento del array en memoria
    cout<<&numeros[0]<<endl;
}