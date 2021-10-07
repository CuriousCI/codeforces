#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string question;
	cin >> question;
	cout << (((string) "aeiouyAEIOUY").find(question[question.length() - 1]) != string::npos ? "YES" : "NO");
}