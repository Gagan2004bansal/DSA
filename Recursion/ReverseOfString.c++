#include <iostream>
#include <string>
using namespace std;
void reverseString(string str, int s, int len)
{
    // Base Case
    if (len == s)
    {
        return;
    }

    reverseString(str, s + 1, len);
    cout << str[s] << " ";
}
int main()
{
    string str;
    cout << "Enter String : ";
    getline(cin, str);

    cout << "Reverse of string : ";
    reverseString(str, 0, str.size() / sizeof(str[0]));
    cout << endl;
    return 0;
}
