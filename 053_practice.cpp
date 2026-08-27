
#include <iostream>
using namespace std;

int search(int *A, int n, int key)
{ // or int A[]  but array input is not prefered
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n, k;
    cout << "size of Array" << endl;
    cin >> n;

    int A[n];
    cout << endl
         << "enter elements of array(integers)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << endl
         << "Enter an element to be searched" << endl;
    cin >> k;
    cout << endl
         << "element found at index " << search(A, n, k);
    return 0;
}