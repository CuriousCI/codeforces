#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t size;
	cin >> size;

	auto middle = (size - 1) / 2;
	for (auto _ = 0; _ < middle; _++)
	{
		for (auto star = 0; star < middle - _; star++)
			cout << '*';
		for (auto diamond = middle - _; diamond <= middle + _; diamond++)
			cout << 'D';
		for (auto star = middle + _ + 1; star < size; star++)
			cout << '*';
		cout << endl;
	}

	for (auto _ = 0; _ < size; _++)
		cout << 'D';
	cout << endl;

	for (auto _ = middle - 1; _ >= 0; _--)
	{
		for (auto star = 0; star < middle - _; star++)
			cout << '*';
		for (auto diamond = middle - _; diamond <= middle + _; diamond++)
			cout << 'D';
		for (auto star = middle + _ + 1; star < size; star++)
			cout << '*';
		cout << endl;
	}
}