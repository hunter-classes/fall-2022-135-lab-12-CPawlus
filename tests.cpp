#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.cpp"
#include <vector>

TEST_CASE("MakeVector Test Cases") 
{
   std::vector<int> a = makeVector(0);
   std::vector<int> b = makeVector(1);
   std::vector<int> c = makeVector(-1);
   std::vector<int> d = makeVector(5);
   std::vector<int> e = makeVector(10);
   CHECK(a == makeVector(0));
   CHECK(makeVector(1) == b);
   CHECK(c == makeVector(-1));
   CHECK(makeVector(5) == d);
   CHECK(e == makeVector(10));
}

TEST_CASE("GoodVibes Test Cases") 
{
   std::vector<int> a = {0,-1,2};
   std::vector<int> b = {0,0,0};
   std::vector<int> c = {};
   std::vector<int> d = {1,63,2};
   CHECK(goodVibes(a) != std::vector<int>{0,2});
   CHECK(goodVibes(b) != std::vector<int>{0,1});
   CHECK(goodVibes(c) != std::vector<int>{0,2});
   CHECK(goodVibes(d) != std::vector<int>{1,63,2});
}

TEST_CASE("SumPairWise Test Cases") 
{
   std::vector<int> a = {0,-1,2};
   std::vector<int> b = {0,0,0};
   std::vector<int> c = {4,234,2};
   std::vector<int> d = {-4,33,-2};
   CHECK(sumPairWise(a,b) != std::vector<int>{0,-1,2,0,0,0});
}