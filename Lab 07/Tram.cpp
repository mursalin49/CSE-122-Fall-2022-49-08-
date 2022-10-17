#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int i, n, s, r, sum=0, m=0;
   cin >> n;
   for(i=0; i<n; i++){
      cin >> s >> r;
      sum=(s+m)-r;
      if(sum<0){
         m=0;
      } else {
         m=sum;
      }
   }
   cout <<sum;
   return 0;
}
