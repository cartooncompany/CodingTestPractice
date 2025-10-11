#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string vowels = "aeiou";
    string result = "";
    
    for (char ch : my_string) {
        if (vowels.find(ch) == string::npos) {
            result += ch;
        }
    }
    
    return result;
}