#include <iostream>
using namespace std;

class A
{
	int i;
public:
	void Hello() {
		cout << "hello" << endl;
	}
	/*void Hello(A * this){
		cout << this->i << "hello"
			<< endl;
	}*/
};

//this��ΪNULL���������
int main()
{
	A * p = NULL;
	p->Hello();
  //Hello(p);
	return 0;

} // ����� hello

