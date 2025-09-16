#include <iostream>
#include<stack>
using namespace std;

void DecimalToBinary(int decimal){
    stack<int> S;

    while(decimal!=0){
        int r = decimal%2;
        S.push(r);
        decimal = decimal/2;

         if (S.empty()) {
        cout << "0";
    }

    
    while (!S.empty()) {
        cout << S.top();
        S.pop();
    }

     cout << endl; 
  }
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary representation: ";
    DecimalToBinary(num);

    return 0;



    
}
