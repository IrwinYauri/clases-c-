#include<iostream>
using namespace std;

//Mostrar una secuecnia de enteros alrevés
//1 5 3 4 2 1 9 -1 -7 5 0
//0 5 -7 -1 9 1 2 4 3 5 1
//new / delete
struct eslabon
{
    int num;
    eslabon *anterior;
};

int main()
{
    int n;    
    cin>>n;
    eslabon *actual=0;
    
    while(n!=0)
    {
        eslabon *nuevo=new eslabon;
        nuevo->num=n;
        nuevo->anterior=actual;
        actual=nuevo;
        cin>>n;        
    }

    while(actual!=0)
    {
        cout<<actual->num<<" ";
        actual=actual->anterior;
    }
}