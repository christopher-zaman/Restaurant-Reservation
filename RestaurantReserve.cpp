#include <iostream>
#include <string>

using namespace std;

void Report(string tables[])
{
	for(int i=0; i < 20; i++)
	{
		if (tables[i] == "AVAILABLE") 
		{
			cout << "Table " << i << " not reserved" << endl;
		} else {
			cout << "Table " << i << " is reserved by " << tables[i] << endl;
		}
	}
}

int main()
{
	string tables[20];
	
	// make sure that all tables start as not reserved
	for(int i=0; i < 20; i++)
	{
		tables[i] = "AVAILABLE";
	}

	while(true)
	{
		cout << "1- Reserve a table" << endl;
		cout << "2- Clear Reservation" << endl;
		cout << "3- Report" << endl;
		cout << "4- Exit" << endl;
		
		int choice;
		cout << "Choice? ";
		cin >> choice;

		if (choice == 1) {
			int tableNumber;
			cout << "Table Number: ";
			cin >> tableNumber;

			if (tables[tableNumber] != "AVAILABLE") {
				cout << "Already reserved" << endl;
			} else {
				string name;
				cout << "Name: ";
				cin >> name;
				
				tables[tableNumber] = name;
			}
		}

		if (choice == 2) {
			int tableNumber;
			cout << "Table Number: ";
			cin >> tableNumber;
			
			if (tables[tableNumber] == "AVAILABLE") {
				cout << "nothing to clear" << endl;
			} else {
				tables[tableNumber] = "AVAILABLE";
			}
		}

		if (choice == 3) {
			Report(tables);
		}


	}


	system("PAUSE");
	return 0;
}