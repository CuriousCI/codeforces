#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	auto fours = 0, sevens = 0;
	for (auto digit : number)
	{
		if (digit == '4')
			fours++;
		else if (digit == '7')
			sevens++;
		// if (digit == '4' || digit == '7')
		// 	cout << digit;
		else if (digit < '4')
			cout << '4';
		else if (digit < '7')
			cout << '7';
		else
			cout << '47';
	}
}