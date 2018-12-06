//
// Created by yysz02 on 2018/12/6.
//

#include <gtest/gtest.h>
#include <unordered_map>
#include <list>
#include <vector>

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
    vector<string::iterator> res;
    for (auto p = s.begin(); p != s.end(); ++p ) {
        if (*p == c) {
            res.push_back(p);
        }
        return res;
    }
}

TEST(find_all, find_all) {

    string m{"Mary has a little lamb"};
    auto result = find_all(m, 'a');

}

template <typename T>
using Iterator = typename T::iterator;
template <typename C, typename V>
vector<Iterator<C>> find_all(C& c, V v) {
    vector<Iterator<C>> res;
    for (auto i = c.begin(); i != c.end(); i++) {
        if (*i == v) {
            res.push_back(i);
        }
    }
    return res;
}

TEST(find_all_template, find_all_template) {
    list<double> ld {1.1, 2.1};
    auto result = find_all(ld, 1.1);

    for(auto d : result) {
        if (*d != 1.1) {
            cerr << "double list issue" << endl;
        }
    }
}