/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct node
{
    int data;
    node * next;
};
class linkedlist
{
   public: 
    node *head,*temp,*curr;
 
    linkedlist(){
        head=NULL;
        curr=NULL;
        temp=NULL;
    }
    
  void createnode(int data){
        node * n=new node;
        n->data=data;
        n->next=NULL;
        if(head==NULL){
            head=n;
            
        }
        else{
            curr=head;
            while(curr->next!=NULL){
                //curr->next=n;
                curr=curr->next;
                
            }
            curr->next=n;
            
        }
        
    }

 void print(){
     curr=head;
    while(curr!=NULL){
      cout<<curr->data<<endl;
      curr=curr->next;
    }
}

void insert_start(int data){
    node * temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
}
void insert_position(int pos,int dat){
    node *pre,*cur;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++){
        pre=cur;
        cur=cur->next;
        
    }
    temp->data=dat;
    pre->next=temp;
    temp->next=cur;
}



};
int main()
{
    cout<<"Hello World";
    linkedlist a;
   a.createnode(10);
   a.createnode(20);
   a.createnode(30);
   a.createnode(40);
   a.print();
   a.insert_start(5);
   
   a.print();
   a.insert_position(3,2);
   a.print();
   
   return 0;
}

