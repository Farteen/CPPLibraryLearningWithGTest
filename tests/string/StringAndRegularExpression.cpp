//
// Created by yysz02 on 2018/12/5.
//

#include <gtest/gtest.h>
#include <iostream>
#include <string>

using namespace std;

TEST(stl_string_2, stl_string_2_operations) {
    string demo = "123";
    string demo_swap = "321";
    demo.swap(demo_swap);
    cout << demo << endl;
}


TEST(stl_string_2, stl_string_2) {
    std::cout << std::endl;
    const string delmis(" \t,.;");
    string line;
    int result = stoi(line);
    string test_str = "pots & pans";
//    while (getline(cin, line)) {
        line = test_str;
        string::size_type begIdx, endIdx;
        begIdx = line.find_first_not_of(delmis);

        while (begIdx != string::npos) {
            endIdx = line.find_first_of(delmis, begIdx);
            if (endIdx == string::npos) {
                endIdx = line.length();
            }

            for (int i = endIdx - 1; i >= static_cast<int>(begIdx); --i) {
                cout << line[i];
            }
            cout << " ";

            begIdx = line.find_first_not_of(delmis, endIdx);
        }
        cout << endl;
//    }
}

TEST(standard_library, standard_library) {
    string filename, basename, extname, tmpname;
    const string suffix("tmp");

    char* argv[] = {"a.mp3", "b.mp4", "c.wav"};

    for (int i = 0; i < 4; ++i) {
        filename = argv[i];

        string::size_type idx = filename.find('.');
        if (idx == string::npos) {
            tmpname = filename + '.' + suffix;
        } else {
            basename = filename.substr(0, idx);
            extname = filename.substr(idx + 1);
            if (extname.empty()) {
                tmpname = filename;
                tmpname += suffix;
            }
            else if (extname == suffix) {
                tmpname = filename;
                tmpname.replace(idx + 1, extname.size(), "xxx");
            }
            else {
                tmpname = filename;
                tmpname.replace(idx + 1, string::npos, suffix);
            }
        }
        cout << filename << " => " << tmpname << endl;
    }
}


//string incantation;
//void respond(const string& answer) {
//    if (answer == incantation) {
//
//    }
//    else if(answer == "yes") {
//
//    }
//}

string name = "Niels Stroustrup";

void m3() {
    string s = name.substr(6, 10);
    cout << s << endl;
    name.replace(0, 5, "nicholas");
    cout << name << endl;
    name[0] = toupper(name[0]);
    cout << name << endl;
}

TEST(test_name, test_name) {
    m3();
}

string compose(const string& name, const string& domain) {
    return name + '@' + domain;
}


TEST(test_string, test_string) {
    auto addr = compose("mdr", "bell-labs.com");
    cout << addr << endl;
}

