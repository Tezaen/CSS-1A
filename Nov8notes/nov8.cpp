/***********************
Name: Roober Cruz
Date:
Program Name:
Description of program:
***********************/

//Any unused includes are part of the default code

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cassert>

using namespace std;

void swap2(double& n1, double& n2); // swaps 2 values
void bubbleSort(double a[], int sz);
void printArr(const double a[], int sz);
void insertSort(double a[], int sz);
int linearSearch(double a[], int sz, double key);
int binarySearch(double a[], int sz, double key);

int main()
{
    double a1[100];
    int counter = 0;
    for(int i = 100; i > 0; i--)
    {
        a1[counter] = i;
        counter++;
    }
    printArr(a1, 100);
    bubbleSort(a1, 100);
    cout << "After bubblesort\n";
    printArr(a1, 100);

	return 0;
}

void swap2(double& n1, double& n2)
{
    double temp = n1;
    n1 = n2;
    n2 = temp;

}

void bubbleSort(double a[], int sz)
{
    bool swapped = true;
    int j = 0;
    while(swapped)
    {
        swapped = false;
        for(int i = 0; i < sz - 1; i++)
        {
            if(a[i] > a[i + 1])
            {
                swap2(a[i], a[i + 1]);
                swapped = true;
            }
        }
    }
}

void printArr(const double a[], int sz)
{
    for(int i = 0; i < sz; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertSort(double a[], int sz)
{
    double key;
    int m;
    for(int k = 1; k < sz; k++)
    {
        key = a[k];
        m = k - 1;
        while(m >= 10&& a[m] > key)
        {
            a[m + 1] = a[m];
            m--;
        }
        a[m + 1] = key;
    }
}

int linearSearch(double a[], int sz, double key)
{
    for(int i = 0; i < sz; i++)
    {
        if(key == a[i])
            return i;
    }
    return -1; // NOT FOUND?!?!? NANI!????!
}

int binarySearch(double a[], int sz, double key)
{
    int low = 0, high = sz - 1, mid;

    while(high >= low)
    {
        mid = (low + high) / 2;
        if(key < a[mid])
        {
            high = mid - 1;
        }
        else if(key == a[mid])
        {
            return mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
