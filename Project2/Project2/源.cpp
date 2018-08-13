#include<iostream>
using namespace std;
void grade(int a)
{
	int g;
	g = 2018 - a;
	if (g <= 4)
		cout << "本科生" << g << "年级" << endl;
	else if (g <= 7)
		cout << "硕士研究生" << g - 4 << "年级" << endl;
	else
		cout << "博士研究生" << g - 7 << "年级" << endl;

}
class student {
	int no, age, q, gr;
	char name, sex;
	double ave;
public:
	student(int, char, char, int, double, int);
	student();
	student(student &c);
	~student();
	void setst(int n, char na, char s, int a, double g, int t) {
		no = n;
		name = na;
		sex = s;
		age = a;
		ave = g;
		gr = t;
	}
	void showst() {
		int tx;
		grade(gr);
		cout << "学号：" << no << " " << "名字：" << " " << name << "性别：" << " " << sex << "年龄：" << " " << age << "平均分数：" << " " << ave;
	}
};

student::student(int n, char na, char s, int a, double av, int ti) {
	no = n; name = na;
	sex = s; age = a;
	ave = av;
	gr = ti;
}
student::student() {
	no = 0;
	name = '\0';
	sex = '\0';
	age = 0;
	ave = 0;
	gr = 0;
}
student::student(student &c) {
	no = c.no; name = c.name; sex = c.sex;
	ave = c.ave;
	gr = c.gr;
}
student::~student() {
}
int main()
{
	double ave[5];
	int a[5], d[5], i, j, num[5], p, t[5];
	char b[5], c[5];
	for (i = 0; i<5; i++)
		num[i] = 0;
	student s1, s2, s3, s4, s5;
	cout << "输入学生基本信息" << endl;
	cout << "输入学号" << endl;
	for (i = 0; i<5; i++)
		cin >> a[i];
	cout << "输入名字" << endl;
	for (i = 0; i<5; i++)
		cin >> b[i];
	cout << "性别w or m" << endl;
	for (i = 0; i<5; i++)
		cin >> c[i];
	cout << "输入年龄" << endl;
	for (i = 0; i<5; i++)
		cin >> d[i];
	cout << "输入分数" << endl;
	for (j = 0; j<5; j++)
	{
		for (i = 0; i<5; i++)
		{
			cin >> p;
			num[j] += p;
		}
	}
	cout << "输入本科入学年份" << endl;
	for (i = 0; i<5; i++)
		cin >> t[i];
	for (i = 0; i<5; i++)
		ave[i] = num[i] / 5;
	s1.setst(a[0], b[0], c[0], d[0], ave[0], t[0]);
	s2.setst(a[1], b[1], c[1], d[1], ave[1], t[1]);
	s3.setst(a[2], b[2], c[2], d[2], ave[2], t[2]);
	s4.setst(a[3], b[3], c[3], d[3], ave[3], t[3]);
	s5.setst(a[4], b[4], c[4], d[4], ave[4], t[4]);
	cout << "       " << "学生个人信息为" << "       " << endl;
	s1.showst();
	cout << endl;
	s2.showst();
	cout << endl;
	s3.showst();
	cout << endl;
	s4.showst();
	cout << endl;
	s5.showst();
	cout << endl;
	return 0;
}
