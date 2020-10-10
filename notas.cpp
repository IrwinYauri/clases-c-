#include<iostream>
#include<utility>
#include<list>

using namespace std;

int main(){
/*
    int n=10;
    int& aux=n;
    aux++;
    cout<<"-> "<<aux<<endl;
    cout<<"-> "<<n<<endl;
*/

    list<pair<char,int>> PAR[2];
    PAR[0].emplace_back('S',10);
    PAR[1].emplace_back('A',20);

    int sum=0;

    for(int i{};i<10;i++){
        sum+=i;
    }

    if(sum){
        cout<<"entre"<<endl;
        cout<<"-> "<<PAR[0].size()<<endl;
        cout<<"-> "<<PAR[1].size()<<endl;

        cout<<"-> "<<begin(PAR[1])->first<<endl;
        cout<<"-> "<<(++begin(PAR[1]))->first<<endl;
        cout<<"-> "<<end(PAR[1])->first<<endl;
    }
        
    
    
    return 0;
}