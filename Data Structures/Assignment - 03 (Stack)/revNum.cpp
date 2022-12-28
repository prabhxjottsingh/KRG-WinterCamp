#include <bits/stdc++.h>
using namespace std;

void recurStack(int x, int &newNum)
{
    if (!x)
        return;
    newNum = newNum * 10 + x % 10;
    recurStack(x / 10, newNum);
}

int main()
{
    int x;
    cin >> x;
    int newNum = 0;
    recurStack(x, newNum);
    cout << newNum;
}