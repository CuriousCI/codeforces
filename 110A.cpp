#include <iostream>

using namespace std;

int main()
{
	int lucky = 0;
	string number;
	cin >> number;

	for (auto character : number)
		if (character == '4' || character == '7')
			lucky++;

	cout << (lucky == 7 || lucky == 4 ? "YES" : "NO") << endl;
}