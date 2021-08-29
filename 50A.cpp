#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int width, height;
    cin >> width >> height;

    cout << floor((width * height) / 2) << endl;
    return 0;
}