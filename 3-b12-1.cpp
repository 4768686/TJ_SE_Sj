/* 2352017 ��14 ����� */
#include <iostream>
using namespace std;

int main()
{
	int x;

	while (1) {
		cout << "������x��ֵ[0-100] : ";
		cin >> x;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		if (cin.good() == 0) {
			cin.clear();	
			cin.ignore(114514, '\n');
			continue;
		}
		else if (x >= 0 && x <= 100)
			break;
		else if (x<0||x>100)
			continue;
	}

	cout << "cin.good()=" << cin.good() << " x=" << x << endl; //�˾䲻׼��������Ҫ�����ʱgoodΪ1

	return 0;
}