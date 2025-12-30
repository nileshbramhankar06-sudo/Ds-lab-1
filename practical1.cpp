// #1 sum program
#include <iostream.h>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int sum = a + b;
    cout << sum;
    return 0;
}



// for average case
#include <iostream.h>
using namespace std;

int main() {
    int n;
    cout << "enter any number";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        cout << i;
    }
    return 0;
}


// for best case
#include <iostream.h>
using namespace std;

int main() {
    int n;
    cout << "enter any no:";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << i << j;
        }
    }
}