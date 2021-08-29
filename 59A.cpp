#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	string word;
	cin >> word;

	int upper = 0, lower = 0;
	for (auto chr : word)
		if (isupper(chr))
			upper++;
		else
			lower++;

	for (auto &chr : word)
		if (lower >= upper)
			chr = tolower(chr);
		else
			chr = toupper(chr);

	cout << word << endl;
}