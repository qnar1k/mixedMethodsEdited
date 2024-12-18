#include <iostream>
#include <string>
using namespace std;

class GeneralizedCaesarCipher {
public:
    string encrypt(const string& text, int shift) {
        string encryptedText;
        for (char c : text) {
            char shifted = static_cast<char>((static_cast<unsigned char>(c) + shift) % 256);
            encryptedText += shifted;
        }
        return encryptedText;
    }

    string decrypt(const string& text, int shift) {
        string decryptedText;
        for (char c : text) {
            char shifted = static_cast<char>((static_cast<unsigned char>(c) - shift + 256) % 256);
            decryptedText += shifted;
        }
        return decryptedText;
    }
};
