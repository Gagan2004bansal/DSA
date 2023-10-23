#include <iostream>
using namespace std;
int DecimalToBinary(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n % 2 + 10 * (DecimalToBinary(n / 2));
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int sum = DecimalToBinary(n);
    cout << "Sum of " << n << " digit number is " << sum << endl;
    return 0;
}
