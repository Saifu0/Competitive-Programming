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
	new_node->nxt = NULL;

	if(head==NULL){
		
		head = new_node;
		return head;
	}
	
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

node* Sum(node*a, node*b){
	
	node* add = NULL;

	int rem = 0;

	node*temp = NULL;

	while(a!=NULL and b!=NULL){

		int x = a->data;
		int y = b->data;

		int z = (x+y) + rem;
			
		rem = z - (z%10);

		node*new_node = new node();
		new_node->data = z%10;
		new_node->nxt = NULL;


		if(add==NULL){
			add = new_node;
			temp = add;
		}else{
			temp->nxt = new_node;
			temp =temp->nxt;;
		}
		
		a = a->nxt;
		b = b->nxt;
	}

	while(a!=NULL){
		int x = a->data;
		int z = x + rem;
		rem = z-(z%10);
	
		node*new_node = new node();
		new_node->data = z%10;
		new_node->nxt = NULL;


		if(add==NULL){
			add = new_node;
			temp = add;
		}else{
			temp->nxt = new_node;
			temp =temp->nxt;
		}
		
		a = a->nxt;

	}

	while(b!=NULL){
		int x = b->data;
		int z = x + rem;
		rem = z-(z%10);
		
		node*new_node = new node();
		new_node->data = z%10;
		new_node->nxt = NULL;


		if(add==NULL){
			add = new_node;
			temp = add;
		}else{
			temp->nxt = new_node;
			temp =temp->nxt;
		}
		
		b = b->nxt;
	}

	while(rem!=0){
		node*new_node = new node();
		new_node->data = rem%10;
		new_node->nxt = NULL;
		
		rem /= 10;

		if(add==NULL){
			add = new_node;
			temp = add;
		}else{
			temp->nxt = new_node;
			temp =temp->nxt;
		}
		
	}

	return add;

}

int main(){
	
	int t; cin >> t;
	while(t--){

		int n,m; cin >> n >> m;
		
		node* list1 = NULL;
		node* list2 = NULL;

		for(int i=0;i<n;i++){
			int x; cin >> x;		

			list1 = insert_at_begin(list1,x);

		}

		for(int i=0;i<m;i++){
			int x; cin >> x;
			list2 = insert_at_begin(list2,x);
		}

		node* list3 = Sum(list1,list2);

		print(list3);

	}


	return 0;
}



