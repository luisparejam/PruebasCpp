#include <iostream>

using namespace std;

struct estructura
{
	int var1;
	int var2;
};

int main()
{
	estructura x;
	x.var1=123;
	
	cout << x.var1 << endl;
	
	cin.get();
	return 0;
}
