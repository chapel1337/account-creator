#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string;

// written by chapel1337
// made on 9/19/2022
// made in school : )

string createdUsername{};
string createdPassword{};

string usernames[]{ "among us", "happy meal", "lol", "apples", "this is true" };
string passwords[]{ "123", "456", "abcd", "bananas", "i agree" };

std::string read()
{
    // credit to ROMAHKAO
    std::string s{};
    std::getline(std::cin >> std::ws, s);
    return s;
}

void menu();

void success()
{
    cout << "success! created account\n";
    for (int i{ 0 }; i < sizeof(usernames) / sizeof(usernames[0]); i++)
    {
        createdUsername += usernames[i];
        createdPassword += passwords[i];
    }

    createdUsername = ' ';
    createdPassword = ' ';

    system("exit");
}

void failure()
{
    cout << "fail!";
    system("exit");
}

void checkInput()
{
    // copy and pasted from login system, i'm not rewriting this

    bool usernameSuccess{ false };
    bool passwordSuccess{ false };

    for (int i{ 0 }; i < sizeof(usernames) / sizeof(usernames[0]); i++)
    {
        if (usernames[i] != createdUsername)
        {
            usernameSuccess = true;
        }
        else
        {
            usernameSuccess = false;
        }
    }
    for (int o{ 0 }; o < sizeof(passwords) / sizeof(passwords[0]); o++)
    {
        if (passwords[o] != createdPassword)
        {
            passwordSuccess = true;
        }
        else
        {
            usernameSuccess = false;
        }
    }
    if (usernameSuccess == true && passwordSuccess == true)
    {
        success();
    }
    else
    {
        failure();
    }
}

void menu()
{

    cout << "account username: \n";
    createdUsername = read();

    cout << "account password: \n";
    createdPassword = read();

    checkInput();
}

int main()
{
    cout << "account creator\n";
    cout << "written by chapel1337\n";
    cout << '\n';

    menu();
}