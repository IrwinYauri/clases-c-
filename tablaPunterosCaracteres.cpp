#include<iostream>
using namespace std;

int main()
{
    char palabra[5]={'h','o','l','a',char(0)};
    char *pc;
    pc = "adios"; //No se ve pero al final de la cadena es char(0)."adios" es una tabla

    for(int k=0;k<6;k++)
    {
        cout<<pc[k]<<" - "<<int(pc[k])<<endl;
    }
}