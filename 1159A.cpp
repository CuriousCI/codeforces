#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t operations, value = 0;
	string symbols;

	cin >> operations >> symbols;
	for (auto operation : symbols)
		switch (operation)
		{
		case '-':
			if (value)
				value--;
			break;

		case '+':
			value++;
			break;
		}

	cout << value;
}