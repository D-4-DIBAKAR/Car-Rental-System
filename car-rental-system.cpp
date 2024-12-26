#include <iostream>
using namespace std;

int reg[5] = {123, 234, 345, 456, 567};
string comp[5] = {"Suzuki", "Honda", "Toyota", "MG", "BMW"};
int rent[5] = {2000, 2500, 3000, 3500, 5000};
char avail[5] = {'y', 'y', 'y', 'y', 'y'};
int size = sizeof(reg) / sizeof(reg[0]);

// Function to clear the screen
void clearScreen()
{
    system("cls");
}

// Function to show available cars
void showAvailableCars()
{
    for (int i = 0; i < size; i++)
    {
        if (avail[i] == 'y')
        {
            cout << "\n\tCar " << comp[i] << " with Registration No " << reg[i] << " and with Rent " << rent[i] << endl;
        }
    }
}

// Function to reserve a car
void reserveCar()
{
    int regNo, days;
    cout << "\tEnter Registration No: ";
    cin >> regNo;
    cout << "\tEnter Total Days: ";
    cin >> days;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (regNo == reg[i] && avail[i] == 'y')
        {
            found = true;
            avail[i] = 'n';
            int bill = rent[i] * days;
            cout << "\n\tYour Rent For " << comp[i] << " with Registration No " << reg[i] << " is: " << bill << endl;
        }
    }

    if (!found)
    {
        cout << "\tThis car is unavailable " << endl;
    }
}

// Function to return a car
void returnCar()
{
    int regNo;
    cout << "\tEnter Registration No: ";
    cin >> regNo;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (regNo == reg[i])
        {
            found = true;
            avail[i] = 'y';
            cout << "\n\tCar is Returned " << endl;
        }
    }

    if (!found)
    {
        cout << "\tIncorrect Registration No! " << endl;
    }
}

// Function to display the menu and handle user choices
void displayMenu()
{
    cout << "\n\tCar Rental Management System" << endl;
    cout << "\t----------------------------" << endl;
    cout << "\t1. Show Available Cars." << endl;
    cout << "\t2. Reserve a Car." << endl;
    cout << "\t3. Return A Car." << endl;
    cout << "\t4. Exit." << endl;
    int choice;
    cout << "\tEnter Your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        clearScreen();
        showAvailableCars();
        break;
    case 2:
        clearScreen();
        reserveCar();
        break;
    case 3:
        clearScreen();
        returnCar();
        break;
    case 4:
        clearScreen();
        cout << "\tBest of Luck!" << endl;
        break;
    default:
        clearScreen();
        cout << "\tInvalid input!" << endl;
        break;
    }
}

int main()
{
    while (true)
    {
        displayMenu();
        cout << endl;
        int exitChoice;
        cout << "\tDo you want to go back to the menu? (1 for Yes, 0 for No): ";
        cin >> exitChoice;
        if (exitChoice == 0)
        {
            break;
        }
    }
    return 0;
}
