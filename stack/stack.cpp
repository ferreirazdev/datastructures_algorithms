#include <iostream>
#include <stack>

// Stack is a linear data structure that follows the LIFO principle
// the last element inserted inside the stack will be removed first

// using namespace std;

int main () {
    std::stack<int> s;

    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);
    std::cout << s.top() << '\n';

    s.pop();
    std::cout << s.top() << '\n';

    s.push(412);
    std::cout << s.top() << '\n';

    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }

}
