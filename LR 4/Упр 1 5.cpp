#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int h, a, b; double y = 0;
    cout << "Введите шаг функции и интервал от a до b" << endl;
    cin >> h >> a >> b;
    while (a <= b)
    {
    	y = exp(a) * tan(a + 2);
    	cout << "F(" << a << ") = " << y << endl;
    	a = a + h;
	}
	return 0;
}
