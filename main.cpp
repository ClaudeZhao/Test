#include <iostream>
using namespace std;

class Person
{
public:
	Person() { name = NULL; }
	
private:
	char* name;
};

int main()
{
	cout << "Hello World" << endl;
	return 0;
}