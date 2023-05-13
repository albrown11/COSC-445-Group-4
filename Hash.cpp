#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int x[120],j[120],i, k, r, c, t, d[120];
	string s;
	cout << "Enter message to convert: ";
	getline(cin, s);
	k = rand() % 100 + 1;
	if (k % 2 == 0 || k % 3 == 0 || k % 5 == 0 || k % 7 == 0)
	{
		k = rand() % 100 + 1;
		t = k;
	}
	for (i=0;i < s.length();i++)
	{
		(int)s[i];
		x[i] = (int)s[i];
	}
	for (c=0;c < s.length();c++)
	{
		r = rand() % 12 + 1;
		j[c] = x[c] + pow(k, r);
		j[c] = j[c] % 128;
		cout << j[c];
	}
	cout << endl;
	system("pause");
	return 0;
}