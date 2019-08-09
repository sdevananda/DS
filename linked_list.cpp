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

int ll::del(int x){
    node *tmp;
    tmp=head;
    while(tmp->next->data!=x){
        tmp=tmp->next;
    }
    tmp=tmp->next->next;
    return 0;
}

int ll::traverse(){
    node *tmp;
    tmp=head;
    while(tmp->next!=NULL){
        cout<<tmp->data<<endl;
        tmp=tmp->next;
    }
    return 0;
}

int main(){
    ll a;
    int x,y;
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
        else{
            cout<<"wrong input";
        }
        cout<<"1.add at start"<<endl<<"2.delete an element"<<endl<<"3.travese list"<<endl<<"0:exit"<<endl;
        cin>>x;
    }
    return 0;
}
