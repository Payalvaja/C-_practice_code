 #include <iostream>
using namespace std;

int main() {
    int num[3]; // Array with 3 elements

    cout << "Enter three numbers: ";
    for (int i = 0; i < 3; i++) {
        cin >> num[i]; // Taking input in array
    }

    int max = num[0]; // Assume first as max
    int min = num[0]; // Assume first as min

    for (int i = 1; i < 3; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;

    return 0;
}
