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
int nth_node(node<int>*head,int n){


 
    int len = 0;
    node<int>* temp = head; 
  
    // count the number of nodes in Linked List 
    while (temp != NULL) { 
        temp = temp->next; 
        len++; 
    } 
  
    // check if value of n is not 
    // more than length of the linked list 
    if (len < n) 
        return INT_MIN; 
  
    temp = head; 
  
  
    for (int i = 0; i < len - n; i++) 
        temp = temp->next; 
  
    return temp->data; 
} 
  
int main(){
	cout<<"Enter elements of LL terminated by -1 "<<endl;
    node<int>*head=takeinput();
    int n;
    cout<<"enter nth last node to find"<<endl;
    cin>>n;
    cout<<"the nth last node from end is: "<<endl;
    cout<<nth_node(head,n);
}
