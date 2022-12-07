/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Vectors: A Song of Push and Pop, Lab 12.

This program uses vectors that are used to 
create manipulate elements inside of them.
*/

#include <iostream>
#include <string>
#include "funcs.h"

int main()
{
   // A
   std::vector<int> a = makeVector(10);
   // B
   goodVibes(a);
   // C
   std::vector<int> vec1{5,2,1};
   std::vector<int> vec2{1,2};
   gogeta(vec1, vec2);
   // D
   vec1 = {5,2,1};
   vec2 = {1,2};
   std::vector<int> tempvec = sumPairWise(vec1, vec2);
   for(int i = 0; i < tempvec.size(); i++) 
   {
      std::cout << tempvec[i] + ' ';
   }
   std::cout << std::endl;
   return 0;
}