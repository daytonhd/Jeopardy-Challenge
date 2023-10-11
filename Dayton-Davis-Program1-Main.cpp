//Dayton Davis - CS163-001 - Program1 - "Dayton-Davis-Program1-Main.cpp"
//Purpose of file: Contains client program for CS Jeoprady Trivia Game, test program for Abstract Data Type Implimentation 



#include "CS_Trivia_List.h"
using namespace std;
int main()
{

	char a_name[21];

	char clue_category[45];
	
	char info[75];

	char answer[75];

	char fun_fact[75];

	float prize; 
	
	int client_choice;
	
	CS_Trivia item;	
	
	while(client_choice != 3)
	{
		
		cout << "MENU" << endl;

		cout << "1. ADD CATEGORY " << endl;

		cout << "2. ADD CLUE INFORMATION" << endl;

		cout << "3. QUIT" << endl;
		
		cout << "4. DISPLAY ALL CATEGORIES" << endl;

		cout << "PROGRAM NAVIGATION CHOICE: " << endl;

		cin >> client_choice;
		
		cin.ignore(100,'\n');

		if(client_choice == 1)
		{

			cout << "Enter the name of the category: " << endl;

			cin.get(a_name,100,'\n');
			
			cin.ignore(100,'\n');

			if(item.add_category(a_name)!=1)
			{

				cout << "ERROR"  << endl;

			}
		}
		if(client_choice == 2)
		{

			cout << "Enter the name of the category you would like to add a clue to: " << endl;
			
			cin.get(clue_category,45,'\n');
			
			cin.ignore(100,'\n');

			cout << "Enter the clue you would like to add to this category: " << endl;

			cin.get(info,75,'\n');

			cin.ignore(100,'\n');

			cout << "Enter a fun fact about the category: " << endl;

			cin.get(fun_fact,75,'\n');

			cin.ignore(100,'\n');

			cout << "Enter the prize amount for getting this clue correct: " << endl;

			cin >> prize; 
			
			cin.ignore(100,'\n');

			cout << "Enter the answer to this clue: " << endl;
			
			cin.get(answer,75,'\n');
	
			cin.ignore(100,'\n');
		
			if(item.add_clue(clue_category,info,answer,fun_fact,prize) == 0)
			{

					cout << "EMPTY LIST OF CATEGORIES" << endl;

			}
			if(item.add_clue(clue_category,info,answer,fun_fact,prize) == 1)
			{

					cout << "MATCH FOUND...ADDING CLUE" << endl;

			}
			if(item.add_clue(clue_category,info,answer,fun_fact,prize) == 2 || item.add_clue(clue_category,info,answer,fun_fact,prize) == 3)
			{

					cout << "NO MATCH" << endl;

			}	
		}
			
		if(client_choice == 4)
		{
		
			cout << "DISPLAYING CATEGORIES..." << endl;
			if(item.display_categories()!= 1)
			{

				cout << "ERROR" << endl;

				cout << "EMPTY LIST OF CATEGORIES" << endl;
			}
		}

	}


	














































	return 0;


}
