#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t number;
	cin >> number;

	cout << number << endl;
	for (auto _ = 0; _ < number; _++)
		cout << "1 ";
}