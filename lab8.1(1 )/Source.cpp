#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int Check(char* str)
{
	int count = 0;
	if (strlen(str) < 2)
		return count;
	for (int i = 0; i < strlen(str); i++)
		if ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n'))
		{
			count++;
		}
		else {}
	return count;
}
void* Change(char* str)
{
	int COUNT = 0;
	if (strlen(str) < 2) return str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'n' && str[i + 1] == 'o')
		{
			str[i] = '*';
			str[i + 1] = '*';
			str[i + 2] = '*';
		}
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Check(str) << " groups of 'no' or groups of 'on'" << endl;
	char* dest = new char[151];
	Change(str);
	cout << "Modified string (param) : " << str << endl;
	return 0;
}