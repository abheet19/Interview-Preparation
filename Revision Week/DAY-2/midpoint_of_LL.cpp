
#include <iostream>

using namespace std;
template<typename T>

class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

node<int>* midpoint_linkedlist(node<int> *head)
{
    node<int>* slow =head;
    node<int>* fast=head->next;
    
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
node<int>* takeinput(){
    int data;
    cin>>data;
    node<int>* head=NULL,*tail=NULL;
    while(data!=-1){
        node<int> *newnode=new node<int>(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}


int main(){
	cout<<"Enter elements of LL terminated by -1 "<<endl;
    node<int>*head=takeinput();
    node<int>*mid=midpoint_linkedlist(head);
    cout<<mid->data;
}

