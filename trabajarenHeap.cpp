#include<iostream>
using namespace std;
//new: Reserva memoria en el heap(zona de memoria dinàmica)
//1. Para un sólo dato de tipo básico
//2. Para una tabla de tipo básico
//3. Para una estructura
struct punto{
    double x,y;
};

//4. Para una clase
class circulo{
    double _radio,_cx,_cy;
    public:
        circulo(double r,double cx,double cy):_radio(r),_cx(cx),_cy(cy){}
        double radio() const{ 
            return _radio;
        }
};


int main()
{
    int T[10];//Reservada en Pila
    //1.
    int *p_entero=new int;//Almacenando en heap
    *p_entero=3;
    cout<<*p_entero<<endl;

    //2.
    int *p_tabla=new int[1000000];
    *p_tabla=1;//[0]=1
    *(p_tabla+3)=4;
    p_tabla[999999]=4;

    //3.
    punto *p_punto=new punto;
    p_punto->x=1.0;
    (*p_punto).y=2.0;
    cout<<p_punto->x<<endl;
    cout<<(*p_punto).y<<endl;

    //4.
    circulo *p_circulo=new circulo(10.0,0.0,0.0);
    cout<<p_circulo->radio()<<endl;
    cout<<(*p_circulo).radio()<<endl;

}