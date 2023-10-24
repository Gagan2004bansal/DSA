#include <iostream>
using namespace std;
int OneToN(int n, int &count)
{
    if (n < 0)
    {
        return count;
    }

    count = count + n;
    return OneToN(n - 1, count);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = 0;
    int sum = OneToN(n, count);
    cout << "Sum of " << n << " digit number is " << sum << endl;
    return 0;
}