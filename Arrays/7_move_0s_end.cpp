/*
    move all zeros to the end
    brute force :
        using an extra array. first traverse the old array and count num of zeros and then again traverse the old array if arr[i]!=0 push it in to the new array and repeat it at one point all the non  zero elements gets filled in the new array to some places then fill the remaining places with zeros
        time complexity : O(n)+O(n)
        space complexity : O(n)
    optimal :
        using two pointer approach by doing in-place swapping
        first make a variable j as -1 and traverse the array to find the zero element index to place the j here it takes O(N) in worst case if there is no zero element in the array
        then again traverse the array from j+1 to n and if there is any non zero element swap the index i and index j elements and increment both the indices
        time complexity : O(n)+O(n)
        space complexity : O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void brute_force(int arr[], int n)
{
    int new_arr[n];
    int zero_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
    }
    if(!zero_count){
        print(arr, n);
        return;
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            new_arr[j] = arr[i];
            j++;
        }
    }
    for (int i = j; i < n; i++)
    {
        new_arr[i] = 0;
    }
    cout << "Brute force output :" << endl;
    print(new_arr, n);
    cout << endl;
}

void optimal(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << "Optimal output :" << endl;
        print(arr, n);
        cout << endl;
        return;
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << "Optimal output :" << endl;
    print(arr, n);
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements in to the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    brute_force(arr, n);
    optimal(arr, n);
    return 0;
}