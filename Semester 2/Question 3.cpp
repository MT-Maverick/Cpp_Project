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
        node *top;
        
        void push(node *n) {
            n->next = top;
            top = n;
        }
        void pop(node* n ) {
            n = top;
            top = top->next;
            delete(n);
        }
        void print() {
            node* ptr = top;
            while(ptr != NULL) {
                cout << ptr->Name<<"\n"
                << ptr->Surname<<"\n"
                << ptr->Age<<endl;
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
    S.print();
    S.pop(n3);
    S.print();
    
    return 0;
}
