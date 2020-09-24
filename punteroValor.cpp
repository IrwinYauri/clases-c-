#include<iostream>
using namespace std;

int main()
{
    int a=5,b=2;
    int *p=&a; //p aputna a 'a'
    p=&b;//p apunta a 'b'
    *p=3;//asignamos valor a casilla de memoria donde apunta p

    cout<<b<<endl;
    

}
