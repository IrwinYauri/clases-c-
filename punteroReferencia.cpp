#include<iostream>
using namespace std;

void inc(int& i)
{
    i++;
}

int main(){
    int a=1;
    inc(a);
    cout<<a<<endl;
}