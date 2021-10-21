#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "1 задание" << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "short int " << sizeof(short int) << endl;
	cout << "long int " << sizeof(long int) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long double " << sizeof(long double) << endl;
	cout << "char " << sizeof(char) << endl;
	cout << "bool " << sizeof(bool) << endl;
	cout << endl << "2 задание" << endl << "¬ведите число ";
	int k;
	cin >> k;
	unsigned int d;
	cout << "¬ведите кол-во разр€дов ";
	cin >> d;
	unsigned m = 1 << d - 1;
	for (int i = 1; i <= d; i++)
	{
		putchar(k & m ? '1' : '0');
		k <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % d - 1 == 0)
		{
			putchar(' ');
		}

	}
	cout << endl << endl;
	cout << "3 задание" << endl;
	union {
		float pi = 3.14;
		int a;
	};
	cout << "¬ведите число ";
	cin >> pi;
	m = 1 << d - 1;
	for (int i = 1; i <= d; i++)
	{
		putchar(a & m ? '1' : '0');
		a <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % d - 1 == 0)
		{
			putchar(' ');
		}

	}
	cout << endl << endl;
	cout << "4 задание" << endl;
	union {
		double pi_1;
		int b[2];
	};
	cout << "¬ведите число ";
	cin >> pi_1;
	m = 1 << d - 1;
	for (int j = 1; j >= 0; j--)
		for (int i = 1; i <= d; i++) {
			{
				putchar(b[j] & m ? '1' : '0');
				b[j] <<= 1;
				if (i % 8 == 0)
				{
					putchar(' ');
				}
				if (i % d - 1 == 0)
				{
					putchar(' ');
				}
			}
		}
	return 0;
}