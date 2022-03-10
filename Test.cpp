#include <iostream>

using namespace std;

int array[5];
int *p;

int main()
{
	p = array;
	for(int i=0; i<5; i++)
	{
		array[i] = 10+i;
	}
	
	cout << array[0] << endl;
	cout << array[1] << endl;
	
	cout << *p << endl;
	p++;
	cout << *p << endl;
	
	cin.get();
	return 0;
}
