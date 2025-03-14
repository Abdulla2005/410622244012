#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

   
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]); 
        
        bool isVowel = false;
        char vowelSet[] = {'a', 'e', 'i', 'o', 'u'};
        for (int j = 0; j < 5; j++) {
            if (ch == vowelSet[j]) {
                isVowel = true;
                break;
            }
        }
        
        if (isVowel) {
            vowels++;
        } else if (isalpha(ch)) { 
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

