#include <iostream>
#include <cstring>
#include <cctype> 

using namespace std;
int main() {
    char str[100];
    cin.getline(str, 100);
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    cout << "String in uppercase is " << str << endl;
    return 0;
}
