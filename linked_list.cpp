/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *previous;
};

class ll{
    public:
    node *head,*tail;
    ll(){
        head= NULL;
        tail= NULL;
    }
    int add(int x);
    int del(int x);
    int traverse();
    int add_pos(int x, int y);
};

int ll::add(int x){
    node *tmp=new node;
    tmp->data=x;

    if(head==NULL){
        head=tmp;
        tail=tmp;
    }
    else{
        tmp->next=head;
        
        head=tmp;
    }

    return 0;
}

int ll::add_pos(int pos, int value)
  {
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    cout<<cur->data;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    cout<<pre->data<<"pre->data";
    temp->data=value;
    cout<<"temp value:"<<temp->data<<endl;
    pre->next=temp;	
    temp->next=cur;
  
      return 0;
  }
  
int ll::del(int x){
    node *current=new node;
    node *previous=new node;
    current=head;
  
    while(current->data!=x){
        previous=current;
        current=current->next;
    }
    cout<<"previous->next"<<previous->next;
    cout<<"current->next"<<current->next;
    
    previous->next=current->next;
    delete current;
    cout<<"previous->next"<<previous->next;
    
    
    return 0;
}

int ll::traverse(){
    node *tmp=new node;
    tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<'\t';
        tmp=tmp->next;
    }
    cout<<head->data;
    cout<<tail->data;
    return 0;
}

int main(){
    ll a;
    int x,y,z;
    cout<<"1.add at start"<<endl<<"2.delete an element"<<endl<<"3.travese list"<<endl;
    cin>>x;
    cout<<x;
    while(x!=0){
        if(x==1){
            cout<<"enter data";
            cin>>y;
            a.add(y);
        }
        else if(x==2){
            cin>>y;
            a.del(y);
        }
        else if(x==3){
            a.traverse();
        }
        else if(x==4){
            cin>>y>>z;
            a.add_pos(y,z);
        }
        else{
            cout<<"wrong input";
        }
        cout<<"1.add at start"<<endl<<"2.delete an element"<<endl<<"3.travese list"<<endl<<"3.add at position"<<endl<<"0:exit"<<endl;
        cin>>x;
    }
    return 0;
}
