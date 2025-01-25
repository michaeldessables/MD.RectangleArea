#include <iostream>

using namespace std;

// Function to get the length of the rectangle from the user
int GetLengthFromUser() {
    int returnValue;
    cout << "Enter the length of the rectangle: ";
    cin >> returnValue;
    return returnValue;
}

// Function to get the width of the rectangle from the user
int GetWidthFromUser() {
    int returnValue;
    cout << "Enter the width of the rectangle: ";
    cin >> returnValue;
    return returnValue;
}

// Function to calculate the area of the rectangle
int CalculateArea(int length, int width) {
    int returnValue = length * width;
    return returnValue;
}

// Function to display the area of the rectangle
void DisplayArea(int area) {
    cout << "The area of the rectangle is: " << area << endl;
}

// Main function
int main() {
    // Get the length and width from the user
    int length = GetLengthFromUser();
    int width = GetWidthFromUser();

    // Calculate the area
    int area = CalculateArea(length, width);

    // Display the area
    DisplayArea(area);

    return 0;
}
