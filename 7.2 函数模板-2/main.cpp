#include <iostream>
using namespace std;

template <class T>
void Swap(T & a, T& b)
{
	T	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n = 1, m = 2;
	Swap(n, m); //�������Զ����� void Swap(int &, int &)����
	cout << n << " " << m<< endl;

	double f = 1.2, g = 2.3;
	Swap(f, g); //�������Զ����� void Swap(double &, double &)����
	cout << f << " "<<g << endl;
	return 0;

}