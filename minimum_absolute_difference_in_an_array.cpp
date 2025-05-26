#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumAbsoluteDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
void printArray(vector<int> arr)
{
   for (auto i : arr) {
       cout << i << " ";
   }
   cout << endl;
}

int minimumAbsoluteDifference(vector<int> arr) {
   sort(arr.begin(), arr.end());
   cout << "After sorting \n";
   printArray(arr);
   auto n = arr.size();
   auto result = INT_MAX;
   for (auto i = 1; i < n; i++) {
    auto diff = arr[i] - arr[i-1];
    cout << "Diff arr[" << i << "] and arr[" 
    << i-1 << "] is " << diff << endl;
    if (result > diff) {
        result = diff;
    }
   }
   return result;
}

int main()
{
    vector<int> arr = {1, -3, 71, 68, 17};
    auto n = arr.size();
    printArray(arr);
    int result = minimumAbsoluteDifference(arr);
    cout << "Minimum Absolute Difference is  " <<  result << "\n\n";
    arr = {3, -7, 0};
    n = arr.size();
    printArray(arr);
    result = minimumAbsoluteDifference(arr);
    cout << "Minimum Absolute Difference is  " <<  result << "\n\n";

    arr = {-59, -36, -13, 1, -53, -92, -2, -96, -54, 75};  
    n = arr.size();
    printArray(arr);
    result = minimumAbsoluteDifference(arr);
    cout << "Minimum Absolute Difference is  " <<  result << "\n\n";
   
    return 0;
}
