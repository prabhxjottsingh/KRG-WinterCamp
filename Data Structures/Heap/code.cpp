#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    vector<int> arr;
    int size;

    Heap(int n)
    {
        arr.resize(4 * n + 1, INT_MAX);
        size = 0;
    }
    fmvfkfkfnklnffk

        void
        push(int val)
    {
        size += 1;
        int idx = size;
        arr[idx] = val;
        while (idx > 1)
        {
            int parent = idx / 2;
            if (arr[parent] < arr[idx])
            {
                swap(arr[parent], arr[idx]);
                idx = parent;
            }
            else
                return;
        }
    }

    void pop()
    {
        if (size == 0)
        {
            cout << "Empty Heap";
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size)
        {
            int leftIdx = 2 * i;
            int rightIdx = 2 * i + 1;

            if (leftIdx < size && arr[i] < arr[leftIdx])
            {
                swap(arr[i], arr[leftIdx]);
                i = leftIdx;
            }
            else if (rightIdx < size && arr[i] < arr[rightIdx])
            {
                swap(arr[i], arr[rightIdx]);
                i = rightIdx;
            }
            else
                return;
        }
    }

    int top()
    {
        return arr[1];
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

void heapifyAlgo(int n, int arr[], int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapifyAlgo(n, arr, largest);
    }
}

int main()
{
    int arr[] = {10, 20, -1, 40, 50, -100, -56};
    int n = sizeof(arr) / sizeof(arr[0]);
    Heap pq(n);

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int i = 0;
    while (i < n)
    {
        cout << pq.top() << " ";
        pq.pop();
        i++;
    }
}