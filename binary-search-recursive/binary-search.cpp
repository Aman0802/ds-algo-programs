#include <iostream>

using namespace std;

int binarySearch(int item, int l, int h, int arr[])
{
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            binarySearch(item, mid + 1, h, arr);
        }
        else
        {
            binarySearch(item, l, mid - 1, arr);
        }
    }
    return -1;
}

int main()
{
    int item, l = 0, h = 10, arr[10];
    cout << "Enter 10 elements" << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    cout << "Enter the element you want to search ";
    cin >> item;
    cout << "Helllu";
    // cout << endl;
    int res = binarySearch(item, l, h, arr);
    if (res == -1)
        cout << "Element not found!" << endl;
    else
        cout << "Element present at " << res + 1 << " position!" << endl;
    return 0;
}