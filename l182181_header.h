#include<iostream>
#include<math.h>
using namespace std;
class student
{
private:
	
	static int counter; //count the no of students
	int ID; //assigns the unique id to student
	float *quizScore;//array of quizes
	int quizCapacity; 
	int quizTaken;
	float GPA;  

public:
	student();  //default constructor
	student(int capacity,float gpa);//parametrerized constructor
	student(const student &stud);//copy constructor
	~student(); //destructor
	void addQuizScore(float score);//add the score of new quiz
	void setGPA(float gpa);
	float getGPA() const; 
	void print() const; //shopw all about a student
	bool compare(student stud);//comparison of objects
	void updateScore(float marks, int qnum); //change the existing marks
};
