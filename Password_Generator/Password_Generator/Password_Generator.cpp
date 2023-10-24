
#include <iostream>
#include <string>
#include <cstring>
#include "stdafx.h"
#include <cstdlib>
#include <ctime>
using namespace std;
class password {
    int lowercase = 1, uppercase = 1, number = 1, symbol = 1, done = 0, deal, lenght = 0;
    string password_characters = "";
    int password_characters_lenght;
    int length;
    string lowercase1 = "Lowercase ", uppercase1 = "Uppercase ", number1 = "Number", symbol1 = "Symbol";
public:
    password();
    void password_choice();
    void password_generator();
    void password_maker();

};
password::password() {
    password_choice();

}
void password::password_choice() {
    for (done; done != 6;)
    {
        cout << " PASSWORD MAKER" << endl;
        cout << "----------------" << endl;
        cout << "1. " << lowercase1 << endl;
        cout << "2. " << uppercase1 << endl;
        cout << "3. " << number1 << endl;
        cout << "4. " << symbol1 << endl;
        cout << "5. Password Lenght: " << lenght << endl;
        cout << "6. Done " << endl;
        cout << "----------------" << endl;
        cout << "Dial number to select..." << endl;
        cin >> deal;

        switch (deal)
        {
        case 1:
        {
            lowercase++;
            if (lowercase % 2 == 0) {
                lowercase1 = "Lowercase +";
                cout << lowercase1 << endl;
            }
            else
                lowercase1 = "Lowercase ";
            system("CLS");
            continue;
        }
        case 2:
        {
            uppercase++;
            if (uppercase % 2 == 0)
                uppercase1 = "Uppercase + ";
            else
                uppercase1 = "Uppercase  ";
            system("CLS");
            continue;
        }
        case 3:
        {
            number++;
            if (number % 2 == 0)
                number1 = "Number +";
            else
                number1 = "Number";
            system("CLS");
            continue;
        }

        case 4:
        {
            symbol++;
            if (symbol % 2 == 0)
                symbol1 = "Symbol +";
            else
                symbol1 = "Symbol";
            system("CLS");
            continue;
        }
        case 5:
        {
            system("CLS");
            cout << "-----------------------" << endl;
            cout << "Enter Password Length: ";
            cin >> lenght;
            system("CLS");
            continue;
        }

        case 6:
            done = 6;

            password_generator();




        }
    }


}

void password::password_generator() {

    string uppercaselatters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercaselatters = "abcdefghijklmnopqrstuvwxyz";
    string allnumbers = "0123456789";
    string allsymbols = "!@#$%^&*";
    if (lowercase % 2 == 0)
        password_characters += lowercaselatters;

    if (uppercase % 2 == 0)
        password_characters += uppercaselatters;

    if (number % 2 == 0)
        password_characters += allnumbers;

    if (symbol % 2 == 0)
        password_characters += allsymbols;

    if (password_characters.empty()) {
        cout << "Lutfen En Az Bir Kume Seciniz" << endl;
        password_choice();
        return;
    }
    password_characters_lenght = password_characters.size();
    password_maker();

}

void password::password_maker() {
    string generated_password;
    char random_char;
    int password_length = lenght;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < password_length; ++i) {
        int random_index = rand() % password_characters_lenght;
        char random_char = password_characters[random_index];
        generated_password += random_char;

    }
    system("CLS");
    cout << "--------------------";
    cout << "Generated Password: " << generated_password << endl;




}
int main()
{
    password a;


}

