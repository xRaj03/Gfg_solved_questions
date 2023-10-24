#include <iostream>

using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int key = 7;

    for (int i = 0; i < 5; i++)
    {
        int Sum = 0;
        for (int j = i; j < 5; j++)
        {
            Sum += arr[j];
            if (Sum == key)
            {
                cout << "-----------------------" << endl;
                cout << "Indexs are : " << arr[i] << " " << arr[j] << endl;
                break;
            }
        }
    }
    return 0;
}