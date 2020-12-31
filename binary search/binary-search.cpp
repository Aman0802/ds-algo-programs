#include <iostream>

using namespace std;

int main()
{
    int num, l = 0, h, mid, arr[10];
    cout << "Enter 10 elements\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    h = sizeof(arr);
    cout << "Enter the elemnet you want to search";
    cin >> num;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == num)
        {
            break;
        }
        else if (arr[mid] < num)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }

    if (l <= h)
    {
        cout << num << " is located at " << mid + 1;
    }
    else
    {
        cout << num << " not found";
    }
    return 0;
}