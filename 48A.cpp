#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string fyodor, matroskin, sharic;
	cin >> fyodor >> matroskin >> sharic;
	if ((fyodor == matroskin && matroskin == sharic) ||
		(fyodor != matroskin && matroskin != sharic && sharic != fyodor))
		cout << '?';
	else if (fyodor == matroskin && sharic != fyodor && sharic != matroskin)
}