#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i < 100; i++) {
        int res3 = i / 3;
        int res5 = i / 5;

        if (i<=0 || i>=0 && res3*3 == i && res5*5 != i) {
            cout << "Fizz\n";


        }
        else if(i <= 0 || i >= 0 && res5 * 5 == i && res3*3 != i){
            cout << "Buzz\n";
        }
        else if (i <= 0 || i >= 0 && res5 * 5 == i && res3 * 3 == i) {
            cout << "FizzBuzz\n";

        }
        else {
            cout << i << endl;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
