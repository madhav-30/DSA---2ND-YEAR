#include <bits/stdc++.h>

using namespace std;

struct DoublyNode{

	int data;	DoublyNode *next;

	DoublyNode *prev;

};

 

DoublyNode* createNode(int val){

	DoublyNode *temp = new DoublyNode;

	temp->data = val;

	return temp;

}



class Stack{

	DoublyNode *tail;

	int s;

	

	public:



	Stack(){

		cout<<"constructor is Called\n";

		tail=NULL;

		s=0; 

	}

	



	void push(int val){

		cout<<"pushing the val: "<<val<<" at the back of queue\n";

	}

	

	int top(){

		cout<<"returning the value at top or last\n";

		return 0;

	}

	

	void pop(){

		cout<<"removing the last element\n";

	}

	

	int size(){

		cout<<"return the size of the queue\n";

		return 0;

	}

	

	bool isEmpty(){

		cout<<"returning if the stack is empty\n";

		return true;

	}

};

int main() {

	Stack s;

	s.push(8);

	cout<<"top: "<<s.top()<<"\n";

	s.pop();

	cout<<"size: "<<s.size()<<"\n";

	cout<<"empty: "<<s.isEmpty()<<"\n";

	

	s.push(2);

	s.push(1);

	cout<<"front: "<<s.top()<<"\n";

	s.pop();

	cout<<"size: "<<s.size()<<"\n";

	cout<<"empty: "<<s.isEmpty()<<"\n";

	

	cout<<"top: "<<s.top()<<"\n";

	s.pop();

	cout<<"size: "<<s.size()<<"\n";

	cout<<"empty: "<<s.isEmpty()<<"\n";

	return 0;

}
