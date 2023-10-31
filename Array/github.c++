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

//     if (!(index == 0))
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
// #include <iostream>
// using namespace std;
// int getMax(int *arr, int n, int maxEle)
// {
//     if (n == 1)
//     {
//         return arr[0];
//     }

//     maxEle = max(arr[n - 1], getMax(arr, n - 1, maxEle));

//     return maxEle;
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

//     cout << getMax(arr, n, 0) << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void Input(vector<vector<int>> &arr, vector<vector<int>> &res, int s, int e)
// {
//     if (s < 0 || e < 0)
//     {
//         return;
//     }
//     res[s][e] = arr[s][e];

//     if (e > 0)
//     {
//         Input(arr, res, s, e - 1);
//     }
//     else if (s > 0)
//     {
//         Input(arr, res, s - 1, arr[0].size() - 1);
//     }
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector<vector<int>> res(3, vector<int>(3, 0));

//     Input(arr, res, 2, 2);

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// copy array
// #include <iostream>
// using namespace std;

// const int ROWS = 100;
// const int COLS = 100;

// void copyArray(int source[][COLS], int destination[][COLS], int row, int col)
// {
//     if (row < ROWS)
//     {
//         if (col < COLS)
//         {
//             destination[row][col] = source[row][col];
//             copyArray(source, destination, row, col + 1);
//         }
//         else
//         {
//             copyArray(source, destination, row + 1, 0);
//         }
//     }
// }

// int main()
// {
//     int source[ROWS][COLS];
//     int a, b;
//     cout << "Enter size of array : ";
//     cin >> a >> b;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             cin >> source[i][j];
//         }
//     }

//     int destination[ROWS][COLS] = {0}; // Initialize the destination array with zeros

//     copyArray(source, destination, 0, 0);

//     // Display the copied elements in the destination array
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             cout << destination[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Find the occurences of integer in an array
// #include <iostream>
// using namespace std;
// int check(int *arr, int n, int count)
// {
//     int ele = arr[0];
//     int i = 0;
//     int ans = 0;
//     while (i < n)
//     {
//         if (ele == arr[i])
//         {
//             count++;
//             i++;
//         }
//         else
//         {
//             ele = arr[i];
//             count = 0;
//         }

//         ans = max(count, ans);
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout << "Enter Size of an array : ";
//     cin >> n;

//     int arr[n];
//     cout << "enter elements in an array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int count = 0;
//     cout << "Check for maximum occurences : ";
//     cout << check(arr, n, count);
//     cout << endl;
//     return 0;
// }

// Find the first repeating element in an array of integers
// #include <iostream>
// #include <vector>
// using namespace std;
// bool search(vector<int> temp, int key, int n)
// {
//     int count = 0;
//     int s = 0, e = n - 1;
//     int mid;
//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;
//         if (key == temp[mid])
//         {
//             count++;
//             e = mid - 1;
//         }
//         else if (key > temp[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     if (count > 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int check(int *arr, int n)
// {
//     int count = 0;
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         temp.push_back(arr[i]);
//     }
//     sort(temp.begin(), temp.end());

//     bool ans;
//     int key;
//     int res = -1;
//     for (int i = 0; i < n; i++)
//     {
//         key = arr[i];
//         ans = search(temp, key, n);
//         if (ans)
//         {
//             res = i;
//             break;
//         }
//     }

//     return res;
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter elements in array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "First Smallest Repeating elements in array : " << check(arr, n) << endl;
//     return 0;
// }

// Find the Minimum element in a Sorted and Rotated Array
// Add by me --> with index
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the elements in an array \n";
//     for (int j = 0; j < n; j++)
//     {
//         cin >> arr[j];
//     }

//     // using linear search we can easily find minimum element in an array
//     int index;
//     int minEle = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < minEle)
//         {
//             minEle = min(minEle, arr[i]);
//             index = i;
//         }
//     }

//     cout << "Minimum element is " << minEle << " and index is " << index << endl;
//     return 0;
// }

// Minimize the maximum difference between the heights
// Description MUST READ
/*
Given the heights of N towers and a value of K, Either increase or
decrease the height of every tower by K (only once) where K > 0.
After modifications, the task is to minimize the difference between
the heights of the longest and the shortest tower and output its difference.
*/

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     vector<int> arr;
//     int a;
//     cout << "Enter elements in an array \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         arr.push_back(a);
//     }

//     // sorting array
//     sort(arr.begin(), arr.end());
//     // max and min element
//     int minEle = arr[0];
//     int maxEle = arr[n - 1];

//     int K;
//     cout << "Enter K : ";
//     cin >> K;

//     int minHeight = minEle;
//     int maxHeight = maxEle;
//     int ans = maxEle - minEle;

//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] - K < 0)
//         {
//             continue;
//         }

//         minHeight = min(arr[0] + K, arr[i] - K);

//         maxHeight = max(arr[i - 1] + K, arr[n - 1] - K);

//         ans = min(ans, maxHeight - minHeight);
//     }
//     cout << ans << endl;
//     return 0;
// }

// Implemet=nting a stack using array
// #include <iostream>
// using namespace std;
// int top = -1;
// int arr[100];
// bool Empty(int n)
// {
//     if (top == n)
//     {
//         cout << "Stack is Full" << endl;
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }
// void Push(int n)
// {
//     if (Empty(n))
//     {
//         int a;
//         cout << "Enter element : ";
//         cin >> a;
//         arr[++top] = a;
//         cout << "Enter Successfully" << endl;
//     }
// }
// void Pop(int n)
// {
//     if (top == -1)
//     {
//         cout << "Stack is Empty !" << endl;
//     }
//     else
//     {
//         int temp = arr[top];
//         cout << "Pop element is " << temp << endl;
//         top--;
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter Size of Stack you want : ";
//     cin >> n;
//     cout << endl;
//     Push(n);
//     Push(n);
//     Push(n);
//     Pop(n);
//     Pop(n);
//     return 0;
// }

