#include <iostream>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student 
{
	char name[50];
	int rollNumber;
	float marks;
};


void header();
void displayMenu();
void addStudent(Student students[], int& count);
void displayResults(const Student students[], int count);
void searchStudent(const Student students[], int count);

int main()
{
	header();
	Student students[MAX_STUDENTS];
	int studentCount = 0;

	int choice;
	do {
		displayMenu();
		cout << "Enter your choice: ";

		
		if (!(cin >> choice)) 
		{
			cout << "Invalid input. Please enter a number.\n";
			cin.clear();  
			cin.ignore();  
			continue; 
		}

		cin.ignore();

		switch (choice)
		{
		case 1:
			addStudent(students, studentCount);  
			break;
		case 2:
			displayResults(students, studentCount);
			break;
		case 3:
			searchStudent(students, studentCount);
			break;
		case 4:
			cout << "Exiting the student portal system. Goodbye!\n";
			break;
		default:
			cout << "Invalid choice. Please try again.\n";
		}
	} while (choice != 4);

	return 0;
}
void header()
{
 cout<< "#############################################################################################" <<endl;
 cout<< "#############################################################################################" <<endl;
 cout<< "#####                                                                                   #####" <<endl;
 cout<< "#####                         STUDENT MANAGEMENT SYSTEM                                 #####" <<endl;
 cout<< "#####                                                                                   #####" <<endl;
 cout<< "#############################################################################################" <<endl;
 cout<< "#############################################################################################" <<endl;
}

void displayMenu()
{                       
	cout << "\nStudent Portal System Menu:\n";
	cout << "1. Add Student\n";
	cout << "2. Display Students\n";
	cout << "3. Search Student\n";
	cout << "4. Exit\n";
}


void addStudent(Student students[], int& count) 
{
	if (count < MAX_STUDENTS) 
	{
		cout << "Enter student name: ";
		
		cin.getline(students[count].name, sizeof(students[count].name));

		cout << "Enter roll number: ";
		cin >> students[count].rollNumber;

		cout << "Enter marks: ";
	cin >> students[count].marks;

		count++;
		cout << "Student added successfully.\n";
	}
	else 
	{
		cout << "Maximum number of students reached. Cannot add more.\n";
	}
}

void displayResults(const Student students[], int count)
{
	if (count > 0)
	{
		cout << "\nStudent Results:\n";
		for (int i = 0; i < count; ++i) 
		{
			cout << "Name: " << students[i].name << "\tRoll Number: " << students[i].rollNumber
				<< "\tMarks: " << students[i].marks << endl;
		}
	}
	else 
	{
		cout << "No students to display.\n";
	}
}

void searchStudent(const Student students[], int count) 
{
	if (count > 0) 
	{
		int searchRoll;
		cout << "Enter roll number to search: ";
		cin >> searchRoll;

		for (int i = 0; i < count; ++i) 
		{
			if (students[i].rollNumber == searchRoll) 
			{
				cout << "Student found!\n";
				cout << "Name: " << students[i].name << "\tRoll Number: " << students[i].rollNumber
					<< "\tMarks: " << students[i].marks << endl;
				return;
			}
		}

		cout << "Student with roll number " << searchRoll << " not found.\n";
	}
	else 
	{
		cout << "No students to search.\n";
	}
}

