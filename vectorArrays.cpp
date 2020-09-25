#include<iostream>
#include<vector>

using namespace std;
//struct:It's the collection of one and more types
struct Punto{
    float x,y;
};

struct listaPuntos{
    Punto puntos[100];
    int npuntos;
};

int main(){
    listaPuntos L;
    L.npuntos=50;

    float& x=L.puntos[L.npuntos-1].x;//Para no escribir toda esta línea constantemente mejor lo pasamos por referencia
    x=x+2.0;//ahora lo manipulamos así con x

    Punto origen={0.0,0.0};
    
    float& _x=origen.x;
    
    vector<int> v(10,2);//vector de 10 espacios y todos inciados en 2
    int& r=v[5];
    r=r*2;
    cout<<v[5]<<endl;
}