// WAP to sort an array in Wave form
// #include <iostream>
// using namespace std;
// void sortArray(int *arr, int n)
// {
//     sort(arr, arr + n);
//     // agar sort function khudse bnana h toh yha -> merge sort ya fir quick sort bnana hoga nahi toh complexity bad jayege
// }
// void swapAlternate(int *arr, int n)
// {
//     for (int i = 0; i < n - 1; i += 2)
//     {
//         int temp = arr[i + 1];
//         arr[i + 1] = arr[i];
//         arr[i] = temp;
//     }
//     cout << "Swap Successfully!" << endl;
// }
// int main()
// {
//     int n;
//     cout << "Enter Size of array : ";
//     cin >> n;

//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sortArray(arr, n);
//     swapAlternate(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     delete arr;
//     return 0;
// }

/*
Find Row with min no's of 1
Find Row with max no's of 1
Find whether an array is subset of another array
Find Majority Element
*/

// #include <iostream>
// using namespace std;
// int arr[100][100];
// int check(int m, int n)
// {
//     int res = -1;
//     int index = -1;
//     for (int i = 0; i < m; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i][j] == 1)
//             {
//                 count++;
//             }
//         }
//         if (res < count)
//         {
//             res = count;
//             index = i;
//         }
//     }
//     cout << "Index of row is " << index << endl;
//     return res;
// }
// int main()
// {
//     int m, n;
//     cout << "Enter size of rows and column : ";
//     cin >> m >> n;

//     cout << "Enter 0's and 1's in matrix " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int ans = check(m, n);
//     cout << ans << endl;
//     return 0;
// }

// Stock Span Problem
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Size of array : ";
//     cin >> n;

//     vector<int> arr;
//     int a;
//     cout << "Enter Stock price \n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a;
//         arr.push_back(a);
//     }

