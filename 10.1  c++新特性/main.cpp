#include <memory>
#include <iostream>
using namespace std;
struct A {
	int n;
	A(int v = 0) :n(v) { }
	~A() { cout << n << " destructor" << endl; }
};
int main()
{
	shared_ptr<A> sp1(new A(2)); //sp1�й�A(2)
	shared_ptr<A> sp2(sp1); //sp2Ҳ�й� A(2)
	cout << "1)" << sp1->n << "," << sp2->n << endl; //���1)2,2
	shared_ptr<A> sp3;
	A * p = sp1.get(); //p ָ�� A(2)
	cout << "2)" << p->n << endl;
		sp3 = sp1; //sp3Ҳ�й� A(2)
	cout << "3)" << (*sp3).n << endl; //��� 2
	sp1.reset(); //sp1�����й� A(2)
	if (!sp1)
		cout << "4)sp1 is null" << endl; //�����
	A * q = new A(3);
	sp1.reset(q); // sp1�й�q
	cout << "5)" << sp1->n << endl; //��� 3
	shared_ptr<A> sp4(sp1); //sp4�й�A(3)
	shared_ptr<A> sp5;
	//sp5.reset(q); ���ף��ᵼ�³������
	sp1.reset(); //sp1�����й� A(3)
	cout << "before end main" << endl;
	sp4.reset(); //sp1�����й� A(3)
	cout << "end main" << endl;
	return 0; //�����������delete ��A(2)
}