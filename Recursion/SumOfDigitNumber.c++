#include <iostream>
using namespace std;
int SumOfdigit(int n, int &count)
{
    if (n <= 0)
    {
        return n;
    }
    count = count + n % 10;
    SumOfdigit(n / 10, count);
    return count;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = 0;
    int sum = SumOfdigit(n, count);
    cout << "Sum of " << n << " digit number is " << sum << endl;
    return 0;
}
