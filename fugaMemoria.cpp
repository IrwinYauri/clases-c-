#include<iostream>
using namespace std;

//memory leak:Fuga de memoria

int main(){
    int *p1;
    p1=new int;//fuga de memoria, se pierde
    p1=new int;
}

int main()
{
    int *p1;
    //----------9999999 estacios de memoria se pierden y solo cuenta el último
    for(int i=0; i<10000000;i++){
        p1=new int;
    };
    //-------------------------------------------------------------------------
    p1=new int[9999999];
    p1=new int;
    
}