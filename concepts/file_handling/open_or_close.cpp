#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // ofstream is used for openning file for writing, it will create the file if it doesn't exit
    // ifstream is used for reading and writing to an existing file

    ofstream file("file.txt");

    if (!file.is_open())
    {
        // file.fail() can also be used to check for the file
        cout << "Failed to open a file\n";
        return 1;
    }

    cout << "The file opened successfully\n";

    // closing the file
    file.close();

    return 0;
}
