#include<iostream>
#include<string>
using namespace std;

class Auto{
    public:
        Auto(string n,string c)
        {
            nombre=n;
            color=c;
        }
        
        void getDatos() const{
            cout<<nombre<<endl;
        }

    private:
        string nombre;
        string color;
};

int main(){
    const Auto miAuto("matriz","Amarillo");
    miAuto.getDatos();
    return 0;
}

