#include<iostream>
using namespace std;

int main()
{
    int T[3]={-1,7,4};
    int *p;//puntero p
    p = T;//&T[0] es equivalente a T
    *p = 3;//T[0]=3
    cout<<T[0]<<endl;
    //-----------------------------------
    cout<<*(T+1)<<endl;
    *(T+1)=20;
    cout<<T[1]<<endl;
    cout<<*(p+2)<<endl;
    *(p+2)=50;
    cout<<T[2]<<endl;

    
}