#include <iostream>
using namespace std;
class node
{
public:
	int roll_no;
	string name;
	float marks, percentage, cgpa;
	node* next;
};
class linked_list
{
public:
	node* head = NULL;
	void insert()
	{
		int rollnumber;
		string STDname;
		float STDmarks,STDcgpa;
		cout << "\nEnter Your Roll Number :";
		cin >> rollnumber;
		cout << "Enter Name :";
		cin >> STDname;
		cout << "Enter Marks Out of 800 :";
		cin >> STDmarks;
    cout << "Enter cgpa :";
		cin >> STDcgpa;
		node* new_node = new node;
		new_node->roll_no = rollnumber;
		new_node->name = STDname;
		new_node->marks = STDmarks;
    new_node->cgpa = STDcgpa;
		new_node->percentage = (STDmarks/800)*100;
		new_node->next = NULL;
		if (head == NULL)
		{
			head = new_node;
		}
		else
		{
			node* temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = new_node;
		}
		cout << "\nNew Node Inserted Successfully\n" << endl;
	}
	void search()
	{
		if (head == NULL)
		{
			cout << "****Linked List is Empty****" << endl;
		}
		else
		{
			int roll , found =0;
			cout << "Enter Roll number of student For search :";
			cin >> roll;
			node* temp = head;
			while (temp != NULL)
			{
				if (roll == temp->roll_no)
				{
					cout << "Roll No. :" << temp->roll_no << endl;
					cout << "Student name :" << temp->name << endl;
					cout << "Marks :" << temp->marks << endl;
					cout << "Percentage % :" << temp->percentage << endl;
          cout << "CGPA :" << temp->cgpa << endl;
					found++;
				}
				temp = temp->next;
			}
			if (found == 0)
			{
				cout << "Search Roll Number -" << roll << "- Record can't found" << endl;
			}
		}
	}
	void count()
	{
		if (head == NULL)
		{
			cout << "Lisked List is Empty " << endl;
		}
		else
		{
			int counter = 0;
			node* temp = head;
			while (temp != NULL)
			{
				counter++;
				temp = temp->next;
			}
			cout << "Total No. Of Nodes :" << counter << endl;
		}
	}
	void update()
	{
		if (head == NULL)
		{
			cout << "****Linked List is Empty****" << endl;
		}
		else
		{
			int roll, found = 0;
			cout << "Enter Roll number of student For Updation :";
			cin >> roll;
			node* temp = head;
			while (temp != NULL)
			{
				if (roll == temp->roll_no)
				{
					cout << "\nEnter New Roll Number :";
					cin >>temp -> roll_no;
					cout << "Enter Name :";
					cin >> temp->name;
					cout << "Enter Marks :";
					cin >>temp-> marks;
          cout << "Enter CGPA :";
          cin>>temp->cgpa ;
					temp->percentage = (temp->marks / 800) * 100;
					cout << "****Record updated Successfully****" << endl;
					found++;
				}
				temp = temp->next;
			}
			if (found == 0)
			{
				cout << "Update Roll Number -" << roll << "- Record can't found" << endl;
			}
		}
	}
	void deletefunc()
	{
		if (head == NULL)
		{
			cout << "****Linked List is Empty****" << endl;
		}
		else
		{
			int roll, found = 0;
			cout << "Enter Roll number of student For Deletion :";
			cin >> roll;
			if (roll == head->roll_no)
			{
				node* temp = head;
				head = head->next;
				cout << "****Record deleted Successfully****" << endl;
				found++;
				delete temp;
			}
			else
			{
				node* prev = head;
				node* temp = head->next;
				while (temp != NULL)
				{
					if (roll == temp->roll_no)
					{
						prev->next = temp->next;
						cout << "****Record deleted Successfully****" << endl;
						found++;
						delete temp;
						break;
					}
					prev = temp;
					temp = temp->next;
				}
			}
			if (found == 0)
			{
				cout << "Delete Roll Number -" << roll << "- Record can't found" << endl;
			}
		}
	}
	void show()
	{
		if (head == NULL)
		{
			cout << "****Linked List is Empty****" << endl;
		}
		else
		{
			node* temp = head;
			while (temp != NULL)
			{
				cout << "\n\nRoll No. :" << temp->roll_no << endl;
				cout << "Student name :" << temp->name << endl;
				cout << "Marks :" << temp->marks << endl;
				cout << "Percentage % :" << temp->percentage << endl;
        cout << "CGPA :" << temp->cgpa << endl;
					temp = temp->next;
			}
			
		}
	}
};
int main()
{
	linked_list obj;
	int choice;
	do
	{
		cout << "\n\nWhat operation do you want to perform? Select Options or Enter 0 to exit\n" << endl;
		cout << "1. Insert Record" << endl;
		cout << "2. Search Record" << endl;
		cout << "3. Count Nodes" << endl;
		cout << "4. Update Record" << endl;
		cout << "5. Delete Record" << endl;
		cout << "6. Show All Record" << endl;
		cout << "0. Exit" << endl;
		cout << "\nEnter your options :";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			obj.insert();
			break;

		case 2:
			system("cls");
			obj.search();
			break;

		case 3:
			system("cls");
			obj.count();
			break;

		case 4:
			system("cls");
			obj.update();
			break;

		case 5:
			system("cls");
			obj.deletefunc();
			break;
		case 6:
			system("cls");
			obj.show();
			break;
		case 0:
			break;
		default:
			cout << "Please ! Enter proper Number " << endl;
		}
	} while (choice != 0);
	{
		return 0;
	}
}