#include<iostream>
#include<string>
using namespace std;
struct Node
{
	int empId;
	string empName;
	float salary;
	Node *next;
};
Node *head = NULL;

void insert()
{
	Node *newNode = new Node;
	
	cout<<"Enter Employee Id :";
	cin>>newNode->empId;
	cout<<"Enter Employee Name :";
	cin>>newNode->empName;
	cout<<"Enter  salary :";
	cin>>newNode->salary;
	
	newNode->next=head;
	head = newNode;
	cout<<"Employee Record Inserted Successfully...\n";
}

void deleteNode(int id)
{
	if(head == NULL)
	{
		cout<<"List is Empty..\n";
		return ;
	}
	Node *temp = head;
	Node *prev = NULL;
	
	if(head->empId == id)
	{
		head = head->next;
		delete temp;
		cout<<"Employee Record Deleted Successfully..\n";
		return ;
	}
	while(temp !=NULL && temp->empId != id)
	{
	
	prev = temp;
	temp = temp->next;
	}
	if (temp == NULL)
	{
		cout<<"Employee Record not found..\n";
		return ;
	}
	
	prev->next = temp->next;
	delete temp;
	cout<<"Employee Record Deleted Successfully..\n";
}

void search(int id)
{
	Node *temp = head;
	while(temp != NULL)
	{
		if(temp->empId == id)
		{
			cout<<"\nEmployee Found \n";
			cout<<"Employee ID :"<<temp->empId<<endl;
			cout<<"Employee  Name:"<<temp->empName<<endl;
			cout<<"Salary:"<<temp->salary<<endl;
		}
		  temp =temp->next;
	}
	cout<<"Employee Record not found..\n";
}

void display()
{
	if(head == NULL)
	{
		cout<<"List is empty..\n";
		return ;
	}
	Node *temp = head;
	cout<<"Employee Records \n";
	cout<<"-----------------------------\n";
	
	while(temp != NULL)
	{
		cout<<"ID :"<<temp->empId<<endl;
		cout<<"Name :"<<temp->empName<<endl;
		cout<<"salary :"<<temp->salary<<endl;
		
	temp = temp->next;
	} 	
}
int main()
{
	int choice , id ;
	do
	{
	cout<<"\n=====Employ record management ======\n";
	cout<<"1 .Insertion Employee \n";	
	cout<<"2 .Deletion Employee \n";
	cout<<"3 .Search Employee \n";
	cout<<"4 .Display Employee records: \n";
	cout<<"5 .Exit \n";
	cout<<"Enter Choice ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			insert();
			break;
		
		case 2:
			cout<<"Enter Employee ID to delete :";
			cin>>id;
			deleteNode(id);
		break;
		
		case 3:
			cout<<"Enter Employee ID to Search :";
			cin>>id;
			search(id);
		break;
		
		case 4:
			display();
			break;
		
		case 5:
			cout<<"Program Ended";
			break;
		
		default:
			cout<<"Invalid choice";
			
	}
	
	}while (choice != 5 );
	
	return 0;
}
























