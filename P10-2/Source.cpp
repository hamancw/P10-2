#include <iostream>
#include <string>

using namespace std;

int count_letters(string str) {
    int count = 0;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }
    return count;
}

int count_words(string str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        }
        else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int letters = count_letters(input);
    int words = count_words(input);

    cout << "Number of letters: " << letters << endl;
    cout << "Number of words: " << words << endl;
}
