//
// Created by yysz02 on 2018/12/6.
//

#include <iostream>
#include <ostream>
#include <gtest/gtest.h>

using namespace std;

struct Entry {
    string name;
    int number;
};

istream& operator>>(istream& is, Entry& e) {
    char c, c2;
    if (is>>c && c=='{' && is>>c2 && c2 =='"') {
        string name;
        while (is.get(c) && c!='"') {
            name+= c;
        }

        if (is>>c && c==',') {
            int number = 0;
            if (is>>number>>c && c=='}') {
                Entry entry;
                entry.name = name;
                entry.number = number;
                e = entry;
                return is;
            }
        }
    }
    is.setstate(ios_base::failbit);
    return is;
}

ostream& operator<<(ostream& os, const Entry& e) {
    return os << "{\"" << e.name <<"\"," << e.number << "}";
}

TEST(io_stream, user_defined_types) {

}

TEST(io_stream, formatting) {
    cout << 1234 << ',' << hex << 1234 << "," << oct << 1234 << endl;
}