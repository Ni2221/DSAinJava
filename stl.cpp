//stl library important
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     vector<int>v;
     
   v.assign(5,10);//filling the 10 with five times
   cout<<"the vector elements are:";
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   v.push_back(15);
   int n=v.size();
  
   cout<<" \n the last element is:"<<v[n-1];
    cout<<"the vector elements are:";
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   v.pop_back();
   cout<<" \n the vector elements are:";
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   //insert at begining
   v.insert(v.begin(),5);
   cout<<"\n the first elemnt is :"<<v[0];
cout<<" \n the vector elements are:";
   for(int i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   //remove the first element
   v.erase(v.begin());
   cout<<"\n The element is :"<<v[0];
   // insert at the begining
   v.emplace(v.begin(),5);
      cout<<"\n The element is :"<<v[0];
      //insert 20 at yhe end
      v.emplace_back(20);
      n=v.size();
      cout<<"\n The last element is:"<<v[n-1];

      // erase the vector
      v.clear();
      cout<<"\n vector  size after erase():"<<v.size();

      // swaping two vector
      vector<int>v1,v2;
      v1.push_back(1);
      v1.push_back(2);
      v2.push_back(3);
      v2.push_back(4);
      

      cout<<"\n \n vector 1:";
      for(int i=0;i<v1.size();i++)
      cout<<v1[i]<<" ";
      cout<<"\n \n vector 2:";
      for(int i=0;i<v2.size();i++)
      cout<<v2[i]<<" ";
// swaps v1 and v2
   v1.swap(v2);
   cout<<"\n  after swap\n vector 1:";
      for(int i=0;i<v1.size();i++)
      cout<<v1[i]<<" ";
      cout<<"\n  after swap\n vector 2:";
      for(int i=0;i<v2.size();i++)
      cout<<v2[i]<<" ";

 }