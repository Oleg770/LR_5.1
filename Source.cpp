// Lab 5_1
// < ������ ���� >
// ������ 4

#include <iostream>
#include <cmath>

using namespace std;


double k(const double x, const double y); // ��������

int main()
{
	double sin;
	double cos;
	double p, q;
	double k = 0;

	     

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = (k * k) * (1 + p, (q * q)) - k * (q * p, 1) / 1 + k * ((p * p), q);
	cout << "c = " << c << endl;
	return 0;
}

double k(const double x, const double y) // ����������
{
	return ((sin(1 * x)) / y * y) + ((cos(1 * y)) / x * x);
}
