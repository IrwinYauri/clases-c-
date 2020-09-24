#include<iostream>
using namespace std;

int main()
{
    double T[5]={1.0,2.0,3.0,4.0,5.0};
    double *p;//declaramos puntero
    p=&T[0];//apunta a la primera posición de memoria de T[0]:que esta constituida por 4 registros por ser entero
    p=p+1;//Como es un puntero, aqui no se suma número sino se incrementa posiciones de memoria por tipo de dato, T[1]
    cout<<*p<<endl;//2.0
    p++;
    cout<<*p<<endl;//2.0
    
}