#include<iostream>
using namespace std;

int main()
{
    char str[300];
    int uppercase = 0, lowercase = 0, digits = 0, whitespace = 0, special = 0;

  cout << "Enter a string: ";
  cin.getline(str, 300);
 for (int i = 0; str[i] != '\0'; i++)
    {
      char ch = str[i];

      if (ch >= 'A' && ch <= 'Z')
            uppercase++;
      else if (ch >= 'a' && ch <= 'z')
            lowercase++;
      else if (ch >= '0' && ch <= '9')
            digits++;
      else if (ch == ' ' || ch == '\t' || ch == '\n')
            whitespace++;
        else
            special++;
    }

cout << "Uppercase Letters: " << uppercase << endl;
 cout << "Lowercase Letters: " << lowercase << endl;
cout << "Digits: " << digits << endl;
cout << "Whitespace: " << whitespace << endl;
cout << "Special Characters: " << special << endl;

    return 0;
}
