#include<iostream>
using namespace std;

int main()
{
    int a=1;
    int& i=a;//i es una referencia a un entero(inicializada con la variable a)

    i++;
    cout<<a<<endl;
}