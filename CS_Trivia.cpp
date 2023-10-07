//Dayton Davis-CS163-001-"CS_Trivia.cpp"
//The purpose of this file is to contain the operations of the functions laid out in the Abstract Data Type represented by the class in the file "CS_Trivia_List.h". This file will also contain the operations that work with the external data file containing the categories clue information. 


#include "CS_Trivia_List.h"
#include <fstream> 
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
	//Variables

	ifstream file_in;
	
	ofstream file_out;

CS_Trivia::CS_Trivia() //Constructor
{
	

	head = NULL; //Initializing head pointer - we have an empty list
	
	tail = NULL; //Initializing tail pointer 

	
}

CS_Trivia::~CS_Trivia() //Destructor 
{
	 //Using temporary pointer to deallocate memory

	category * temp {nullptr};	

	while(head)
	{
		
		temp = head->next; //Temporary pointer is at the second node
		
		delete head; //Deallocating memory for first node 
		
		head = temp; //Pointing at next node in LLL 
	
	}
	
	tail = NULL; //Deallocating memory for tail pointers node
}

int CS_Trivia::add_category(char * name)
{
	
	char a_name[21];

	if(head == NULL)
	{
		
		head = new category;
		cin.get(a_name,100,'\n');
		cin.ignore(100,'\n');
		
		name = new char[strlen(a_name)+1];
		strcpy(head->name,a_name);
		return 1;	
	}
	return 0;
}




			
		
			

























