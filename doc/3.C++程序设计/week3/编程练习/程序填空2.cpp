/*
����� ��2
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
������������ǣ�
10

�벹��Sample��ĳ�Ա�������������ӳ�Ա������
#include <iostream>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
// �ڴ˴�������Ĵ���
};
int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;
    return 0;
}

��������
��

�������
1
10
*/

#include <iostream>
using namespace std;

class Sample
{
public:
	int v;
	Sample(int n) :v(n) {};
	Sample(const Sample &s)
	{
		v = s.v + 5;
	}
};

int main()
{
	Sample a(5);
	Sample b = a;
	cout << b.v;
	return 0;
}