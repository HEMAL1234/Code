#include <bits/stdc++.h>

using namespace std;

int size = 0;
long long a[1001000];

void push_back(long long n)
{
    a[size] = n;
    size++;
}

int main()
{
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        if ((i == 0 || s[i-1] == 'o') && s[i] == 'v' && (i == s.size() - 1 || s[i+1] == 'o')) s[i] = 'x';
    long long i = 0, n = s.size();
    while (i < s.size() && s[i] != 'v')
        i++;
    while (n >= 0 && s[n-1] != 'v')
        n--;
    long long count = 0; bool b = false;

    for (; i < n; i++)
    {
        if (s[i] == 'v')
        {
            if (!b)
                count++;
            else
            {
                push_back(count);
                count = 1;
                b = false;
            }
        }
        else if (s[i] == 'o')
        {
            if (b)
                count++;
            else
            {
                push_back(count-1);
                count = 1;
                b = true;
            }
        }
    }
    push_back(count-1);
    long long rest = 0;

    if (size < 3) return !printf("0");

    long long sum = a[size-1];
    a[size-2] *= sum;

    for(i = size - 3; i >= 1; i-=2)
    {
        sum += a[i];
        a[i-1] *= sum;
    }

    for (i = size - 2; i >= 1; i-=2)
        a[i-2] += a[i];

    for (i = 1; i < size; i+=2)
        rest += a[i-1] * a[i];
    cout << rest;
}
