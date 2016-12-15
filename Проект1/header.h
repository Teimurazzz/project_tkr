#pragma once

#include "stdlib.h"
#include <iostream>
#include "string"

using namespace std;


struct student{
	char *name;
	char *surname;
	char *dadname;
	int course;
};

student *pointer_on_student;

int size = 20;

bool state_of_doc;
bool state_of_exam;

char *tmp_doc;
char *tmp_exam;

char* validation(char *name);
char* yes_no_valid(char *str);
