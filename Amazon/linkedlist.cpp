#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node* nxt;
};

node* insert_at_begin(node*head,int data){
	node* new_node = new node();
	new_node->data = data;
	
	new_node->nxt = head;
	head = new_node;
	return head;
}

node* insert_at_end(node*head,int data){
	node*temp = head;
	
	node*new_node = new node();
	new_node->nxt = NULL;
	new_node->data = data;

	if(head == NULL){
		head= new_node;
		return head;
	}

	while(temp->nxt != NULL){
		temp = temp->nxt;
	}

	temp->nxt = new_node;

	return head;
}

node* insert_at_pos(node*head,int data, int pos){
	node*new_node = new node();
	new_node->data = data;

	pos--;

	int i = 0;
	node*temp = head;
	while(i<pos and temp->nxt!=NULL){
		temp = temp->nxt;
		i++;
	}
	
	if(pos-i>0){
		cout << "Out of index" << endl;
		cout << "Do you want to insert it at the end? (y/n)" << endl;
		char c; cin >> c;
		if(c=='y') insert_at_end(head,data);
		
		return head;
	}

	node*temp1 = temp->nxt;
	temp->nxt = new_node;
	new_node->nxt = temp1;

	return head;

}

node* delete_at_begin(node*head){
	
	node*temp = head;

	head = head->nxt;

	return head;
}

node* delete_at_end(node*head){
	node*temp = head;
	
	if(temp->nxt == NULL){
		head =NULL;
		return NULL;
	}

	while(temp->nxt->nxt !=NULL){
		temp = temp->nxt;
	}

	temp->nxt = NULL;

	return head;
}

void print(node*head){
	node*temp = head;
	while(temp!=NULL){
		cout << temp->data << " ";
		temp = temp->nxt;
	}
}

int main(){
	node*head = NULL;
	head = insert_at_begin(head,5);
	head = insert_at_end(head,7);
	head = insert_at_begin(head,3);
	head = insert_at_end(head,2);
	head = insert_at_pos(head,10,10);

//	head = delete_at_begin(head);
	
	head = delete_at_end(head);

	print(head);
}

