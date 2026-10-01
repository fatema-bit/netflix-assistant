#include <iostream>
#include <limits>
using namespace std;


int getValidChoice() {
    int choice;

    while (true) {
        cin >> choice;

        if (cin.fail()) {
           
            cin.clear();                                                   cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number between 1 and 4: ";
        }
        else if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4: ";
        }
        else {
            return choice;
        }
    }
}

void movieRecommender()  {
int choice;
    cout << "\nChoose a genre:\n";
    cout << "1. Action\n2. Comedy\n3. Drama\n4. Horror\n";
    cout << "Enter your choice (1-4): ";
 choice = getValidChoice();
    switch (choice) {
        case 1:
            cout << "\nRecommended: 'Extraction'\n";
            cout << "A high-octane rescue mission thriller.\n";
            break;
        case 2:
            cout << "\nRecommended: 'Murder Mystery'\n";
            cout << "A comedic whodunit on a European vacation.\n";
            break;
        case 3:
            cout << "\nRecommended: 'The Crown'\n";
            cout << "A dramatic look at the British royal family.\n";
            break;
        case 4:
            cout << "\nRecommended: 'Bird Box'\n";
            cout << "A survival horror in a world of the unseen.\n";
            break;
        default:
            cout << "\nInvalid choice. Please try again.\n";
    }
}
int main() {
    char again;

    do {
        movieRecommender();

        cout << "\nWould you like another recommendation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you for using Netflix Assistant. Goodbye!\n";
    return 0;
}