//     cout << "Span in Stock : ";
//     int count = 2;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             cout << "1 ";
//         }
//         else
//         {
//             cout << count << " ";
//         }
//         count++;
//     }
//     cout << endl;
//     return 0;
// }
// Find wheter an array is subset of another array
// #include <iostream>
// using namespace std;
// bool search(int *arr, int key, int n)
// {
//     int s = 0;
//     int e = n;
//     int mid;
//     while (s <= e)
//     {
//         mid = s + (e - s) / 2;
//         if (arr[mid] == key)
//         {
//             return true;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n, m;
//     cout << "Enter size for first array : ";
//     cin >> n;
//     cout << "Enter size for second array : ";
//     cin >> m;
//     int arr[n];
//     int brr[m];
//     cout << "Enter elements in array 1 " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter elements in array 2 " << endl;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> brr[i];
//     }

//     sort(arr, arr + n);

//     int res = 0;
//     for (int i = 0; i < m; i++)
//     {
//         int key = brr[i];
//         bool ans = search(arr, key, n);
//         if (ans)
//         {
//             res++;
//         }
//     }
//     if (res == m)
//     {
//         cout << "Subset of array 1" << endl;
//     }
//     else
//     {
//         cout << "Not a subset of array 1" << endl;
//     }
//     return 0;
// }

// TRAPOING RAINWATER STORAGE
// #include <iostream>
// using namespace std;
// int check(int *arr, int n)
// {
//     int res = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         int left = arr[i];
//         for (int j = 0; j < i; j++)
//         {
//             left = max(left, arr[j]);
//         }
//         int right = arr[i];
//         for (int k = i + 1; k < n; k++)
//         {
//             right = max(right, arr[k]);
//         }

//         res = res + (min(left, right) - arr[i]);
//     }
//     return res;
// }
// int main()
// {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter water in storage : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int storage = check(arr, n);
//     cout << "Total rainwater can store in storage is : " << storage << endl;
//     return 0;
// }

// Find an element which divide the array such that sum of left array is equal to sum of right array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size of array : ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Starting of logic
//     int rightSum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         rightSum += arr[i];
//     }
//     int leftSum = 0;
//     bool done;
//     for (int i = 0, j = 1; j < n; i++, j++)
//     {
//         rightSum -= arr[j];
//         leftSum += arr[i];

//         if (rightSum == leftSum)
//         {
//             cout << "Element is " << arr[i + 1] << endl;
//             done = true;
//             break;
//         }
//     }
//     if (!done)
//     {
//         cout << "Not a such type of element" << endl;
//     }
//     return 0;
// }

// Reverse Word in given string using class
// #include <iostream>
// #include <string>
// using namespace std;
// class Reverse
// {
// public:
//     string temp;
//     void ReverseString(string str)
//     {
//         int len = str.length();
//         temp = "";
//         for (int i = len - 1; i >= 0; i--)
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     void Display()
//     {
//         cout << temp << endl;
//     }
// };
// int main()
// {
//     string str;
//     cout << "Enter String : ";
//     getline(cin, str);

//     Reverse R1;
//     R1.ReverseString(str);
//     R1.Display();
//     return 0;
// }

// Longest Common Prefix Using Sorting
// #include <iostream>
// #include <string>
// using namespace std;
// int minLength(string str[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i].length() < min)
//         {
//             min = str[i].length();
//         }
//     }
//     return min;
// }
// int main()
// {
//     string str[4];
//     cout << "Enter String in array \n";
//     for (int i = 0; i < 4; i++)
//     {
//         cin >> str[i];
//     }
//     cout << minLength(str, 4);
//     return 0;
// }

// WAP to convert digit to word
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NumToWord
{
public:
    const string number[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    void Conversion(int n)
    {
        vector<string> temp; // Store the words for each digit
        while (n > 0)
        {
            int digit = n % 10;
            temp.push_back(number[digit]);
            n /= 10;
        }

        if (temp.empty())
        {
            cout << number[0]; // Handle the case when the input is 0
        }
        else
        {
            for (int i = temp.size() - 1; i >= 0; i--)
            {
                cout << temp[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    NumToWord obj1;
    obj1.Conversion(n);

    return 0;
}
