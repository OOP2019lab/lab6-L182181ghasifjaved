#include"l182181_header.h"
void printstudentarray(student *studarr);
void printstudentarray(student studarr);
void sortarr(student *arr);//simple sorting of the array according to gpa
void sortarr(student arr);
void gpaarr(student arr,student *rarr);//rarr is the array which will store the gpa>2 objects only
void gpaarr(student *arr,student *rarr);
int main()
{
    student *darr;//for dynamic array
    student sarr;//for static array
	student arr[3]={student(3,2.0),student(3,3.0),student(4,2.33)};
	arr[1].addQuizScore(10);
	arr[1].addQuizScore(4);
	arr[1].addQuizScore(9);
	arr[2].addQuizScore(9);
	arr[2].addQuizScore(8);
	arr[2].addQuizScore(7);
	arr[0].addQuizScore(1);
	arr[0].addQuizScore(4);
	arr[0].addQuizScore(10);
	printstudentarray(arr);
	student *arr2=new student [4];
	arr2={student(3,2.0),student(3,3.0),student(4,2.33),student (4,1.00)};
	arr2[1]->addQuizScore(10);
	arr2[1]->addQuizScore(4);
	arr2[1]->addQuizScore(9);
	arr2[2]->addQuizScore(9);
	arr2[2]->addQuizScore(8);
	arr2[2]->addQuizScore(7);
	arr2[0]->addQuizScore(1);
	arr2[0]->addQuizScore(4);
	arr2[0]->addQuizScore(10);
	arr2[3]->addQuizScore(2);
	arr2[3]->addQuizScore(3);
	printstudentarray(arr2);
	sortarr(arr);
	sortarr(arr2);
	gpaarr(arr,darr);
	gpaarr(arr2,darr);
	darr->print();
	sarr->print();
	system("pause");
	return 0;
}
void printstudentarray(student *studarr)
{
    for(int i=0;i<4;i++)
        studarr[i]->print();
}
void printstudentarray(student studarr)
{
    for(int i=0;i<3;i++)
        studarr[i].print();
}
void sortarr(student *arr1)
{
    for(int i=0;i<4;i++)
        arr1[i]->getGPA();
    student temp;
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(arr1[i]->GPA<arr1[j]->GPA)
            {
                temp.student(arr1[i]);
                arr1[i]->student(arr1[j]);
                arr1[j]->student(temp);
            }
        }
    }
}
void sortarr(student arr1)
{
    for(int i=0;i<4;i++)
        arr1[i].getGPA();//to get the private gpa
    student temp;//to store an object temporariral
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(arr1[i].GPA<arr1[j].GPA)
            {
                temp.student(arr1[i]);
                arr1[i].student(arr1[j]);
                arr1[j].student(temp);
            }
        }
    }
}
void gpaarr(student arr,student *rarr)
{
    for(int j=0;j<4;j++)
        arr1[j].getGPA();//get all the Gpa from obects
    int i=0;//will coutthe number o objects greater then 2 gpa
    for(int j=0;j<3;j++)
        if(arr[j].GPA>2.0)
            i++;
    int k=0;
    rarr=new student[i];
    for(int j=0;j<3;j++)
        if(arr[j].GPA>2.0)
        {
            rarr[k]=arr[j];
            k++;
        }
}
void gpaarr(student *arr,student *rarr)
{
    for(int j=0;j<4;j++)
        arr1[j]->getGPA();//get all the Gpa from obects
    int i=0;//will coutthe number o objects greater then 2 gpa
    for(int j=0;j<3;j++)
        if(arr[j]->GPA>2.0)
            i++;
    int k=0;
    rarr=new student[i];
    for(int j=0;j<3;j++)
        if(arr[j]->GPA>2.0)
        {
            rarr[k]=arr[j];
            k++;
        }
}
