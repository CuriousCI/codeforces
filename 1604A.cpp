#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t cases, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		int64_t number, shifts = 0;
		for (auto _ = 0; _ < size; _++)
		{
			cin >> number;
			if (number > _ + 1)
				shifts = max(number - (_ + 1), shifts);
		}
		cout << shifts << endl;
	}
}