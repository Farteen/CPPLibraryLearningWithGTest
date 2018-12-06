//
// Created by yysz02 on 2018/12/6.
//

#include <gtest/gtest.h>
#include <vector>

using namespace std;

struct Entry {
    string name;
    int number;
};

//class Entry {
//    string mname;
//    int mnumber;
//public:
//    Entry(string& name, int number): mname{name}, mnumber{number} {}
//    Entry(init)
//    string getName() const { return mname; }
//};

TEST(vector_learning, vector) {
//    string name = "Jiawei";
//    string name2 = "Farteen";
//    Entry e1(name, 123123);
//    Entry e2(name2, 212121);
//    vector<Entry> phone_book = {};
//    phone_book.push_back(e1);
//    phone_book.push_back(e2);

    vector<int> v1 = {1, 2, 3, 4};


    vector<Entry> v3 = {
            {"name", 1}
    };

}

template <typename T>
class Vector {
    T* elem;
    T* space;
    T* last;
public:
    int size();
    int capacity();
    void reverse(int newsz);

    void push_back(const T& t);
    void push_back(T&& t);
};

template <typename T>
class Vec: public std::vector<T> {
public:
    using vector<T>::vector;
    T&operator[](int i) {
        return vector<T>::at(i);
    }

    const T&operator[](int i) const {
        return vector<T>::at(i);
    }
};

template <typename T>
void Vector<T>::push_back(T &&t) {
    if (capacity() < size() + 1)
        reverse(size()==0? 8: 2*size());
    new(space)T{};
    ++space;
}

void print_book(const vector<Entry>& book) {
    for (const auto& x : book) {
//        cout << x.getName() << '\n';
    }
}