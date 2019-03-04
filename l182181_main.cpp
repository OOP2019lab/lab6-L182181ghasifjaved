#include"l182181_header.h"
using namespace std;
int main()
{
	student s1;
	s1.addQuizScore(10);
	s1.addQuizScore(3);
	s1.addQuizScore(7);
	s1.print();
	student s2(4,2);
	s2.addQuizScore(9);
	s2.addQuizScore(4);
	s2.addQuizScore(6);
	s2.print();
	student s3(s1);
	s3.updateScore(3,1);
	s3.updateScore(4,10);
	s3.setGPA(3.0);
	cout<<endl<<"Comparison "<<s3.compare(s1)<<endl;
	s3.print();
	cout<<endl;
	s1.print();
	system("pause");
	return 0;
}