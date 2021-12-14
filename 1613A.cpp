#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Number
{
	string digits;
	uint64_t value, zeros;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	Number alpha, beta;
	while (cases--)
	{
		cin >> alpha.digits >> alpha.zeros;
		cin >> beta.digits >> beta.zeros;

		alpha.value = stoi(alpha.digits);
		beta.value = stoi(beta.digits);

		if (alpha.digits.length() + alpha.zeros > beta.digits.length() + beta.zeros)
			cout << '>';
		else if (alpha.digits.length() + alpha.zeros < beta.digits.length() + beta.zeros)
			cout << '<';
		else if (alpha.value == beta.value && alpha.zeros == beta.zeros)
			cout << '=';
		else
			cout << (alpha.value > beta.value ? '<' : '>');

		cout << endl;
	}
}