#include<iostream>
using namespace std;

/*
    Puntero(*): Un puntero almacena la dirección de memoria.
    (&) Puntero
*/
/*int main()
{
    int a=5,b;
    
    cout<<&a<<endl;//devuelve la dirección de memoria en hexadecimal
    cout<<int(&a)<<endl;//transformamos a entero
    cout<<int(&b)<<endl;
    
}*/

int main()
{
    int a=5,b;
    int *pa;//puntero
    pa=&a;//posición de memoria es almacenado en puntero
    cout<<int(&a)<<endl;
    cout<<int(pa)<<endl;
}
