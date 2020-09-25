#include<iostream>
using namespace std;

struct personal{
    char nombre[20];
    int edad;
}persona1={"Alejandro",20},persona2={"Roberto",15};

int main()
{
    cout<<"Nombre1 :"<<persona1.nombre<<endl;
    cout<<"Edad1 :"<<persona1.edad<<endl;
}