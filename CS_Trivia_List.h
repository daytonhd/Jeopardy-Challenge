//Dayton Davis-CS163-001-Program 1-"CS_Trivia_List.h"
//Purpose of Header File: contain Abstract Data Type - CS_Trivia class - to hold and perform operations on data for a Jeopardy Trivia Game. 



#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

struct clue 
{
	
	char * info; //Statement of clue 

	char * answer; //The answer to the clue 

	char * fun_fact; //A fun fact surrounding the category's clue

	float prize; //Prize amount if clue is answered correctly 

	clue * next;
};


struct category // Holds category's names, pointer to next category, head pointer to corresponding list of clues
{

	char * name;

	category * next;

	clue * clue_head; //Pointer to clue information

};
class CS_Trivia
{


	public:

		CS_Trivia(); //Constructor - Initializes data members

		
		~CS_Trivia(); //Destructor - Deallocates the dynamically allocated memory


		int add_category(char a_name[]); //Function to add or read in a category name - will return an error message if said category already exists

		int display_categories()const; //Function to display all categories (names)

	
		int add_clue(char clue_category[],char info[],char answer[],char fun_fact[],float prize); //Function to add a clue to it's corresponding category - will read in the clue, the answer, and the prize amount for a correct answer


		int retrieve(char name[],char category_file[]); //Function to read in a categories clue from external data file


		int display_prize(char name[]); //Function to display the prizes for a certain category - categories name must be passed in 
		
		
		int matching_clue(char name[],float prize); //Function to display the matching clue corresponding to a categories name and prize amount (read in)

		
		int remove_category(char a_name[]); //Function to remove a category */

	private: 
		
		category * head;


	
};


























