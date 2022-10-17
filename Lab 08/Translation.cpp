#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s, x;
cin >> s;
cin >> x;
reverse(s.begin(), s.end());
if(s == x)
{
cout << "YES";
}
else
{
cout << "NO";
}
}



