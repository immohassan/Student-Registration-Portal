#include "../master_header.h"

int get_int() // int validation
{
    while (true)
    {
        int num;
        cin >> num;

        // Check if the input stream has failed
        if (cin.fail())
        {
            // Clear the error state and ignore any leftover characters in the stream
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // Print an error message and prompt the user again
            cout << "Invalid input. Please enter an integer: "<<endl;
            continue;
        }

        // If the input is a valid integer, return it
        return num;
    }
}

