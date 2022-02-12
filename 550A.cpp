#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string input;
	cin >> input;

	vector<int64_t> abs, bas;
	for (auto index = 0; index < input.size() - 1; index++)
		if (input[index] == 'B' && input[index + 1] == 'A')
			bas.push_back(index);
		else if (input[index] == 'A' && input[index + 1] == 'B')
			abs.push_back(index);

	bool distinct = false;
	for (auto a : abs)
	{
		if (distinct)
			break;
		for (auto b : bas)
		{
			distinct = a != b && a != b + 1 && a != b - 1 && b != a + 1 && b != a - 1;
			if (distinct)
				break;
		}
	}

	cout << (distinct ? "YES" : "NO");
}