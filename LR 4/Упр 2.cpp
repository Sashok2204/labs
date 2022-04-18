#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k = 1;
	cout << "¬ведите значение N" << endl;
	cin >> n;
	while (pow(3, k) < n)
        k++;
    cout << "K = " << k << endl;
    cout << "3 ^ K = " << pow(3, k) << endl;
    return 0;
}
