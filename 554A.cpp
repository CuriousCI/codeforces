#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string booklet;
	cin >> booklet;

	cout << 26 * (booklet.length() + 1) - booklet.length();
}