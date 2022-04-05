#include <iostream>
#include <vector>
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
		int64_t elements_number;
		cin >> elements_number;

		vector<int64_t> elements(elements_number);
		for (auto &element : elements)
			cin >> element;

		int64_t pairs = 0;
		for (int32_t alpha = 0; alpha <= elements_number; alpha++)
			for (int32_t beta = (elements[alpha] - alpha) - 2; beta < elements_number && beta >= 0; beta += elements[alpha])
				pairs += elements[alpha] * elements[beta] == alpha + beta + 2 && alpha < beta;

		cout << pairs << endl;
	}
}