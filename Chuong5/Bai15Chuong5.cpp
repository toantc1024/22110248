#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
void _to_bin(int num, vector<int> * out) {
    if (num / 2)
        _to_bin(num/2, out);
    out->push_back(num % 2);
}

void to_bin(int num, int numDigit) {
    vector<int> out;
    _to_bin(num, &out);
    for(int i = 0; i < numDigit - out.size(); ++i)
        cout << 0;
    for(int i = 0; i < out.size(); ++i)
        cout << out.at(i);
    cout << endl;
}

void to0101(int numDigit) {
    for(int fist_01_pos = 0; fist_01_pos < numDigit - 1; ++fist_01_pos) {
        int mask = 0;
        mask |= (1 << fist_01_pos);
        for(int second_01_pos = 2 + fist_01_pos; second_01_pos < numDigit - 1; ++second_01_pos) {
            int result = mask;
            result |= (1 << second_01_pos);
            to_bin(result, numDigit);
        }
    }

    for(int fist_01_pos = 0; fist_01_pos < numDigit - 1; ++fist_01_pos) {
        int mask = (int)pow(2,numDigit) - 1;
        mask ^= (2 << fist_01_pos);
        for(int second_01_pos = 2 + fist_01_pos; second_01_pos < numDigit - 1; ++second_01_pos) {
            int result = mask;
            result ^= (2 << second_01_pos);
            to_bin(result, numDigit);
        }
    }
}

int main() {
    to0101(5);
    return 0;
}
