#include <iostream>
using namespace std;
int main()
{
   string str;
   cin >> str;
   int incr=0, i;

   for(i=0; i<str.size();i++){
     if(str[i]=='4' || str[i]=='7'){
         incr++;
     }
   }
   if(incr==4 || incr==7){
      cout << "YES" << endl;
   } else {
      cout << "NO" << endl;
   }
   return 0;
}
