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

	char category_file[50];
	
	int client_choice;
	
	CS_Trivia item;	
	
	while(client_choice != 8)
	{
		
		cout << "MENU" << endl;

		cout << "1. ADD CATEGORY " << endl;

		cout << "2. ADD CLUE INFORMATION" << endl;
		
		cout << "3. DISPLAY ALL CATEGORIES" << endl;

		cout << "4. ADD CLUE TO EXTERNAL FILE" << endl;

		cout << "5. DISPLAY ALL PRIZES FOR A CATEGORY" << endl;

		cout << "6. DISPLAY A PARTICULAR CLUE FOR A PRIZE IN A CATEGORY" << endl;

		cout << "7. DELETE A CATEGORY" << endl;

		cout << "8. QUIT" << endl;
		
		

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
			
		if(client_choice == 3)
		{
		
			cout << "DISPLAYING CATEGORIES..." << endl;
			if(item.display_categories()!= 1)
			{

				cout << "ERROR" << endl;

				cout << "EMPTY LIST OF CATEGORIES" << endl;
			}
		}
		if(client_choice == 4)
		{

			cout << "ENTER THE NAME OF THE CATEGORY YOU WOULD LIKE TO ADD THE CLUE TO: " << endl;

			cin.get(a_name,21,'\n');
			cin.ignore(100,'\n');

			cout << "ENTER THE CATEGORIES FILE NAME: " << endl;

			cin.get(category_file,50,'\n');
			cin.ignore(100,'\n');

			
			if(item.retrieve(a_name,category_file) == 1)
			{

				cout << "SUCCESS" << endl;

			}
			if(item.retrieve(a_name,category_file) == 2)
			{
			
				cout << "ERROR" << endl;	

			}

		}
		if(client_choice == 5)
		{

			
			cout << "ENTER THE NAME OF THE CATEGORY TO DISPLAY IT'S PRIZES: " << endl;

			
			cin.get(a_name,21,'\n');

			cin.ignore(100,'\n');

			int result = item.display_prize(a_name);

			if(result == 0)
			{

				cout << "THERE IS NO CATEGORY BY THAT NAME" << endl;

			}
			else
			{

				cout << "PRIZES DISPLAYED" << endl;

			}

		}
		if(client_choice == 6)
		{

			cout << "ENTER THE NAME OF THE CATEGORY: " << endl;

			cin.get(a_name,21,'\n');

			cin.ignore(100,'\n');

			cout << "ENTER THE PRIZE OF THE CATEGORY: " << endl;

			cin >> prize;

			cin.ignore(100,'\n');
	
			if(item.matching_clue(a_name,prize)==1)
			{

				cout << "CORRECT ANSWER" << endl;

			}
			else
			{

				cout << "THERE IS NO CLUE FOR THAT PRIZE " << endl;
			
			}

		}		
		if(client_choice == 7)
		{

			cout << "WHAT IS THE CATEGORY YOU'D LIKE TO REMOVE?" << endl;

			cin.get(a_name,21,'\n');

			cin.ignore(100,'\n');

			if(item.remove_category(a_name) == 0)
			{

				cout << "ONLY ONE CATEGORY IN LIST" << endl;

				cout << "CATEGORY DELETED" << endl;
			}
			if(item.remove_category(a_name) == 1)
			{

				cout << "CATEGORY DELETED" << endl;
			}

		}
	}







	return 0;


}
