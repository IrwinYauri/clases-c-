#include<iostream>
using namespace std;

int main()
{
    double T[5]={1.0,2.0,3.0,4.0,5.0};
    double *p;//declaramos puntero
    p = &T[0];
    cout<<*(p+1)<<endl;//incrementa dentro del parentesis y con el * muestra su contenido
    cout<<T[3]<<endl;    
}