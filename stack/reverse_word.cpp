#include <iostream>
#include <stack>

std::string reverseString(std::string word);

int main() {
    std::string word = "irineu";
    std::cout << reverseString(word) << '\n';
    return 0;
}

std::string reverseString(std::string word) {
    std::stack<char> s;
    std::string reversed;

    for (int i = word.length(); i >= 0; i--) {
        s.push(word[i]);
        char last_in = s.top();
        reversed += last_in;
        // reversed += word[i];
    }

    return reversed;
}