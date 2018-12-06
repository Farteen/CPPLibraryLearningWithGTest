//
// Created by yysz02 on 2018/12/6.
//

#include <gtest/gtest.h>
#include <map>

using namespace std;

TEST(learning_map, map) {
    cout << endl;
    map<string, int> phone_book {
            {"david", 123}
    };
    auto result = phone_book.find("david");
    cout << result << endl;
//    cout << phone_book["david"] << endl;

}