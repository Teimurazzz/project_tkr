#include "stdlib.h"
#include <iostream>
#include "header.h"
#include "string"


using namespace std;



char* validation(char *name){
	bool fail = true;
	while (fail){
		cin >> name;
		if (strlen(name) == 0 || strlen(name) >= size || name == " ")
			cout << "Incorrect input, try again\n";
		else {
			fail = false;
		}
	}
	return(name);
}




char* yes_no_valid(char *str){
	bool fail = true;
	while (fail){
		cin >> str;
		if (strcmp(str, "yes") != 0 && strcmp(str, "no") != 0)
			cout << "Incorrect answer, try again\n";
		else fail = false;
	}
	return (str);
}





void main(void){
	cout << "Program of renovation at the Faculty of Applied Mathematics welcomes you\n";
	pointer_on_student = new student;
	pointer_on_student->name = new char[size];
	pointer_on_student->surname = new char[size];
	pointer_on_student->dadname = new char[size];
	tmp_doc = new char[3];
	tmp_exam = new char[3];


	cout << "Enter name of student who wants to renovation\n";
	validation(pointer_on_student->name);


	cout << "Enter surname\n";
	validation(pointer_on_student->surname);


	cout << "Enter dadname\n";	
	validation(pointer_on_student->dadname);


	cout << "Enter course\n";
	bool fail_c = true;
	while (fail_c){
		cin >> pointer_on_student->course;
		if (pointer_on_student->course > 6 || pointer_on_student->course < 0)
			cout << "Your input is incorrect, try again\n";
		else if (pointer_on_student->course == 0){
			cout << "This program only for students who wants to revonation\n";
			system("pause");
			exit(1);
		}
		else fail_c = false;
	}


	cout << "Are your documents served?(yes/no)\n";
	yes_no_valid(tmp_doc);
	if (strcmp(tmp_doc, "yes") == 0)
		state_of_doc = true;
	if (strcmp(tmp_doc, "no") == 0)
		state_of_doc = false;


	cout << "Are your exams passed?(yes/no)\n";
	yes_no_valid(tmp_exam);
	if (strcmp(tmp_exam, "yes") == 0)
		state_of_exam = true;
	if (strcmp(tmp_exam, "no") == 0)
		state_of_exam = false;

	if (state_of_doc == true && state_of_exam == true)
		cout << "Student " << pointer_on_student->name << " " << pointer_on_student->surname << " " <<  pointer_on_student->dadname << " " << pointer_on_student->course <<  "course are revonationed\n";
	else cout << "You have unfinished deal\n";

	delete(pointer_on_student);
	system("pause");
}