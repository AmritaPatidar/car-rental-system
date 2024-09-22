#include <iostream>
#include <fstream>


using namespace std;

class Customer {
public:
    string name;
    string carModel;
    string carNumber;
};

class Rental : public Customer {
public:
    int days;
    int rentalFee;

    void data() {
    	system("PAUSE");
       system("CLS");
	   cout << "\n\n\n\n\n\tPlease Enter your Name: ";
        cin >> name;
        cout << endl;

        do {
            cout << "\t======== Car Rental System ======== \n\n" << endl;
            cout << "\tPlease Select a Car" << endl;
            cout << "\tEnter 'A' for Tesla 2023." << endl;
            cout << "\tEnter 'B' for Hyundai 2020." << endl;
            cout << "\tEnter 'C' for Ford 2022." << endl;
            cout << endl;
            cout << "\tChoose a Car from the above options: ";
            cin >> carModel;
            cout << endl;

            if (carModel == "A" || carModel == "a") {
                system("CLS");
                cout << "You have choosed Tesla model 2023" << endl;
            } else if (carModel == "B" || carModel == "b") {
                system("CLS");
                cout << "You have choosed Hyundai model 2020" << endl;
            } else if (carModel == "C" || carModel == "c") {
                system("CLS");
                cout << "You have choosed Ford model 2022" << endl;
            } else {
                cout << "Invalid Car Model. Please try again!" << endl;
            }
        } while (carModel!= "A" && carModel!= "B" && carModel!= "C");

        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide following information: " << endl;

        cout << "Please select a Car No. : ";
        cin >> carNumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }

    void calculate() {
        system("CLS");
        cout << "Calculating rent. Please wait......" << endl;

        if (carModel == "A" || carModel == "a")
            rentalFee = days * 56;
        else if (carModel == "B" || carModel == "b")
            rentalFee = days * 60;
        else if (carModel == "C" || carModel == "c")
            rentalFee = days * 75;
    }

    void showrent() {
        cout << "\n                       Car Rental - Customer Invoice                \n\n" << endl;
        cout << "///////////////////////////////////////////////////////" << endl;
        cout << "	| Invoice No. :" << "------------------|" << "#BnC92243" << " |" << endl;
        cout << "	| Customer Name:" << "-----------------|" << name << " |" << endl;
        cout << "	| Car Model :" << "--------------------|" << carModel << " |" << endl;
        cout << "	| Car No. :" << "----------------------|" << carNumber << " |" << endl;
        cout << "	| Number of days :" << "---------------|" << days << " |" << endl;
        cout << "	| Your Rental Amount is :" << "--------|" << rentalFee << " |" << endl;
        cout << "	 ____________________" << endl;
        cout << "\n";
        cout << "	| Total Rental Amount is :" << "-------|" << rentalFee << " |" << endl;
        cout << "	 ____________________" << endl;
        system("PAUSE");
        system("CLS");
        
    }
};
int login() {
    string pass;
    
  cout << "\n\n\n\n\n\n\n\n\tCAR RENTAL SYSTEM \n\n";
    cout << "\t------------------------------";
    cout << "\n\tLOGIN \n";
    cout << "\t------------------------------\n\n";
    cout << "\tEnter Password: ";
    
    cin >> pass;
  if (pass == "admin")
	 {
        cout << "\n\n\n\tAccess Granted! \n";
        return 1;
    }
	 else {
        cout << "\n\n\tAccess Aborted...\n\tPlease Try Again\n\n";
        return 0;
      }
     }

int main() {
    Rental rental;
    if(login()) {
        rental.data();
        rental.calculate();
        rental.showrent();
        }
    return 0;
}
