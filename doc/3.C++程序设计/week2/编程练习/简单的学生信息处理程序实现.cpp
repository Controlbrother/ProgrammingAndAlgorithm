/*
�򵥵�ѧ����Ϣ�������ʵ��
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
��һ��ѧ����Ϣ��������У�Ҫ��ʵ��һ������ѧ�����࣬�������г�Ա������Ӧ����˽�еġ�

��ע������ϵͳ�޷��Զ��жϱ����Ƿ�˽�С����ǻ��ڽ���֮��ͳһ����ҵ���м�飬��ͬѧ���ϸ�����ĿҪ����ɣ�������ܻ�Ӱ����ҵ�ɼ�����

����
���������䣬ѧ�ţ���һѧ��ƽ���ɼ����ڶ�ѧ��ƽ���ɼ�������ѧ��ƽ���ɼ�������ѧ��ƽ���ɼ���

����������ѧ��Ϊ�ַ����������ո�Ͷ��ţ�����Ϊ���������ɼ�Ϊ�Ǹ�������

����������֮����õ���Ӣ�Ķ���","�������޶���ո�

���
һ�У���˳����������������䣬ѧ�ţ�����ƽ���ɼ�������ȡ������

����������֮����õ���Ӣ�Ķ���","�������޶���ո�

��������
Tom,18,7817,80,80,90,70

�������
Tom,18,7817,80
*/

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string id;
	int age;
	int score1, score2, score3, score4;
	int average;
public:
	void init();
	void print();
};

void Student::init()
{
	char comma;
	getline(cin, name, ',');
	cin >> age >> comma;
	getline(cin, id, ',');
	cin >> score1 >> comma >> score2 >> comma >> score3 >> comma >> score4;
	average = (score1 + score2 + score3 + score4) / 4;
}

void Student::print()
{
	cout << name << ',' << age << ',' << id << ',' << average << endl;
}

int main()
{
	Student stu1;
	stu1.init();
	stu1.print();
	return 0;
}
