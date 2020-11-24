#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char ch;
    int temp;
    vector<int> a;
    while(ss>>temp){
      a.push_back(temp);
      ss>>ch;
    }
    return a;
}

int main() {
    string str;
    std::cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
