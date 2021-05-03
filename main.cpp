#include <iostream>
#include <fstream.h>

using namespace std;

int main()
{
    ifstream b_file("example.txt");
    b_file >> str;
    cout << str << endl;
    b_file.close();
}
