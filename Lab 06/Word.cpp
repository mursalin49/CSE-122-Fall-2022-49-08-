#include<iostream>
using namespace std;
int main()
{
    char s[105];int n1=0,n2=0;
    cin>>s;
    for(int i=0;s[i]!='\0';++i){
        if(s[i]>='A' && s[i]<='Z')n1++;
        else n2++;
    }
    if(n1<=n2){
        for(int i=0;s[i]!='\0';++i)
            if(s[i]>='A' && s[i]<='Z')s[i]+=32;
    }
    else{
        for(int i=0;s[i]!='\0';++i)
            if(s[i]>='a' && s[i]<='z')s[i]-=32;
    }
    cout<<s<<endl;
    return 0;
}
