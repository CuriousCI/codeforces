#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t sum = 0, coins;
	for (auto _ = 0; _ < 5; _++)
	{
		cin >> coins;
		sum += coins;
	}

	cout << (sum % 5 || !sum ? -1 : sum / 5);
}