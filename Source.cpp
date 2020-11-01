#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(7) << "y" << setw(5) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 2 * abs(13 - x);

		if (x <= -1)
			B = exp(abs(x - 5));
		if ((-1 < x) && (x < 1))
			B = sin((pow(x, 3) - 1)) * sin((pow(x, 3) - 1));
		if (x >= 1)
			B = (cos(abs(x))) / 1 + sin(x) * sin(x);
		y = A + B;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}