#include <iostream>
using namespace std;

void replacement(char*, char, char);
int stringLength(char*);

int main()
{
	char text[1000], find, replace;
	cin.getline(text, 1000);
	cin >> find >> replace;
	replacement(&text[0], find, replace);
	cout << text;

	return 0;
}

void replacement(char* s, char f, char r)
{
	int i = 0;
	while (1)
	{ 
		if (s[i] != '\0')
		{
			if (s[i] == f)
			{
				s[i] = r;
				break;
			}
			i++;
			if (i == stringLength(&s[0])) break;
		}
	}
}

int stringLength(char* s)
{
	int n = 0;
	for (int i = 0;s[i] != '\0';i++) n++;
	return n;
}