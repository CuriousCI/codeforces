#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, sequences;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> sequences;
		for (auto sequence = 0; sequence < sequences; sequence++)
		{
			for (auto _ = 0; _ < sequence; _++)
				cout << "()";
			for (auto _ = 0; _ < sequences - sequence; _++)
				cout << "(";
			for (auto _ = 0; _ < sequences - sequence; _++)
				cout << ")";
			cout << endl;
		}
	}
}