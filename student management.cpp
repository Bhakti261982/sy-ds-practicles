#include<iostream>
using namespace std;

struct Student
{
		char studentName[100];
		int studentrollNO;
		char studentAddress[500];
		char contactNumber[100];
		
	public:
		void setStudentsDetails()
		{
			cout<<"Enter your name : ";
			cin>>studentName;
			cout<<"Enter your roll no. :";
			cin>>studentrollNO;
			cout<<"Enter your address :";
			cin>>studentAddress;
			cout<<"Enter your contact details :";
			cin>>contactNumber;
		}
		void showStudentDetails()
		{
			cout<<"\n=======Student Details=======\n";
			cout<<"\nEnter your name is : "<<studentName<<endl;
			cout<<"\nEnter your roll no.:"<<studentrollNO<<endl;
			cout<<"\nEnter your address :"<<studentAddress<<endl;
			cout<<"\nEnter your contact no :"<<contactNumber<<endl;
		}
};
int main()
{

	Student s[100];
	Student *ptr;
	ptr=s;
	
	int n;
	cout<<"Enter no of students : ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		(ptr+1)->setStudentsDetails();
	}
	
	for(int i=0; i<n; i++)
	{
		(ptr+1)->showStudentDetails();
	}
}		