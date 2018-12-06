#include <iostream>
#include <vector>
#include <string>
#include <sstream>

template <typename T>
T add_template(T a, T b) {
    return a + b;
}

using namespace std;

vector<int> read_ints(istream& is) {
    vector<int> res;
    int i;
    while (is>>i) {
        res.push_back(i);
    }
    return res;
}

struct Entry {
    string name;
    int number;
};

ostream& operator<<(ostream& os, const Entry& e) {
    return os << "{\"" << e.name <<"\"," << e.number << "}";
}

enum class JsonTag {
    JSON_Number = 0,
    JSON_String,
    JSON_Array,
    JSON_Object,
    JSON_True,
    JSON_False,
    JSON_NULL = 0xF
};

#include <fstream>

template <typename Target=string, typename Source=string>
Target to(Source arg) {
    stringstream interpreter;
    Target result;

    if (!(interpreter << arg)
    || !(interpreter >> result)
    || !(interpreter >> std::ws).eof())
        throw runtime_error("to<>() failed");
    return result;
}

int main() {

    vector<int> v = {1, 2};
    for (auto& i : v) {
        cout << i << endl;
    }
//    auto x1 = to<string, double>(1.2);
//    cout << x1 << endl;

//    string face = "1";
//    cout << face.size() << endl;
//    ofstream ofs("target");
//    if (!ofs) {
//        cerr << "could't open 'target' for writing" << endl;
//    }
//    fstream ifs;
//    if (!ifs) {
//        cerr << "could't open 'source' for reading" << endl;
//    }


//    while(cin) {
//        for (int i;cin>>i;) {
//
//        }
//
//        if (cin.eof()) {
//
//        }
//        else if(cin.fail()) {
//            cin.clear();
//
//            char ch;
//            if (cin>>ch) {
//                switch (ch) {
//                    case '{':
//                        break;
//                    case '}':
//                        break;
//                    default:
//                        cin.setstate(ios_base::failbit);
//                        break;
//                }
//            }
//        }
//    }
//    const istream is();
//    vector<int> result = read_ints(&is);
//    std::cout << "Hello, World!" << std::endl;
//    int int_result = add_template(1, 2);
//    double double_result = add_template(1.0, 2.0);
//    std::cout << int_result << std::endl;
//    std::cout << double_result << std::endl;
    return 0;
}