#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t cases, length;
	string message;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> message;
		int16_t bad = 0;
		while (message[--length] == ')' && length >= 0)
			bad++;

		cout << (bad > message.length() - bad ? "Yes" : "No") << endl;
	}
}