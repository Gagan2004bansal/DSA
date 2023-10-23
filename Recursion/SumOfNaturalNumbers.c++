#include <iostream>
using namespace std;
int SumOfN(int n, int &count)
{
    if (n <= 0)
    {
        return n;
    }
    count = count + n;
    SumOfN(n - 1, count);
    return count;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    int count = 0;
    int sum = SumOfN(n, count);
    cout << "Sum of " << n << " natural number is " << sum << endl;
    return 0;
}
