#include <iostream>
#include <stack>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    stack<int> s;  
    int num = decimal;

    
    while (num > 0) {
        int remainder = num % 8;
        s.push(remainder);
        num = num / 8;
    }

    cout << "Octal representation of " << decimal << " is: ";
    while (!s.empty()) {
        cout << s.top();   
        s.pop();          
    }
    cout << endl;

    return 0;
}
