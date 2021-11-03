#include <iostream>
#include <iomanip>

using namespace std;


void Input(int* a, const int size, int i)
{
	cout << "a[" << i << "]= ";
	cin >> a[i];
	if (i < size - 1)
		Input(a, size, i + 1);
	else
		cout << endl;
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}
int Sum(int* a, const int size, int i, int S)
{
	if (abs(i % 2 != 0))
		S += a[i];
	if (i < size - 1)
		return Sum(a, size, i + 1, S);
	else
		return S;
}
int main()
{
	const int n = 15;
	int a[n];

	Input(a, n, 0);
	cout << endl << "a = " ;
	Print(a, n, 0);

	cout << endl << "Sum = " << Sum(a, n, 0, 0) << endl;

	return 0;
}