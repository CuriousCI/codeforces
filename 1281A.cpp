#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string sentence;

	cin >> cases;
	while (cases--)
	{
		cin >> sentence;

		if (sentence.rfind("po") == sentence.length() - 2)
			cout << "FILIPINO";
		else if (sentence.rfind("desu") == sentence.length() - 4 || sentence.rfind("masu") == sentence.length() - 4)
			cout << "JAPANESE";
		else if (sentence.rfind("mnida") == sentence.length() - 5)
			cout << "KOREAN";
		cout << endl;
	}
}