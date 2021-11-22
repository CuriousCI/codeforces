#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t position, number = 1;
	cin >> position;

	string sequence;
	while (sequence.size() < position)
	{
		sequence += to_string(number);
		number++;
	}

	cout << sequence[position - 1];
}