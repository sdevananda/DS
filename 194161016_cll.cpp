#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class ll{
    public:
    node *head,*tail;
    ll(){
        head= NULL;
        tail= NULL;
    }
    int add_start(int x);
    int add_end(int x);
    int search(int x);
    int display();
};

int ll::add_start(int x){
    node *tmp=new node;
    tmp->data=x;

    if(head==NULL){
        head=tmp;
        tail=tmp;
    }
    else{
        tmp->next=head;
        head=tmp;
        tail->next=head;
    }
    return 0;
}

int ll::add_end(int x){
    int a=0;
    node *tmp=new node;
    node *cur=new node;
    tmp->data=x;
    cur=tail;
    
    if(tail==NULL){
        //head=tmp;
        tail=tmp;
    }
    else{
        tail->next=tmp;
        tmp->next=head;
        tail=tmp;
    }
    return 0;
}

int ll::search(int x){
    int a=0,b;
    node *tmp=new node;
    node *cur=new node;
    cur=head;
    while(cur->data!=x && cur!=tail){
        cur=cur->next;
        a=a+1;
    }
    if(cur!=tail){
        b=a;
        cur=cur->next;
        a=1;
        while(cur->data!=head->data ){
            cur=cur->next;
            a=a+1;
        }

        //cout<<a<<'t';
        //cout<<b;
        if(a>=b){
            return b;
        }
        else{
            return a;
        }
    }
    else{
        return -1;
    }

}

int ll::display(){
    int a=0;
    node *tmp= new node;
    tmp=head;
    while(tmp!=NULL && a==0){
        if(tmp==tail){
            a=1;
        }
        cout<<tmp->data<<endl;
        tmp=tmp->next;
    }
    //cout<<"head is :"<<head->data<<"\t";
    //cout<<"tail is: "<<tail->data<<endl;
    return 0;
}

int main(){
    ll a;
    int x,y,k;
    while(cin>>x){
        //cout<<"x value is: "<<x;
        if(x==1){
           
        }

        else if(x==2){
            //cout<<"enter data";
            cin>>y;
            a.add_start(y);
        }
        else if(x==3){
            //cout<<"enter data";
            cin>>y;
            a.add_end(y);
        }
        else if(x==4){
            cin>>y;
            k=a.search(y);
            cout<<k<<endl;
        }
        else if(x==5){
            a.display();
        }
        else{
            //cout<<"wrong input";
        }
        //cout<<endl<<"1.create list"<<endl<<"2.add at start"<<endl<<"3.add at end"<<endl<<"4.search list"<<endl<<"5.display"<<endl;
    }
    return 0;
}
