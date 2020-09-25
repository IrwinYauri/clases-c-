#include<iostream>
#include<conio.h>
using namespace std;

//plantillas o templates: Sirven para poner un tipo de dato general.

//Prototipo de función
template<class TIPOD>
void mostrarABS(TIPOD numero){
    if(numero<0)
        numero*=-1;
    
    cout<<"El valor absoluto del número es:"<<numero<<endl;
}

int main(){
    int num1=-4;
    float num2=-56.67;
    double num3=-123.5678;
    mostrarABS(num1);
    mostrarABS(num2);
    mostrarABS(num3);

    getch();
    return 0;
}
