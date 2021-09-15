#include <iostream>
#include <cstdint>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t digits, divisor;
	cin >> digits >> divisor;

	switch (divisor)
	{
	case 1:
		for (size_t _ = 0; _ < digits; _++)
			cout << 1;
		break;

	case 2:
		for (size_t _ = 0; _ < digits; _++)
			cout << 2;
		break;

	case 3:
		for (size_t _ = 0; _ < digits - 1; _++)
			cout << 1;
		cout << (digits & 1 ? 1 : 2);
		break;

	case 4:
		if (digits >= 2)
		{

			for (size_t _ = 0; _ < digits - 2; _++)
				cout << 1;
			cout << 16;
		}
		else
			cout << 4;
		break;

	case 5:
		for (size_t _ = 0; _ < digits; _++)
			cout << 5;
		break;

	case 6:
		if (digits == 1)
			cout << 6;
		else if (!(digits & 1))
		{
			for (size_t _ = 0; _ < digits - 1; _++)
				cout << 1;
			cout << 2;
		}
		else
			cout << -1;
		break;

	case 7:
		break;

	case 8:
		break;

	case 9:
		break;

	case 10:
		cout << 1;
		for (size_t _ = 0; _ < digits - 1; _++)
			cout << 0;
		break;

	default:
		break;
	}
}