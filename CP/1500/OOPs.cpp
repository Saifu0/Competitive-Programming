#include<bits/stdc++.h>
using namespace std;

/*
class Entity {
public:
	int x,y;
public:

	void Move(int xa, int ya){
		x += xa;
		y += ya;
	}

	// Constructor...
	// Entity(int X, int Y){
	// 	x = X;
	// 	y = Y;
	// }

	//Destructor: Mainly used when you allocated memory from heap using new keyword and free memory using free keyword.

	// ~Entity(){
	// 	cout << "Destructed object" << endl;
	// }
	print(){
		cout << x << " " << y << endl;
	}
};


//Inheritance.. like copying all data of entity into Player.
class Player : public Entity {
public:
	string S;
	
	Player(string s){
		S = s;
	}

	void printName(){
		cout << S << endl;
	}
};

int main(){
	
	Player player("saif");

	player.printName();

	player.x = 5;
	player.y = 10;

	player.print();

	return 0;
}


*/

class Entity {
public:
	// marking this function as virtual so that our derived class override this.
	virtual string GetName(){
		return "Entity";
	}
};

class Player : public Entity
{

public:
	string name;
	Player(string n){
		name = n;
	}

	string  GetName() override  {
		return name;
	}
};

int main(){
	Entity*e = new Entity();
	cout << e->GetName() << endl;

	Player*p = new Player("SAIF");
	Entity*e1 = p;

	cout << e1->GetName() << endl;
}