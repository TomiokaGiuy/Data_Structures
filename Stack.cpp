
#include <iostream>

using namespace std;

class Node {
private:
	int value;
	Node* next_node;

public:
	Node(int value) {
		this->value = value;
	}
	int GetValue() {

		return this->value;
	}
	Node* Get_Next_pNode() {
		return next_node;
	}
	void Set_Next_Node(Node* next_node){
		this->next_node = next_node;
	}
};

class Stack  {
private:
	Node* top_object;
	int size;
	int limit;
public:	
	
	Stack() {
		top_object = nullptr;
		size = 0;
		limit = 20;
	}
	bool empty(){
		return size==0;
	}
	bool space() {
		return size==limit;
	}
	void push(int value) {
		if (!space())
		{
			cout << " mesta\n";
			Node* node = new Node(value);
			node->Set_Next_Node(this->top_object);
			top_object = node;
			this->size++;
		}
		else cout << "nema mesta\n";
	}
	int pop() {
		if ( !empty()) 
		{
		Node* node = top_object;
		int data = node->GetValue();
		top_object = node->Get_Next_pNode();
		size--;
		return data;
		}else
		{
			cout << " Ïóñòîé áàê ñàëÿðû \n";
			return -1;
		}
	}
	int peek() {
		if (!empty())
		{
			return  top_object->GetValue();
		}
	}


};


int main() {
	setlocale(LC_ALL, "rus");
	Stack vadya;
	vadya.push(5);
	vadya.push(16);
	vadya.push(517);
	vadya.push(554);
	vadya.push(5312);

	cout << vadya.peek()<<endl;

	cout<<vadya.pop() << endl;
	cout << vadya.pop() << endl;
	cout << vadya.pop() << endl;
	cout << vadya.pop() << endl;
	cout << vadya.pop() << endl;
	cout << "end";
	return 0;
}
