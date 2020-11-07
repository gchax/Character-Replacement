#include <iostream>
using namespace std;

void replacement(char*, char, char, char*);

int main()
{
	int count = 0;
	char text[1000], find, replace, request[100];
	cin.getline(text, 1000);
	cin >> find >> replace;
	cin >> request;
	replacement(&text[0], find, replace, &request[0]);

	cout << text;

	return 0;
}

void replacement(char* str, char fnd, char rp, char* rq)
{
	int n = 0;
	for (int i = 0;str[i] != '\0';i++)
	{
		if (str[i] == fnd)
		{
			if (rq[n] == 'Y' || rq[n] == 'y')
			{
				rq[n] = rp;
				str[i] = rq[n];
			}
			n++;
		}
	}
}