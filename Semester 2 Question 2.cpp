
#include <iostream>
using namespace std;

class node
{
    public:
    string Name;
    node* Next;
    node(string name)
    {
        this->Name=name;
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
  bool is_empty()
        {
        if(Head==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
  void add_at_end(node* ptr)
        {
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
    node* search(string name)
        {
            node* ptr=Head;
            while(ptr!=NULL && ptr->Name!=name)
            {
                ptr=ptr->Next;
            }
            return ptr;
        }
    node* remove_node(string name)
        {
            node *ptr=search(name);
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
        cout<<ptr->Name<<"->";
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
    node *n1 =new node("Mfundo");
    node *n2 =new node("Trevor");
    node *n3 =new node("Sindane");
    L.add_at_front(n1);
    L.add_at_end(n2);
    L.add_at_end(n3);
    L.print();
    cout<<wctype(n1);
    return 0;
}
