#include <iostream>

using namespace std;

int count = 0;

int func(int i) {
     if (i <= 4) {
        if (count == 20) {
            return 0;
        }
        count++;
    } 
    if (i % 2 == 1) {
        int d = (i * 3) + 1;
        cout << i << " -> " << d << "\n";
        return func(d);
    } else {
       int e = i / 2;
       cout << i << " -> " << e << "\n";
       return func(e);
    }

}

int main() {
    cout << "\nEnter an integer: ";
    int i;
    cin >> i;
    if (i > 0){
       int d = func(i);
       if (d == 0) {
         cout << "stopped...";
       } else {
         cout << d;
       }
       cout << "\n";
    } else {
       cout << "Enter only positive number..";
    }
    main();
}
