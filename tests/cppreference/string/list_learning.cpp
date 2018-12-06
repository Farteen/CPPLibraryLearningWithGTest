//
// Created by yysz02 on 2018/12/6.
//

#include <list>
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

struct Entry {
    string name;
    int number;
};

TEST(learning_list, list) {
    list<Entry> phone_book = {
            {"David", 123},
            {"Popper", 321},
            {"William", 231}
    };

}