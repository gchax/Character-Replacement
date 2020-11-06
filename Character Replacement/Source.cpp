#include <iostream>
using namespace std;

void replacement(char*, char, char);

int main()
{
	char text[1000], takeOut, replace;
	cin.getline(text, 1000);
	cin >> takeOut >> replace;
	replacement(&text[0], takeOut, replace);
	cout << text;

	return 0;
}

void replacement(char* s, char o, char r)
{
	for (int i = 0;s[i] != '\0';i++)
	{
		if (s[i] == o)
		{
			s[i] = r;
			break;
		}
	}
}