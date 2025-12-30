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




#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int result = linearSearch(a, n, key);

    cout << result;
    return 0;
}