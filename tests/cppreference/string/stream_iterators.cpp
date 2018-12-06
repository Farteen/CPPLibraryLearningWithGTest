//
// Created by yysz02 on 2018/12/6.
//

#include <gtest/gtest.h>
#include <unordered_map>
#include <list>
#include <vector>
#include <ostream>
#include <string>


using namespace std;

ostream_iterator<string> oo{cout};

TEST(ostream_learning, ostream_learning) {
    *oo = "Hello";
    ++oo;
    *oo = "world\n";
}