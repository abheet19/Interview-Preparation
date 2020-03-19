#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Stack{
	queue<T> primary,secondary;
	public:
		
	void push(T element){
		
		secondary.push(element);
		
		while(!primary.empty()){
			secondary.push(primary.front());
			primary.pop();
		}
		
		queue<T> temp=primary;
		primary=secondary;
		secondary=temp;
	}
	
	void pop(){
		if(primary.empty()){
			cout<<"Stack is empty"<<endl;
			return;
		}
		primary.pop();
	}
	int top(){
		if(primary.empty()){
			return INT_MIN;
			
		}
		else {
			return primary.front();
		}
	}
	void printStack(){
		queue<T> temp=primary;
		while(!temp.empty()){
			cout<<temp.front()<<" ";
			temp.pop();
		}
		cout<<endl;
	}
	int size(){
		return primary.size();
	}
	
	bool isEmpty(){
		return size()==0;
	}
	
};
int main(){
	
	Stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	
	if(s.isEmpty())
		cout<<"stack empty";
	
	while(!s.isEmpty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;

}




