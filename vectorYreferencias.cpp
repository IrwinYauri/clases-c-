#include<iostream>
#include<vector>
using namespace std;

void diezVector(vector<int>& b)
{
    for(int i=0;i<b.size();i++)
    {       
        b[i]=b[i]*10;
    }
}

void printVector(vector<int> b)
{
    for(int i=0;i<b.size();i++)
    {        
        cout<<b[i]<<"|";
    }
}

int main()
{
    vector<int> v(3);
    v[0]=10;
    v[1]=12;
    v[2]=13;
    
    v.push_back(7);

    printVector(v);
    diezVector(v);
    printVector(v);
}