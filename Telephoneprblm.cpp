#include <iostream>
#include <string>
using namespace std;

class telephone {
    private:
        string num; 
    public:
        void getinfo() {
            cin >> num;
        }
        void check() {
            if (num.length() == 10) {
                cout << "Valid" << endl;
            } else {
                cout << "Not valid" << endl;
            }
        }
};

int main() {
    telephone n;
    n.getinfo();
    n.check();
    return 0; 
}

