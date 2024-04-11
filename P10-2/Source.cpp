#include <iostream>
#include <string>

using namespace std;

int count_letters(string str) {
    int lower_count = 0;
    int upper_count = 0;

    for (char c : str) {
        if (islower(c)) {
            lower_count++;
        }
        else if (isupper(c)) {
            upper_count++;
        }
    }

    cout << "Lowercase letters: " << lower_count << endl;
    cout << "Uppercase letters: " << upper_count << endl;

    return lower_count + upper_count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int total_count = count_letters(input);

    cout << "Total number of letters: " << total_count << endl;
}