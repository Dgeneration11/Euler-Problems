#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(a.begin(), a.end());
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());
    for (auto i : a)
    {
        cout << i << " ";
    }
}