# Car Rental Management System

A simple command-line Car Rental Management System built in C++. This system allows users to view available cars, reserve a car, and return a car. The system also maintains the availability of cars and calculates rent based on the number of days the car is rented.

## Features

- **Show Available Cars:** Displays a list of all cars that are available for rent.
- **Reserve a Car:** Allows users to reserve a car by entering the car's registration number and the number of days they wish to rent it for.
- **Return a Car:** Allows users to return a car by entering its registration number, and the system will mark the car as available again.
- **Menu-Driven System:** A simple menu-driven system that allows users to interact with the program.

## How to Use

1. **Show Available Cars:**

   - Select option `1` to view the available cars in the system. The system will display the car's name, registration number, and rent.

2. **Reserve a Car:**

   - Select option `2` to reserve a car. You'll need to provide the car's registration number and the number of days you want to rent it for. The system will calculate and display the total rent.

3. **Return a Car:**

   - Select option `3` to return a car. You will need to provide the car's registration number, and the system will update the car's availability.

4. **Exit:**
   - Select option `4` to exit the program.

## Code Explanation

- **Arrays:**

  - `reg[]`: Stores the registration numbers of the cars.
  - `comp[]`: Stores the names of the car brands.
  - `rent[]`: Stores the daily rent for each car.
  - `avail[]`: Stores the availability status of each car, where 'y' means available and 'n' means unavailable.

- **Functions:**
  - `clearScreen()`: Clears the terminal screen.
  - `showAvailableCars()`: Displays the list of available cars.
  - `reserveCar()`: Allows users to reserve a car.
  - `returnCar()`: Allows users to return a car.
  - `displayMenu()`: Displays the main menu and handles user input.

## Installation

To run this program, follow these steps:

1. Clone this repository:

   ```
   git clone https://github.com/D-4-DIBAKAR/Car-Rental-System.git
   ```

2. Navigate to the project directory:

   ```
   cd Car-Rental-System
   ```

3. Compile the code using a C++ compiler:

   ```
   g++ -o Car-Rental-System car-rental-system.cpp
   ```

4. Run the compiled program:
   ```
   ./Car-Rental-System
   ```

## Screenshots

![image](https://github.com/user-attachments/assets/24c5ecbb-5aad-4bda-8ee2-38843351d144)
![image](https://github.com/user-attachments/assets/3e170aa6-a04f-4776-81ec-b3ec61140331)
![image](https://github.com/user-attachments/assets/c9225cc4-3930-4550-b277-86c3e03115e7)



