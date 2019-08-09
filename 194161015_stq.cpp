#include<iostream>
using namespace std;
class adt {
    public: int a[1000];
            int top,bottom;
            adt(){
                top=0,
                bottom=0;
                    }
            bool add_element(int x);
            int del_element();
            bool isempty();
            bool isfull();
            void dis_element();
            };
bool adt::add_element(int x){
    if(adt::isfull()){
        cout<<"adt is overfloewd";
        return 0;
    }
    else {
        top++;
        a[top]= x;
        return 1;
    }
}
int adt::del_element(){
  if((top-bottom)<4){
    if(adt::isempty()){
        cout<<"adt is underflow";
        return 0;
    }
    else {
        int x =a[top];
        top--;
        return x;
    }
}
  else {
      int x =a[bottom];
      bottom++;
      return x;
  }
 }

bool adt::isempty(){
    return((top-bottom)<=0);
}

bool adt::isfull(){
    return(top>1000);
}

void adt::dis_element(){
    for(int i=bottom;i<=top;i++){
        cout<<a[i]<<" ";
    }
     cout<<"\n";
}
int main(){
adt s;
int k, n;
 cout<<"\n"<<"1.create adt"<<"\n"<<"2.add element"<<"\n"<<"3.delete element"<<"\n"<<"4.dispaly adt"<<"\n"<<"5.exit"<<"\n";
for(;k!=5;){
    cin>>k;
    switch (k) {
                    case 1 :
                            break; 
                    case 2 : 
                             cin>>n;
                             s.add_element(n);
                             break;
                     case 3 :
                            n = s.del_element();
                             break;
        
                     case 4 : s.dis_element();
                                 break;
                     case 5 : break;
                     default : break;
    }
}
}


