//Write a program to insert the elements into minimum heap.
#include <iostream>
#include <conio.h>
using namespace std;
void min_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j + 1] < a[j])
            j = j + 1;
        if (temp < a[j])
            break;
        else if (temp >= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j / 2] = temp;
    return;
}
void build_minheap(int *a, int n)
{
    int i;
    for (i = n / 2; i >= 1; i--)
    {
        min_heapify(a, i, n);
    }
}
int main()
{
    //clrscr();
    int n, i, x;
    cout << "Enter no. of elements of an array:";
    cin >> n;
    int a[20];
    for (i = 1; i <= n; i++)
    {
        cout << "Enter element:" << i << endl;
        cin >> a[i];
    }
    build_minheap(a, n);
    cout << "Min heap:\n";
    for (i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
    }
    getch();
}
