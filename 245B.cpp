#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string address;
	cin >> address;

	auto ftp = address.find("ftp");
	auto http = address.find("http");
	auto ru = address.find("ru");

	cout << (ftp == 0 ? "ftp" : "http") << "://";

	if (ftp == 0 && ru == 3)
		ru = address.find("ru", ru + 1);
	else if (http == 0 && ru == 4)
		ru = address.find("ru", ru + 1);

	auto domain = 3;
	if (http == 0)
		domain = 4;

	for (; domain < ru; domain++)
		cout << address[domain];

	cout << ".ru";
	if (ru != address.length() - 2)
	{
		cout << "/";
		for (auto _ = ru + 2; _ < address.length(); _++)
			cout << address[_];
	}
}