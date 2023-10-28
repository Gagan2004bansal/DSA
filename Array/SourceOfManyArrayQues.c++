// #include <iostream>
// #include <string>
// using namespace std;
// void reverseString(string str, int s, int len, int &count)
// {
//     // Base Case
//     if (len == s)
//     {
//         return;
//     }

//     count++;
//     reverseString(str, s + 1, len, count);
// }
// int main()
// {
//     string str;
//     cout << "Enter String : ";
//     getline(cin, str);

//     int count = 0;
//     cout << "length of string : ";
//     reverseString(str, 0, str.size() / sizeof(str[0]), count);
//     cout << count << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return factorial(n - 1) * n;
// }
// int main()
// {
//     int n;
//     cout << "Enter number : ";
//     cin >> n;

//     cout << "Factorial of " << n << " is ";
//     int fact = factorial(n);
//     cout << fact << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
// }

// int main()
// {
//     int N = 3;

//     // A, B and C are names of rods
//     towerOfHanoi(N, 'A', 'C', 'B');
//     return 0;
// }

// Convert string into integer

// #include <iostream>
// #include <string>
// using namespace std;
// class StrToNum
// {
// public:
//     int number;

//     void NumConverter(string num)
//     {
//     }
// };
// int main()
// {
//     string num;
//     cout << "Enter Number : ";
//     cin >> num;

//     StrToNum Obj1;
//     Obj1.NumConverter(num);

//     Cout << "After String Convert to number : " << Obj1.number << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Toggle
// {
// public:
//     string str;
//     void Input()
//     {
//         getline(cin, str);
//     }
//     void check()
//     {
//         int n = sizeof(str) / sizeof(str[0]);
//         for (int i = 0; i < n; i++)
//         {
//             if (str[i] >= 'A' && str[i] <= 'Z')
//             {
//                 char temp = str[i] + 32;
//                 str[i] = temp;
//             }
//             else if (str[i] >= 'a' && str[i] <= 'z')
//             {
//                 char temp = str[i] - 32;
//                 str[i] = temp;
//             }
//             else if (str[i] == ' ')
//             {
//                 continue;
//             }
//         }
//     }
//     void display()
//     {
//         cout << str << endl;
//     }
// };
// int main()
// {
//     Toggle t;

//     t.Input();
//     t.check();
//     t.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class ClosetToZero
// {
// public:
//     int n;
//     int arr[100];
//     void Input()
//     {
//         cin >> n;
//         cout << "Enter element in array : ";
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//     }
//     void display()
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     void Check()
//     {
//         pair<int, int> p;
//         int minSum;
//         int min = arr[0] + arr[1];
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 minSum = arr[i] + arr[j];
//                 if (abs(min) > abs(minSum))
//                 {
//                     p.first = i;
//                     p.second = j;
//                     min = minSum;
//                 }
//             }
//         }
//         cout << "Answer is " << arr[p.first] << " and " << arr[p.second] << endl;
//     }
// };
// int main()
// {
//     ClosetToZero c1;
//     c1.Input();
//     c1.Check();
//     return 0;
// }

// Check for Majority Element in a sorted array
// #include <iostream>
// using namespace std;
// void MajorityCheck(int *arr, int e, int s)
// {
//     if (e == 0)
//     {
//         return;
//     }
//     int count = 1;
//     bool found;
//     int ele = arr[0];
//     while (s <= e)
//     {
//         for (int i = s + 1; i < e; i++)
//         {
//             if (arr[i] == arr[s])
//             {
//                 found = true;
//                 count++;
//                 ele = arr[s];
//             }
//         }
//         s++;
//     }
//     if (found)
//     {
//         count = count - 1;
//     }

//     cout << "Element : " << ele << " and Count : " << count << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int s = 0;
//     MajorityCheck(arr, n, s);

//     return 0;
// }

// Find the missing integer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements in array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int min = arr[0];
//     int max = arr[n - 1];

//     int missingNumber = 0;
//     int i = 0;
//     while (min < max)
//     {
//         if (arr[i] == min)
//         {
//             min = arr[i] + 1;
//         }
//         else
//         {
//             missingNumber = min;
//             break;
//         }
//         i++;
//     }
//     cout << missingNumber << endl;
//     return 0;
// }

// count pair with given sum
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int partionIndex(int *arr, int s, int e){
//     int PivotIndex = arr[0];
// }
// void quickSort(int *arr, int s, int e)
// {
//     if (s < e)
//     {
//         int partion = partionIndex(arr, start, end);
//         quickSort(arr, s, partion - 1);
//         quickSort(arr, partion + 1, e);
//     }
//     return;
// }
// int main()
// {
//     int arr[] = {1, 5, 7, -1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 6;

//     // quickSort(arr, 0, n);
//     sort(arr, arr + n);
//     int s = 0, e = n;
//     pair<int, int> p;

//     while (s <= e)
//     {
//         if (arr[s] + arr[e] == k)
//         {
//             p.first = s;
//             p.second = e;
//             cout << "Pair is " << arr[p.first] << " " << arr[p.second] << endl;
//             s++;
//             e--;
//         }
//         else if (arr[s] + arr[e] < k)
//         {
//             e--;
//         }
//         else
//         {
//             s++;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> ans;
//     vector<int> arr;
//     int n;
//     cout << "Enter Size of array : ";
//     cin >> n;
//     int s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         arr.push_back(s);
//     }
//     int count;
//     // Duplicate Element found Code start
//     for (int i = 0; i < n; i++)
//     {
//         count = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > 0)
//         {
//             ans.push_back(arr[i]);
//         }
//     }
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Find Peak elemenet in array
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Size of array : ";
//     cin >> n;

//     vector<int> arr;
//     int a;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         arr.push_back(a); // 2 3 8 5 1
//     }
//     // for 1 value
//     int max = arr[0];
//     int index;
//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//             index = i;
//         }
//     }

//     bool done;

//     if (index == 0)
//     {
//         if (arr[1] < max)
//         {
//             cout << "Peak Element is : " << arr[0] << endl;
//             done = true;
//         }
//     }
//     if (index == n - 1)
//     {
//         if (max > arr[n - 2])
//         {
//             cout << "Peak Element is : " << arr[n - 1] << endl;
//             done = true;
//         }
//     }

//     if (!(done))
//     {
//         for (int i = 1; i < n - 1; i++)
//         {
//             if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
//             {
//                 cout << "Peak Element is : " << arr[i] << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// Move all negative elements in left side of array
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Size of array : ";
//     cin >> n;

//     int a;
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         arr.push_back(a);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < 0)
//             {
//                 swap(arr[i], arr[j]);
//                 break;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Find minimum and maximum element in an array
#include <iostream>
using namespace std;
int getMax(int *arr, int n, int maxEle)
{
    if (n == 1)
    {
        return arr[0];
    }

    maxEle = max(arr[n - 1], getMax(arr, n - 1, maxEle));

    return maxEle;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << getMax(arr, n, 0) << endl;
    return 0;
}
