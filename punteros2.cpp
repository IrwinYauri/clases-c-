#include<iostream>
using namespace std;

int main()
{
    int a=5,b=2;
    int *p=&a;
    cout<<int(p)<<endl;//imprime posición de memoria
    cout<<*p<<endl;//imprime lo que halla donde apunta
    
}
