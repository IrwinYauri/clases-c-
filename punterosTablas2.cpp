#include<iostream>
using namespace std;

//la tabla se comporta como un puntero y viceversa
int main()
{
    int T[3]={-1,7,4};
    int *p;
    p = &T[1];//El puntero se posiciona al sentro de la tabla apuntando a 7
    cout<<p[0]<<endl;
    cout<<p[-1]<<endl;
    p[-1]=100;//*(p-1)=0
    cout<<T[0]<<endl;
}