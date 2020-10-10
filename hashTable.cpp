#include<iostream>
#include<list>
#include<utility>
#include<string>

using namespace std;

class HashTable{
    private:
        static const int hashGroups=10;
        list<pair<int,string>> table[hashGroups]; 
    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string value);
        void removeItem(int key);
        string searchTable(int key);
        void printTable();
};

bool HashTable::isEmpty() const{
    int sum{};//sum{} -> sum=0 -> sum()
    for(int i{};i<hashGroups;i++){
        sum += table[i].size();
    }

    if(!sum){
        return true;
    }

    return false;
}
/*
    101/10 = 10.1
    101%10 = 1
*/
int HashTable::hashFunction(int key){
    return key % hashGroups;
}

void HashTable::insertItem(int key, string value){
    int hashValue=hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists=false;

    for(;bItr != end(cell);bItr++){
        if(bItr->first == key){
            keyExists=true;
            bItr->second=value;
            cout<<"[WARNING] key exits. Value replaced."<<endl;
            break;
        }
    }
    if(!keyExists){
        cell.emplace_back(key,value);
    }
    return;
}

void HashTable::removeItem(int key){
    int hashValue=hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists=false;

    for(;bItr != end(cell);bItr++){
        if(bItr->first == key){
            keyExists=true;
            bItr=cell.erase(bItr);
            cout<<"[INFO] pair removed"<<endl;
            break;
        }    
    }
    if(!keyExists){
        cout<<"[WARNING] key not found. Pair not removed."<<endl;
    }
    return;
}

string HashTable::searchTable(int key){
    int hashValue=hashFunction(key);
    auto& cell = table[hashValue];//O(1)
    auto bItr = begin(cell);
    bool keyExists=false;
    string value="";

    for(;bItr != end(cell);bItr++){
        if(bItr->first == key){
            keyExists=true;
            value=bItr->second;
            cout<<"[GOOD] key found."<<endl;
            break;
        }
    }
    if(!keyExists){
        cout<<"[ERROR] key don't found."<<endl;
        return "";
    }
    return value;
}

void HashTable::printTable(){
    for(int i{};i<hashGroups;i++){
        if(table[i].size()==0)continue;
        auto bItr=table[i].begin();
        for(;bItr != table[i].end();bItr++){
            cout<<"[INFO] key: "<<bItr->first<<" value: "<<bItr->second<<endl;
        }
    }
    return;
}

int main(){
    HashTable HT;

    if(HT.isEmpty()){
        cout<<"Correct answer. Good Job"<<endl;
    }else{
        cout<<"Oh oh, we need to check out code"<<endl;        
    }

    HT.insertItem(905,"Jim");
    HT.insertItem(201,"Tom");
    HT.insertItem(332,"Bod");
    HT.insertItem(124,"Sally");
    HT.insertItem(107,"Sandy");
    HT.insertItem(929,"Bard");
    HT.insertItem(928,"Rod");
    HT.insertItem(928,"Rick");

    cout<<"-------------------------"<<endl;

    HT.printTable();

    HT.removeItem(332);
    HT.removeItem(100);

    cout<<"search: "<<HT.searchTable(928)<<endl;

    if(HT.isEmpty()){
        cout<<"Oh oh, we need to check out code"<<endl;   
    }else{
        cout<<"Correct answer. Good Job"<<endl;
    }

    return 0;
}

