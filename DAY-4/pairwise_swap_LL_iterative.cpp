#include <bits/stdc++.h>
using namespace std;
template<typename T>

class node{
public:
    T data;
    node<T>*next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};
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
void pair_swap(node<int>*head){
	node<int>*temp=head;
	while(temp!=NULL and temp->next!=NULL){
		
		swap(temp->data,temp->next->data);
		
		temp=temp->next->next;
	}
}
void print(node<int> *head) {
    node<int>*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
	cout<<"Enter elements of LL terminated by -1 "<<endl;
    node<int>*head=takeinput();
    pair_swap(head);
    print(head);
}
	


