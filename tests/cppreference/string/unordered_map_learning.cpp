//
// Created by yysz02 on 2018/12/6.
//

#include <gtest/gtest.h>
#include <unordered_map>

using namespace std;

TEST(unordered_map_learning, learning) {
    unordered_map<string, int> phone_book {
            {"david", 123},
            {"java", 111},
            {"dudu", 321}
    };

}

bool has_c(const string& s, char c) {
    auto p = find(s.begin(), s.end(), c);
    if (p != s.end())
        return true;
    else
        return false;
}

vector<string::iterator> find_all(string& s, char c) {
    vector<string::iterator>
}