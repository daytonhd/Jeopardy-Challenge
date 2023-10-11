//Dayton Davis-CS163-001-"CS_Trivia.cpp"
//The purpose of this file is to contain the operations of the functions laid out in the Abstract Data Type represented by the class in the file "CS_Trivia_List.h". This file will also contain the operations that work with the external data file containing the categories clue information. 


#include "CS_Trivia_List.h"
#include <fstream> 

using namespace std;
	//Variables for external data files

	ifstream file_in; 
	
	ofstream file_out;

CS_Trivia::CS_Trivia() //Constructor
{

	head = NULL; //Initializing head pointer

}

CS_Trivia::~CS_Trivia() //Destructor 
{

	category * temp {nullptr}; //Creating a temporary null pointer for a category
	
	//Deallocating data for LLL and name array
	while(head) 
	{
		temp = head->next;

		delete head;

		delete [] temp->name;

		head = temp;
	}		
}

int CS_Trivia::add_category(char a_name[]) //Function to add a category to LLL of categories 
{

	if(head == nullptr) //If list is empty 
	{
		
		head = new category; //Head points to a new category, list is created 

		head->next = nullptr; //Heads next pointer points to the end of list

		head->name = new char[strlen(a_name)+1]; //Allocating memory for array to be read in 

		strcpy(head->name,a_name); //Copying data read in from user into the name for this category

		head->clue_head = nullptr; //We also should have a list of clues but it is empty

		return 1; 
	}

	category * temp = new category; //Head is not null, there is stuff in our list, we want to create a new category 
	
	temp->name = new char[strlen(a_name)+1]; //Allocating memory for array to be read in

	strcpy(temp->name,a_name); //Copying data read in from user into the name for this category

	temp->clue_head = nullptr; //We also should have a list of clues but it is empty
	
	temp->next = head; //Shifting our category as the new first category in the list
	
	head = temp; // Head now points to the category that we just added
			
	return 1;	

	
}
int CS_Trivia::display_categories() const //Function to display all categories in LLL
{


	category * temp {nullptr}; //Creating a temporary null pointer for a category

	temp = head; //Temp is pointing where head is pointing
	
	if(!head) //Return if list is empty
	{
	
		return 0;

	}
	
	while(temp!=nullptr) //Traverse through list
	{
		
		cout << temp->name << endl; //Output the name for each category 

		temp = temp->next; //Onto the next category

	}

	return 1;
}

int CS_Trivia::add_clue(char clue_category[],char info[],char answer[],char fun_fact[],float prize) //Function to add a clue to a list of clues for a certain category
{
	
	if(head == nullptr) //If the list of categories is empty
	{

		return 0;

	}
//Allocating memory for array to be read in
//Copying data read in from user into the name for this category

	category * current {nullptr}; //Current pointer to traverse with to find matching category for clue

	current = head; //Current is starting at the beginning of the list 
	
	while(current != nullptr) //Traversing through entire list
	{

		if(strcmp(current->name,clue_category)==0) //Checking to see if category name read in from user matches one in the list
		{
				
			clue * temp_clue = new clue; //Creating a temporary clue pointer to add a new clue in the list to

			temp_clue->info = new char[strlen(info)+1]; //Allocating memory for clue to be read in

			strcpy(temp_clue->info,info); //Copying data read in from user into the clue for this category

			temp_clue->answer = new char[strlen(answer)+1]; //Allocating memory for answer to be read in

			strcpy(temp_clue->answer,answer); //Copying data read in from user into the answer for the clue for this category

			temp_clue->fun_fact = new char[strlen(fun_fact)+1]; //Allocating memory for fun fact to be read in

			strcpy(temp_clue->fun_fact,fun_fact);///Copying data read in from user into the fun fact for this clue	

			temp_clue->prize = prize; //Setting prize amount as the amount read in from user

			temp_clue->next = nullptr; //End of clue list

			if(current->clue_head == nullptr) //If there's no list of clues for this category (Empty)
			{
				
				current->clue_head = temp_clue; //Clue we just read in gets to be the first clue for category

			}

			temp_clue->next = current->clue_head; //Linking up with category

			current->clue_head = temp_clue; //Linking up with category 
			
			return 1;
		}

		current = current->next; //Let's look at next category to see if it matches
	}	
	
	if(current == NULL) //If there's no data for the list of categories, return 
	{
		return 2;

	}
	
	return 3;



}

			
		
			

























