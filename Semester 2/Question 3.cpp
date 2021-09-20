#include <iostream>
using namespace std;

class node {
    public:
        string Name;
        string Surname;
        int Age; //data
        node *next; //pointer
    node(string name,string surname,int age) {
        this->Name= name;
        this->Surname =surname;
        this->Age=age;
        this->next = NULL;
    }
};

class Stack {
    public:
        int Stacktop;
        int Max_stack_size=100;
        node *top;
        
        void initialize_stack()
        {
            Stacktop=0;
            
        }
        bool is_stack_empty()
        {
            if(Stacktop==0)
            {
                return 0;
            }
            else{
            
                return 1;
            }
            
        }
        bool is_stack_full()
        {
            return (Max_stack_size==Stacktop);
        }
        
        void push(node *n) {
            n->next = top;
            top = n;
        }
        void pop() {
            node *n = top;
            top = top->next;
            delete(n);
        }
        void print() {
            node* ptr = top;
            while(ptr != NULL) {
                cout << ptr->Name<<"\n"
                << ptr->Surname<<"\n"
                << ptr->Age<<"\n"
                <<"------------"<<endl;
                ptr = ptr->next;
            }
        }
    
        Stack() {
            top = NULL;
        }
};

int main() {
    Stack S;
    
    node *n1 = new node("Mfundo","Sindane",67);
    node *n2 = new node("Orabile","Mabena",56);
    node *n3 = new node("Keth","Sin",10);
    
    S.push(n1);
    S.push(n2);
    S.push(n3);
    
    S.is_stack_empty();
    S.print();
    
    return 0;
}
