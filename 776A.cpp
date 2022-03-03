#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string left, right;
	cin >> left >> right;
	cout << left << ' ' << right << endl;

	uint16_t murders;
	cin >> murders;
	while (murders--)
	{
		string victim, replacement;
		cin >> victim >> replacement;

		if (left == victim)
			left = replacement;
		else
			right = replacement;

		cout << left << ' ' << right << endl;
	}
}