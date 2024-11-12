#include <iostream>
#include "caesar.cpp" 
#include "rowsAndCols.cpp"

using namespace std;


int main() {
    GeneralizedCaesarCipher cipher;

    cout << "Enter the key for Caesar cipher: " << endl;
    int key;
    cin >> key;
    string word;
    cout << "Enter a word to encrypt: " << endl;
    cin >> word;
    int column; 
    cout << "Enter the matrix size: " << endl;
    cin >> column;
    int row = (word.length() + column - 1) / column;
    MatrixCipher prog(row, column);

    string encryptedWord = cipher.encrypt(word,key);
    cout << "Encrypted word (Cipher): " << encryptedWord << endl;

    string doubleEncryptedWord = prog.encrypt(encryptedWord);
    cout << "Double Encrypted word (Program): " << doubleEncryptedWord << endl;

    string decryptedWord = prog.decrypt(doubleEncryptedWord);
    cout << "Decrypted word (Program): " << decryptedWord << endl;

    string finalDecryptedWord = cipher.decrypt(decryptedWord, key);
    cout << "Finally Decrypted word (Cipher): " << finalDecryptedWord << endl;

    return 0;
}
