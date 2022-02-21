#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Chapter
{
	uint16_t start, end;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t chapters_count, marked_page;
	cin >> chapters_count;

	vector<Chapter> chapters(chapters_count);
	for (auto &chapter : chapters)
		cin >> chapter.start >> chapter.end;

	cin >> marked_page;

	auto chapters_read = 0;
	for (auto chapter : chapters)
		if (marked_page >= chapter.start && marked_page <= chapter.end)
			break;
		else
			chapters_read++;

	cout << chapters_count - chapters_read;
}