

#include<iostream>
#include<vector>
#include<numeric>
#include<bits/stdc++.h>
using namespace std;
void calulate(vector<int> n)
{ int z,x;
  int c=0;
  cout<<"Enter the index number to be checked: "<<endl;
  cin>>z;
  cout<<"Enter the range :"<<endl;
  cin>>x;
    sort(n.begin(),n.end());
   for(int i =2;i<=x;i++){
    if(n[z]%i==0){
        c= c+1;
    }
      }
   if(c>=2)
   {
       cout<<"Not prime"<<endl;
   }
   else{
       cout<<"prime"<<endl;
   }
}
int main()
{  vector<int> main;

   int x,y;
   cout<<"Enter the range: "<<endl;
   cin>>x;
   for(int i=0;i<x;i++){
       cin>>y;
       main.push_back(y);
   }
   

    calulate(main);
    return 0;
}
