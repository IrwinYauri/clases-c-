#include<iostream>

template<class T>
class binary_tree
{
    private:
        struct node;
        node* root;
    public:
        binary_tree(): root(nullptr){}
        
        bool find(const T& key)const{
            return find_helper(this->root,key);
        }
        bool insert(const T& data){
            return insert_helper(this->root,data);
        }
        void print(){
            print_helper(this->root,0);
        }
    private:
        bool find_helper(node *ptr,const T& key)const{
            if(ptr != nullptr){
                if(ptr->data==key){
                    return key;
                }
                auto who=key<ptr->data?0:1;
                return find_helper(ptr->children[who],key);
            }
            else
            {
                return false;    
            }            
        }

        bool insert_helper(node* &ptr,const T& data){
            if(ptr==nullptr){
                ptr=new node(data);
                return true;
            }else{
                //is_duplicate: data==ptr->data
                auto who=data<ptr->data?0:1;
                return insert_helper(ptr->children[who],data);
            }
        }

        void print_helper(node* ptr,int level){
            if(ptr){
                print_helper(ptr->children[1],level+1);
                for(int i=0;i<level;i++){
                    std::cout<<" ";
                }
                std::cout<<ptr->data<<std::endl;
                print_helper(ptr->children[0],level+1);
            }
        }
    private:
        struct node{
            T data;
            node* children[2];
            node(const T& data):data{data}
            {
                children[0]=children[1]=nullptr;
            }
        };
};

int main(){
    binary_tree<int>tree;
    auto v={5,3,1,4,7,6,9};
    for(auto i:v){
        tree.insert(i);
    }
    std::cout<<"binary-tree\n";
    tree.print();
    std::cout<<"searching\n";
    for(int i=0;i<10;i++){
        std::cout<<i<<" | "<<tree.find(i)<<std::endl;
    }
    return 0;
}