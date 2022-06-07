#include<iostream>
using namespace std;
int count[256],len;
int main(){
   char c;
   int n;
   while(cin>>n){

   while(cin>>c) len++,count[toupper(c)]++;
   while(--len){
      for(c='A';c<='Z';c++){
         if(count[c]==len)
            cout<<c<<" "<<count[c]<<endl;
      }
   }
   }
   return 0;
}
