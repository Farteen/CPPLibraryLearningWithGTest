//
// Created by yysz02 on 2018/12/5.
//

#include <gtest/gtest.h>
#include <iostream>
#include <string>

TEST(cpp_ref_string, cpp_ref_string_at) {
    std::string s("message");

    s = "abc";
    s.at(2);
    std::cout << s << "\n";

    std::cout << "string size = " << s.size() << "\n";
    std::cout << "string capacity = " << s.capacity() << "\n";

    s.at(1) = 'Z';
    std::cout << s << std::endl;
    try {
        s.at(3) = 'X';
    }
    catch (std::out_of_range const& exc) {
        std::cout << exc.what() << "\n";
    }
}

TEST(cpp_ref_string, cpp_ref_string_operator_bracket) {
    std::string const e("examplar");

    for (unsigned i = e.length() - 1; i != 0 ; i /= 2) {
        std::cout << e[i];
    }

    std::cout << "\n";

    const char* c = &e[0];
    std::cout << c << '\n';
    std::string s("examplar");
    s[s.size() - 1] = 'y';
    std::cout << s << '\n';
}

TEST(cpp_ref_string, cpp_ref_string_front) {
    std::cout << std::endl;
    std::string s("examplary");
    char& f = s.front();
    f = 'E';
    std::cout << s << std::endl;

    std::string const c("exmaplary");
    char const& f2 = c.front();
    char const *f3 = &f2;
    std::cout << "f2 is: " << f2 << '\n';
    std::cout << "&f2 is: " << &f2 << '\n';
    std::cout << "c.front() is:" << &(c.front()) << '\n';
    std::cout << "f3 is: " << f3 << '\n';
}

TEST(cpp_ref_string, cpp_ref_string_back) {
    {
    std::cout << std::endl;
    std::string s("Exemplary");

    char& back = s.back();
    back = 's';
    std::cout << s << std::endl;
    }

    {
    std::string const c("Exemplary");
    char const& back = c.back();
    std::cout << back << '\n';
    }
}

TEST(cpp_ref_string, cpp_ref_string_find_first_not_of) {
    std::cout << std::endl;
    std::string to_search = "some data with %MACROS to substitute";

    std::cout << "Before: " << to_search << std::endl;
    auto pos = std::string::npos;

    while ((pos = to_search.find('%')) != std::string::npos) {
        std::cout << pos << std::endl;
        const auto after = to_search.find_first_not_of(
                "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
                pos + 1);
        std::cout << after << std::endl;
        if (after != std::string::npos) {
            to_search.replace(pos, after - pos, "some very nice macros");
        }
    }

    std::cout << "After: " << to_search << '\n';


}