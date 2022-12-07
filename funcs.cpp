#include <iostream>
#include <vector>
#include "funcs.h"

std::vector<int> makeVector(int n) 
{
   std::vector<int> vec;
   for(int i = 0; i < n; i++) 
   {
      vec.push_back(0);
   }
   return vec;
}

std::vector<int> goodVibes(const std::vector<int>& v) 
{
   std::vector<int> vec;
   for(int i = 0; i < vec.size(); i++) 
   {
      if(v.at(i) > 0) 
      {
         vec.push_back(v.at(i));
      }
   }
   return vec;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta) 
{
   for(int i = 0; i < vegeta.size(); i++) 
   {
      goku.push_back(vegeta.at(i));
   }
   vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) 
{
   std::vector<int> tempv{};
   int num = 0, num2 = 0;
   if(v1.size() > v2.size()) 
   {
      for(int i = 0; i < v2.size(); i++) 
      {
         tempv.push_back(v1[i] + v2[i]);
      }
      for(int i = v2.size(); i < v1.size(); i++) 
      {
         tempv.push_back(v1[i]);
      }
   } 
   else 
   {
      for(int i = 0; i < v1.size(); i++) 
      {
         tempv.push_back(v1[i] + v2[i]);
      }
      for(int i = v1.size(); i < v2.size(); i++) 
      {
         tempv.push_back(v2[i]);
      }      
   }
   return tempv;
}
