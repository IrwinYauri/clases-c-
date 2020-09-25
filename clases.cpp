#include<iostream>
using namespace std;

class persona{
    private://Atributos
        int edad;
        string nombre;
    public://métodos
        persona(int,string);//constructor, hay interfaz
        void leer();
        void correr();
};

persona::persona(int _edad,string _nombre)
{
    edad=_edad;
    nombre=_nombre;
}

void persona::leer(){
    cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void persona::correr(){
    cout<<"Soy "<<nombre<<", y estoy corriendo"<<endl;
}

int main(){
    persona p1=persona(20,"Alejandro");
    p1.leer();
    system("pause");
    return 0;
}