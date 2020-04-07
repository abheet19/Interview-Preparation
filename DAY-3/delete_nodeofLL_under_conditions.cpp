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
void print(node<int> *head) {
    node<int>*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void delete_node(node<int>*head ,node<int>*n){
	
	
	if(n==NULL){
		cout<<"what are u trying to do man"<<endl;
		return;
	}
	
	
	if(head==n){
		if(head->next==NULL){
			cout<<" only one node ...cant delete"<<endl;
			return;
		}
		head->data=head->next->data;
		n=head->next;
		head->next=head->next->next;
		delete(n);
		return;
	}
	node<int>*prev=head;
	while(prev!=NULL && prev->next!=n){
		prev=prev->next;
	}
	if(prev->next==NULL){
		cout<<" node doesnt exist ..dont fool the program"<<endl;
		return;
	}
	n=prev->next;
	prev->next=prev->next->next;
	delete(n);
	return;
}

int main(){
	cout<<"Enter elements of LL terminated by -1 "<<endl;
    node<int>*head=takeinput();
    node<int>* node=head->next->next->next;			//CAN delete accordingly
    

	delete_node(head,node);
    cout<<"New LL"<<endl;
    print(head);

}



