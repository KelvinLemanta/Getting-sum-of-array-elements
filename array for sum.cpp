
// 137533 Kelvin Lemanta

// Getting sum of an array whose elements are input by the user

#include<iostream>
using namespace std;
int main ()
{
    int ten[10], n, i, sum = 0;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    cout << "Input values of array declared as ten: 10, 20, 30, 40...100";
    for (i = 0; i < n; i++)
    cin >> ten[i];
    for (i = 0; i < n; i++)
    {
        sum += ten[i];
    }
    cout << "Sum of array elements : " << sum;
    return 0;
}
