#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, s = 0, i = 1;
	cout << "Введите число" << endl;
	cin >> a;
	while (i < a)
    {
    	if (a % i == 0)
    	s = s + i;
    i = i + 1;
	}
	if (s == a) cout << "Число " << a << " является совершенным" << endl;
	else cout << "Число " << a << " не является совершенным" << endl;
	return 0;
}
