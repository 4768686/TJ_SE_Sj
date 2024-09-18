/*2352017 ĞÅ14 ÕÅî£çù*/
#include<iostream>
#define line 10
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";

int main()
{
	int j, i;
	int length, daxie, xiaoxie, number, others;
	char first_line[256];
	char input[line][17];
	cin.getline(first_line, 256, '\n');
	cin >> length >> daxie >> xiaoxie >> number >> others;
	getchar();
	for (j = 0; j < line; j++) {
		cin.getline(input[j], 17, '\n');
	}
	if (cin.fail() || length < 12 || length > 16 || daxie < 2 || daxie >= length || xiaoxie < 2 || xiaoxie >= length || number < 2 || number >= length || others < 2 || others >= length || length < daxie + xiaoxie + number + others) {
		cout << "´íÎó" << endl;
		return 0;
	}
	for (j = 0; j < line; j++) {
		if (strlen(input[j]) != length) {
			cout << "´íÎó" << endl;
			return 0;
		}
	}
	for (j = 0; j < line; j++) {
		int d = 0, x = 0, n = 0, o = 0;
		for (i = 0; i < length; i++) {
			if (input[j][i] >= 'A' && input[j][i] <= 'Z') {
				d++;
			}
			else if (input[j][i] >= 'a' && input[j][i] <= 'z') {
				x++;
			}
			else if (input[j][i] >= '0' && input[j][i] <= '9') {
				n++;
			}
			else if(input[j][i] == '!' || input[j][i] == '@' || input[j][i] == '#' || input[j][i] == '$' || input[j][i] == '%' || input[j][i] == '^' || input[j][i] == '&' || input[j][i] == '*' || input[j][i] == '-' || input[j][i] == '_' || input[j][i] == '=' || input[j][i] == '+' || input[j][i] == ',' || input[j][i] == '.' || input[j][i] == '?') {
				o++;
			}
			else {
				cout << "´íÎó" << endl;
				return 0;
			}
		}
		if (d < daxie || x < xiaoxie || n < number || o < others) {
			cout << "´íÎó" << endl;
			return 0;
		}
	}
	cout << "ÕıÈ·" << endl;
	return 0;
}