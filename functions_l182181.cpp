#include"l182181_header.h"

student::student()//default constructor
{
	counter++;
	ID=counter;
	quizCapacity=3;
	quizTaken=0;
	quizScore = new float[quizCapacity];
	GPA=-1;
	cout<<"the constructor was called for "<<ID;
}
student::student(int capacity, float gpa)
{
	counter++;
	ID=counter;
	quizCapacity=capacity;
	quizTaken=0;
	GPA=gpa;
	quizScore = new float[quizCapacity];
	cout<<"the constructor was called for "<<ID;
}
student::student(const student &stud)//copy constructor
{
	ID=stud.ID;
	quizCapacity=stud.quizCapacity;
	quizTaken=stud.quizTaken;
	quizScore=new float[quizCapacity];
	GPA=stud.GPA;
	for(int i=0;i<quizCapacity;i++)
		quizScore[i]=stud.quizScore[i];
}
void student::addQuizScore(float score)
{
	if (quizTaken < quizCapacity)
	{
		quizScore[quizTaken]=score;
		quizTaken++;
	}
	else
		cout<<"\nYou can't exceed the Quiz Limit\n";
}
void student::setGPA(float gpa)
{
	GPA=gpa;
}
float student::getGPA() const
{
	return GPA;
}
bool student::compare(student stud)
{
	bool flag=0;
	if(stud.GPA>GPA)
		flag=1;
	return flag;
}
void student::print () const
{
	cout<<" the ID of a student"<<ID<<endl;
	cout<<" the quiz taken of a student"<<quizTaken<<endl;
	cout<<" the GPA of a student"<<GPA<<endl;
	for(int i=0;i<quizTaken;i++)
		cout<<"Score of Quiz "<<i+1<<" : "<<quizScore[i]<<endl<<endl;
}
void student::updateScore(float marks,int qnum)//qnum is the the number of quiz to be updated
{
	if(qnum<quizTaken)
	{
		quizScore[qnum-1]=marks;
		cout<<"\nScores Updated\n";
	}
	else
		cout<<"quiz not taken yet";
}
student::~student()//destructor
{
	delete []quizScore;
	quizScore=nullptr;
	cout<<"\nthe destructor was invoked\n";
}
 int student::counter=0;//static variable
