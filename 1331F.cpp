#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string input;
	cin >> input;

	cout << (input == "GENIUS" || input == "IRENE" || input == "REVOLVER" || input == "WATSON" ? "YES" : "NO");
}