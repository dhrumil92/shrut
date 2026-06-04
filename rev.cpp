#include<iostream>
using namespace std;

class animal
{
	public:
	void make_sound();
};

class dog : public animal
{
	void make_sound(){
		cout<<"woof"<<endl;
	}
};

class cat : public animal
{
	void make_sound(){
		cout<<"meow"<<endl;
	}
};

int main()
{
	animal obj;
	obj.make_sound();
	
}