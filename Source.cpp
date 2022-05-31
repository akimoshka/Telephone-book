#include <iostream>
#include <cmath> 
#include <iomanip> 
#include <stdlib.h>
#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;


struct book
{
	string l_n;
	string name;
	string m_n;
	string num;
	string country;
	string bday;
	string org;
	string doljn;
	string other;
};


int main()
{

	system("color F0");

	vector <book> allNOTES;


	int ans;
	cout << "Welcome to your online Telephone book";
	cout << endl << endl << "New Contact : 1" << endl << "Delete Contact : 2" << endl << "Edit : 3" << endl << "Veiw in short version : 4" << endl << "Veiw in full version : 5" << endl << endl;
	cout << "\tEnter Here - ";
	cin >> ans;
	if (ans == 1) {
		system("cls");
		int kol;
		cout << "How many people do you want to add? ";
		cin >> kol;
		for (int i = 0; i < kol; i++)
		{
			system("cls");
			book person;
			string extra;
			getline(cin, extra);
			cout << "Last name: ";
			getline(cin, person.l_n);
			//cin >> person.l_n;
			cout << endl << "First name: ";
			getline(cin, person.name);
			//cin >> person.name;
			cout << endl << "Middle name: ";
			getline(cin, person.m_n);
			//cin >> person.m_n;
			cout << endl << "Number: ";
			getline(cin, person.num);
			//cin >> person.num;
			cout << endl << "Country: ";
			getline(cin, person.country);
			//cin >> person.country;
			cout << endl << "Birth Day: ";
			getline(cin, person.bday);
			//cin >> person.bday;
			cout << endl << "Organization: ";
			getline(cin, person.org);
			//cin >> person.org;
			cout << endl << "Post: ";
			getline(cin, person.doljn);
			//cin >> person.doljn;
			cout << endl << "Notes: ";
			getline(cin, person.other);
			//cin >> person.other;
			allNOTES.push_back(person);
			system("pause");
		}
	}

	if (ans == 2) {
		system("cls");
		cout << "No contacts to delete!\n";
		system("pause");
	}

	if (ans == 3) {
		system("cls");
		cout << "No contacts to edit!\n";
		system("pause");
	}
	

	if (ans == 4) {
		system("cls");
		printf("+---------------------------------+------------------------+\n");
		printf("|               NAME              |         Number         |\n");
		printf("+---------------------------------+------------------------+\n");

		if (allNOTES.size() == 0) {
			printf("|                 No contact was added...                  |\n");
			printf("+---------------------------------+------------------------+\n");
		}
		for (int i = 0; i < allNOTES.size(); i++)
		{
			cout << "| " << allNOTES[i].l_n << " " << allNOTES[i].name << " " << allNOTES[i].m_n;
			cout << setw(32 - ((allNOTES[i].m_n).length() + (allNOTES[i].name).length() + (allNOTES[i].l_n).length()));
			cout << "| " << allNOTES[i].num;
			cout << setw(25 - allNOTES[i].num.length());
			cout << "|";
			printf("\n+---------------------------------+------------------------+\n");
		}
	}
	
	if (ans == 5) {
		system("cls");
		printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
		printf("|               NAME              |         Number         |     Country     |       Birth Day      |         Organization         |          Post          |               NOTE                |\n");
		printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");

		if (allNOTES.size() == 0) {
			printf("|                                                                                     No contact was added...                                                                                   |\n");
			printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
		}
		for (int i = 0; i < allNOTES.size(); i++)
		{
			cout << "| " << allNOTES[i].l_n << " " << allNOTES[i].name << " " << allNOTES[i].m_n;
			cout << setw(32 - ((allNOTES[i].m_n).length() + (allNOTES[i].name).length() + (allNOTES[i].l_n).length()));
			cout << "| " << allNOTES[i].num;
			cout << setw(25 - allNOTES[i].num.length());
			cout << "| " << allNOTES[i].country;
			cout << setw(18 - allNOTES[i].country.length());
			cout << "| " << allNOTES[i].bday;
			cout << setw(23 - allNOTES[i].bday.length());
			cout << "| " << allNOTES[i].org;
			cout << setw(31 - allNOTES[i].org.length());
			cout << "| " << allNOTES[i].doljn;
			cout << setw(25 - allNOTES[i].doljn.length());
			cout << "| " << allNOTES[i].other;
			cout << setw(35 - allNOTES[i].other.length()) << "|";
			printf("\n+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
		}
	}

	system("cls");

	int ans2;

	cout << "Do you want to do another action?" << endl << "1 - yes" << endl << "0 - no" << endl;

	cin >> ans2;
	while (ans2 == 1) {
		system("cls");

		cout << "Welcome to your online Telephone book";
		cout << endl << endl << "New Contact : 1" << endl << "Delete Contact : 2" << endl << "Edit : 3" << endl << "Veiw in short version : 4" << endl << "Veiw in full version : 5" << endl << endl;
		cout << "\tEnter Here - ";
		cin >> ans;
		if (ans == 1) {
			system("cls");
			int kol;
			cout << "How many people do you want to add? ";
			cin >> kol;
			for (int i = 0; i < kol; i++)
			{
				system("cls");
				book person;
				string extra;
				getline(cin, extra);
				cout << "Last name: ";
				getline(cin, person.l_n);
				//cin >> person.l_n;
				cout << endl << "First name: ";
				getline(cin, person.name);
				//cin >> person.name;
				cout << endl << "Middle name: ";
				getline(cin, person.m_n);
				//cin >> person.m_n;
				cout << endl << "Number: ";
				getline(cin, person.num);
				//cin >> person.num;
				cout << endl << "Country: ";
				getline(cin, person.country);
				//cin >> person.country;
				cout << endl << "Birth Day: ";
				getline(cin, person.bday);
				//cin >> person.bday;
				cout << endl << "Organization: ";
				getline(cin, person.org);
				//cin >> person.org;
				cout << endl << "Post: ";
				getline(cin, person.doljn);
				//cin >> person.doljn;
				cout << endl << "Notes: ";
				getline(cin, person.other);
				//cin >> person.other;
				allNOTES.push_back(person);
				system("pause");
			}
		}
		if (ans == 2) {
			system("cls");
			if (allNOTES.size() == 0) cout << "No contact was aded!\n";
			else {
				string n;
				cout << "Enter the name of the person you want to delete: ";
				cin >> n;
				for (int i = 0; i < allNOTES.size(); i++)
				{
					if (n == allNOTES[i].name) {
						allNOTES.erase(allNOTES.begin() + i);
						--i;
					}
				}
			}
		}

		if (ans == 3) {
			string m;
			int kol = 0;
			system("cls");
			if (allNOTES.size() == 0) cout << "No contact was aded!\n";
			else {

				cout << "Who's information do you want to edit? Enter a name: ";
				cin >> m;

				printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
				printf("|               NAME              |         Number         |     Country     |       Birth Day      |         Organization         |          Post          |               NOTE                |\n");
				printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");

				for (int i = 0; i < allNOTES.size(); i++)
				{
					if (m == allNOTES[i].name) {
						cout << "| " << allNOTES[i].l_n << " " << allNOTES[i].name << " " << allNOTES[i].m_n;
						cout << setw(32 - ((allNOTES[i].m_n).length() + (allNOTES[i].name).length() + (allNOTES[i].l_n).length()));
						cout << "| " << allNOTES[i].num;
						cout << setw(25 - allNOTES[i].num.length());
						cout << "| " << allNOTES[i].country;
						cout << setw(18 - allNOTES[i].country.length());
						cout << "| " << allNOTES[i].bday;
						cout << setw(23 - allNOTES[i].bday.length());
						cout << "| " << allNOTES[i].org;
						cout << setw(31 - allNOTES[i].org.length());
						cout << "| " << allNOTES[i].doljn;
						cout << setw(25 - allNOTES[i].doljn.length());
						cout << "| " << allNOTES[i].other;
						cout << setw(35 - allNOTES[i].other.length()) << "|";
						printf("\n+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");

						string k, change, extra;
						cout << "\nWhat information do you want to change: \n";
						cin >> k;
						cout << "\nWhat should i change it to?: ";
						cin >> extra;
						getline(cin, change);
						//cin >> change;

						if (k == "number" or k == "Number" or k == "NUMBER") allNOTES[i].num = change;
						else if (k == "country" or k == "Country" or k == "COUNTRY") allNOTES[i].country = change;
						else if (k == "birth day" or k == "birthday" or k == "Birth Day" or k == "Birth day" or k == "Birthday") allNOTES[i].bday = change;
						else if (k == "organization" or k == "Organization" or k == "ORGANIZATION") allNOTES[i].org = change;
						else if (k == "post" or k == "Post" or k == "POST") allNOTES[i].doljn = change;
						else if (k == "note" or k == "Note" or k == "NOTE") allNOTES[i].other = change;
						kol++;
					}
				}
				if (kol == 0) {
					printf("|                                                                                     No such name found ...                                                                                    |\n");
					printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");

				}
			}
		}

		if (ans == 4) {
			system("cls");
			printf("+---------------------------------+------------------------+\n");
			printf("|               NAME              |         Number         |\n");
			printf("+---------------------------------+------------------------+\n");

			if (allNOTES.size() == 0) {
				printf("|                 No contact was added...                  |\n");
				printf("+---------------------------------+------------------------+\n");
			}
			for (int i = 0; i < allNOTES.size(); i++)
			{
				cout << "| " << allNOTES[i].l_n << " " << allNOTES[i].name << " " << allNOTES[i].m_n;
				cout << setw(32 - ((allNOTES[i].m_n).length() + (allNOTES[i].name).length() + (allNOTES[i].l_n).length()));
				cout << "| " << allNOTES[i].num;
				cout << setw(24 - allNOTES[i].num.length());
				cout << "|";
				printf("\n+---------------------------------+------------------------+\n");
			}
		}
		
		if (ans == 5) {
			system("cls");
			printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
			printf("|               NAME              |         Number         |     Country     |       Birth Day      |         Organization         |          Post          |               NOTE                |\n");
			printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");

			if (allNOTES.size() == 0) {
				printf("|                                                                                    No contact was added...                                                                                    |\n");
				printf("+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
			}
			for (int i = 0; i < allNOTES.size(); i++)
			{
				cout << "| " << allNOTES[i].l_n << " " << allNOTES[i].name << " " << allNOTES[i].m_n;
				cout << setw(32 - ((allNOTES[i].m_n).length() + (allNOTES[i].name).length() + (allNOTES[i].l_n).length()));
				cout << "| " << allNOTES[i].num;
				cout << setw(25 - allNOTES[i].num.length());
				cout << "| " << allNOTES[i].country;
				cout << setw(18 - allNOTES[i].country.length());
				cout << "| " << allNOTES[i].bday;
				cout << setw(23 - allNOTES[i].bday.length());
				cout << "| " << allNOTES[i].org;
				cout << setw(31 - allNOTES[i].org.length());
				cout << "| " << allNOTES[i].doljn;
				cout << setw(25 - allNOTES[i].doljn.length());
				cout << "| " << allNOTES[i].other;
				cout << setw(35 - allNOTES[i].other.length()) << "|";
				printf("\n+---------------------------------+------------------------+-----------------+----------------------+------------------------------+------------------------+-----------------------------------+\n");
			}
		}
		cout << "Do you want to do another action?" << endl << "1 - yes" << endl << "0 - no" << endl;

		cin >> ans2;
	}
	if (ans2 == 0) {
		system("cls");
		cout << "\n\n\t\tGoodbye!!!\n\n";
	}

	return 0;
}