#define _CRT_SECURE_NO_WARNINGS  //����������#include<stdio.h>֮ǰ�����򻹻ᱨ��
#include <iostream >
using namespace std;
int main() {
	double f; int n;
	freopen("D:\\1.txt", "r", stdin); //cin����Ϊ�� t.txt�ж�ȡ����
	
	while (cin >> f >> n) {
		cout << f << "," << n << endl;
	}
	return 0;
}
