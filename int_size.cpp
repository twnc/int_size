#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int a = numeric_limits<int>::max();
	cout << "The largest possible int value is " << a << '\n'
             << "If you add one to this then you get " << a + 1 << '\n';
	return 0;
}
