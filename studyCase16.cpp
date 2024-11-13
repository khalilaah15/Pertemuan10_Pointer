#include <iostream>
#include <iomanip>
using namespace std;

// void reverseArray(int arr[], int size)
// {
//     for (int i = 0; i < size / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[size - i];
//         arr[size - i] = temp;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     reverseArray(arr, size);
//     cout << "Array setelah dibalik: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}