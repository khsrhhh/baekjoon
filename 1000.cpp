#include <iostream>

using namespace std;

int sum(int a, int b);

int main(void)
{
	int a, b;

	cin >> a >> b;
	cout << sum(a, b) << endl;
}

int sum(int a, int b)
{
	return a + b;
}
