#include <iostream>
using namespace std;
int main()
{
	int M, D, S;
	cin >> M >> D;
	S = (M * 2 + D) % 3;
	if (S == 0)
	{
		cout << "normal";
	}
	else if (S == 1)
	{
		cout << "good";
	}
	else if (S == 2)
	{
		cout << "very good";
	}
	return 0;
}
