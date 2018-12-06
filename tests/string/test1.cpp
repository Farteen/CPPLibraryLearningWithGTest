////
//// Created by yysz02 on 2018/12/4.
////
//
//#include <gtest/gtest.h>
//#include <vector>
//#include <thread>
//#include <exception>
//#include <stdexcept>
//#include <string>
//#include <list>
//
//using namespace std;
//
//struct InvalidIndexException : public std::exception {
//    const char* what() const throw() {
//        return "Invalid Index Exception";
//    }
//};
//
//template <typename T>
//class Vector {
//private:
//    T* elem;
//    int sz;
//public:
//    explicit Vector(int s);
//    ~Vector() { delete[] elem; }
//    T&operator[](int i);
//    const T&operator[](int i) const;
//    int size() const { return sz; }
//};
//
//template <typename T>
//Vector<T>::Vector(int s) {
//    if (s < 0) {
//        throw InvalidIndexException();
//    }
//    elem = new T[s];
//    sz = s;
//}
//
//template <typename T>
//const T& Vector<T>::operator[](int i) const {
//    if (i < 0 || size() <= i) {
//        throw std::out_of_range{"vector out of range"};
//    }
//    return elem[i];
//}
//
//template <typename T>
//T* begin(Vector<T>&x) {
//    return x.size() ? &x[0] : nullptr;
//}
//
//template <typename T, int N>
//struct Buffer {
//    using value_type = T;
//    constexpr int size() { return N; }
////    T[N];
//};
//
//template <typename T>
//T* end(Vector<T>&x) {
//    return begin(x) + x.size();
//}
//
//template <typename Container, typename Value>
//Value sum(const Container& c, Value v) {
//    for (auto x : c) {
//        v += x;
//    }
//    return v;
//}
//
//template <typename T>
//class Less_than {
//        const T val;
//public:
//        Less_than(const T& v): val(v) {}
//        bool operator()(const T& x) const {
//            return x < val;
//        }
//    };
//
//Less_than<int> Iti(42);
//Less_than<std::string> Its("Backus");
//
//
//template <typename C, typename P>
//int count(const C& c, P pred) {
//    int cnt = 0;
//    for(const auto& x : c) {
//        if (pred(x)) {
//            ++cnt;
//        }
//    }
//    return cnt;
//}
//
//void f(const Vector<int>& vec, const list<std::string>& lst, int x, const std::string& s) {
//    cout << "number of values less than" << x
//    <<": " << count(vec, Less_than<int>{x})
//    << "\n";
//}
//
//void f_lambda(const Vector<int>& vec, const list<std::string>& lst, int x, const std::string& s) {
//    count(vec, [&](int a) { return a < x; });
//}
//
//void fct(int i, const std::string& s) {
//    bool b1 = Iti(i);
//    bool b2 = Its(s);
//
//}
//
//
//template<typename C, typename Oper>
//void for_all(C& c, Oper op) {
//    for (auto& x : c) {
//        op(*x);
//    }
//}
//
////void user() {
////    std::vector<unique_ptr<std::string>> v;
////    while (cin) {
////        v.push_back(read_shape(cin));
////    }
////    for_all(v,[](Shape& s) { s.draw(); });
////    for_all(v,[](Shape& s) { s.rotate(); });
////}
//
//
//TEST(TestDemo, TestDemo) {
//
////    Vector<char> vc(200);
////    Vector<string> vs(17);
////    Vector<list<int>> vli(45);
////
////    for(auto v: vc) {
////
////    }
////    auto v = new std::vector<int>();
////    v->push_back(1);
////    v->push_back(2);
////    for (auto value : *v) {
////        cout << value << endl;
////    }
////    cout << v << endl;
//}
//
