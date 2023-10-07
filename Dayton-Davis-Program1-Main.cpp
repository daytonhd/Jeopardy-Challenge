//Dayton Davis - CS163-001 - Program1 - "Dayton-Davis-Program1-Main.cpp"
//Purpose of file: Contains client program for CS Jeoprady Trivia Game, test program for Abstract Data Type Implimentation 



#include "CS_Trivia_List.h"
using namespace std;
int main()
{

	char a_name[21];
	
	int client_choice;
	
	CS_Trivia jeopardy;

	while(client_choice != 3)
	{
		
		cout << "MENU" << endl;

		cout << "1. ADD CATEGORY " << endl;

		cout << "2. ADD CLUE INFORMATION" << endl;

		cout << "3. QUIT" << endl;
		
		cout << "PROGRAM NAVIGATION CHOICE: " << endl;

		cin >> client_choice;
		
		cin.ignore(100,'\n');

		if(client_choice == 1)
		{

			cout << "Enter the name of the category: " << endl;
			
			jeopardy.add_category(a_name);

			if(jeopardy.add_category(a_name)!=1)
			{

				cout << "ERROR"  << endl;

			}

		}
	}


	














































	return 0;


}
