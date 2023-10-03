//Dayton Davis-CS163-001-Program 1-"Dayton-Davis-Header.h"
//Purpose of Header File: contain Abstract Data Type - CS_Trivia class - to hold and perform operations on data for a Jeopardy Trivia Game. 



#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
class CS_Trivia
{


	public:

		CS_Trivia(); //Constructor - Initializes data members

		
		~CS_Trivia(); //Destructor - Deallocates the dynamically allocated memory


		bool add_category(); //Function to add or read in a category name - will return an error message if said category already exists

		
		bool display_cateogories(); //Function to display all categories (names)

	
		bool add_clue(); //Function to add a clue to it's corresponding category - will read in the clue, the answer, and the prize amount for a correct answer


		bool read_clue(); //Function to read in a categories clue from external data file


		bool display_prize(); //Function to display the prizes for a certain category - categories name must be passed in 
		
		
		bool matching_clue(); //Function to display the matching clue corresponding to a categories name and prize amount (read in)

		
		bool remove_category(); //Function to remove a category

	private: 
		
/*		node * head; //Pointer to first node in Linear Linked Lists

		node * tail; //Trail pointer as needed for a node in Linear Linked Lists


		bool add_category(); 


		bool display_categories();

		
		bool add_clue();


		bool read_category();


		bool display_clues();
		
		
		bool matching_clue();
*/
		

	
};


























