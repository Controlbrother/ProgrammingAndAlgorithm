/*
����⣣1
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
�����������Ľ���ǣ�
0
5

����գ�
#include <iostream>
using namespace std;
class A {
public:
    int val;
// �ڴ˴�������Ĵ���
};
main() {
    A a;
    cout << a.val << endl;
    a.GetObj() = 5;
    cout << a.val << endl;
}

��������
��

�������
0
5

��ʾ
��ȱ�������������ʽ��
    A(_________________ ){ val = n; }
    ________________ GetObj() {
        return _________________;
    }

*/
#include <iostream>
using namespace std;

class A
{
public:
	int val;
	A(int n = 0)
	{
		val = n;
	}
	A& GetObj()
	{
		return *this;
	}
};

int main()
{
	A a;
	cout << a.val << endl;
	a.GetObj() = 5;
	cout << a.val << endl;
	return 0;
}