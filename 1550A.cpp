#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, total;

	cin >> cases;
	while (cases--)
	{
		cin >> total;
		auto size = 1, sum = 1, step = 3;
		while (sum + step <= total)
		{
			sum += step;
			step += 2;
			size++;
		}

		cout << size + (sum < total) << endl;
	}
}