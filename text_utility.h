//This is the header file, where we declare functions that to some string manipulation.
bool isPalindrom (const char* s);
void Uppercase (char* s);
void Lowercase (char* s);
int substringoccur (const char* s, const char* f);
int countCharacters(const char* str);
void countVowelsAndConsonants(const char* str);
void reverseString(char* str);
int countW(const char* str);
void vigenereEncrypt(const char* plaintext, const char* keyword, char* result);
void vigenereDecrypt(const char* ciphertext, const char* keyword, char* result);