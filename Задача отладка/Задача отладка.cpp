#include <iostream>
using namespace std;
class A 
{
public:
	virtual const char getName() { return 'A'; }
};
class B :public A
{
public:
	virtual const char getName() { return 'B'; }
};
int main()
{
	B* b = new B();
	A* a = b;
	cout << "Name of class " << a->getName() << endl;

}