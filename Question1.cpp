#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("question1.txt");
    myfile << "Hello Everyone This is Shubham Bhardwaj How Are You ";

    myfile.close();
    return 0;
}