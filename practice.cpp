#include <iostream>
using namespace std;

void lower_string(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // checking for uppercase characters
            str[i] = str[i] + 32;           // converting uppercase to lowercase
    }
    cout << "\n The string in lower case: " << str;
}

void upper_string(string str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') // checking for lowercase characters
            str[i] = str[i] - 32;           // converting lowercase to uppercase
    }
    cout << "\n The string in upper case: " << str;
}

int main()
{
    string str;
    cout << "Enter the string ";
    getline(cin, str);
    lower_string(str); // function call to convert to lowercase
    upper_string(str); // function call to convert to uppercase
    return 0;
}