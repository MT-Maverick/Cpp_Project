#include <iostream>
using namespace std;

class node
{
    public:
    string Name;
    string Surname;
    string Gender;
    int Age;
    node* Next;
    node(string name,string surname,string gender,int age)
    {
        this->Name=name;
        this->Surname=surname;
        this->Gender=gender;
        this->Age=age;
        this->Next=NULL;
    }
};

class list
{
  public:
  node* Head;
  void add_at_front(node* ptr)
    {
        ptr->Next=Head;
        Head=ptr;
    }

  void add_at_end(node* ptr)
    {
        //creates the 2nd node:
      if(Head==NULL)
        {
          Head=ptr;
          ptr->Next=NULL;
        }
      else
        {
          node* ptr2=get_last_node(); 
          ptr2->Next=ptr;
        }
    }
    
    node* get_last_node()
        {
            node* ptr =Head;
            
            while(ptr->Next!=NULL)
            {
                ptr=ptr->Next;
            }
            return ptr;
        }
  
    node* search(string name,string surname)
        {
            node* ptr=Head;
            while(ptr!=NULL && (ptr->Name!=name && ptr->Surname!=surname))
            {
                ptr=ptr->Next;
            }
            return ptr;
        }
  
    node* remove_node(string name,string surname)
        {
            node *ptr=search(name,surname);
            node *x=Head;
            
            if(x==ptr)
            {
                Head =ptr->Next;
                return ptr;
            }
            else
            {
                while(x->Next!=ptr)
                {
                    x=x->Next;
                }
                x->Next=ptr->Next;
                return ptr;
            }
        }
  
  void print()
  {
    node *ptr=Head;
    while(ptr!=NULL)
    {
        cout<<ptr->Name<<"\n"
        <<ptr->Surname<<"\n"
        <<ptr->Gender<<"\n"
        <<ptr->Age<<"\n"
        <<"-------------"<<endl;
        
        ptr=ptr->Next;
    }
  }
  list()
  {
      Head=NULL;
  }
};
int main()
{
    list L;

    node *n1 =new node("Mfundo","Sindane","Male",20);
    node *n2 =new node("Richard","Rich","Female",30);
    node *n3 =new node("Wanele","Ngwenya","Male",25);
    node *n4 =new node("Keven","Hlangu","Female",18);
    node *n5 =new node("Sihle","Mabena","Female",32);
    
    L.add_at_front(n1);
    L.add_at_end(n2);
    L.add_at_end(n3);
    L.add_at_end(n4);
    L.add_at_end(n5);
    L.print();
    L.remove_node("Keven","Hlangu");
    L.print();
    return 0;
}
