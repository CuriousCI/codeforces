#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t length;
		string alpha, beta;

		cin >> length >> beta;

		for (auto _ = 0; _ < length; _++)
			alpha += '1';

		for (auto index = 1; index < length; index++)
			if (beta[index] + alpha[index] == beta[index - 1] + alpha[index - 1])
				alpha[index] = '0';

		cout << alpha << endl;
	}
}