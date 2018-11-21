#include <iostream>
using namespace std;

class Person
{
public:
	Person() 
	{
		name = NULL;
		number = 0;
	}
	
private:
	int number;
        char* name;
};

int main()
{
	cout << "Hello World" << endl;
	return 0;
}
