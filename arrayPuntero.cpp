#include<iostream>
using namespace std;

int main()
{
    int T[3]={-1,7,4};
    int *p;//puntero p
    p = T;//&T[0] es equivalente a T
    cout<<int(p)<<endl;
    int *p2=&T[0];
    cout<<int(p2)<<endl;
    
}