////
//// Created by yysz02 on 2018/12/5.
////
//
//#include <iostream>
//#include <gtest/gtest.h>
//
//
//using namespace std;
//
//void f() {
//
//}
//
//template <typename T>
//void g(T x) {
//    cout << x << "\n";
//}
//
//template <typename T, typename... Tail>
//void f(T head, Tail... tail) {
//    g(head);
//    f(tail...);
//}
//
//using ft_size_t = unsigned int;
//
//template <typename T>
//class Vector {
//public:
//    using value_type = T;
//
//};
//
//template <typename C>
//using Element_type = typename C::value_type;
//
//template <typename Container>
//void algo(Container& c) {
//    Vector<Element_type<Container>> vec;
//}
//
//template <typename Key, typename Value>
//class Map {
//
//};
//
//TEST(test_variadic_template, test) {
//    cout << "first:";
//    f(1, 2.2, "hello");
//
//    cout << "second:";
//    f(0.2, 'c', "yuck!", 0, 1, 2);
//    cout << "\n";
//}