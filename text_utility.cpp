#include "text_utility.h"
#include <iostream>
bool isPalindrom (const char* s)
{
    int length =countCharacters(s);   
    for (int left=0, right = length-1; left<right;left++,right--)
    {if (s[left] != s[right]) return false;}
    return true;
}

void Lowercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='A'&& s[i]<='Z') s[i]+=32;
}

void Uppercase (char* s)
{
    int length =countCharacters(s);   
    for (int i=0; i<length;i++) if (s[i]>='a'&& s[i]<='z') s[i]-=32;
}

int substringoccur (const char* s,const char* f)
{
   int length= countCharacters(s);
   int sublength= countCharacters(f);
   if(length==0||sublength==0) return 0;
   int countSub=0;
   for(int i=0; i<=length-sublength; i++)
   {
      bool isSub=true;
      for(int j=0; j<sublength; j++)
      {
         if(s[i+j]!=f[j]) {isSub=false;break;}
      }
      if(isSub) countSub++;
   }
   return countSub;
}

void countVowelsAndConsonants(const char* str) {
   int  countV = 0;
    int countC = 0;
    int length = countCharacters(str);

    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||
                ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||
                ch == 'u' || ch == 'U') {
                countV++;
                } else {
                    countC++;
                }
        }
    }

    std::cout << "the number of vowels :" << countV <<std::endl<< "the number of consonants :"<< countC << std::endl;  
}
int countCharacters(const char* str)
{
int count = 0;
while (str[count] != '\0'){

count++;

}


return count;
}

int countW(const char* str)
{
int count = 0;
    bool Word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\t') && !Word) {
            Word = true;
            count++;
        } else if (str[i] == ' ' || str[i] == '\t') {
            Word = false;
        }
    }

    return count;
}

void reverseString(char* arr) {
    int n = countCharacters(arr);
    int left = 0, right = n - 1;

    while (left < right) {

        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];

        left++;
        right--;
}
}

void vigenereEncrypt(const char* plaintext, const char* keyword, char* result) {
    int keyLen = 0;
    while (keyword[keyLen] != '\0') ++keyLen;
    int keyIndex = 0;
    int i = 0;
    char p;
    while ((p = plaintext[i]) != '\0') {
        if (p >= 'a' && p <= 'z') {
            int pVal = p - 'a';
            char k = keyword[keyIndex % keyLen];
            int kVal;
            if (k >= 'a' && k <= 'z') kVal = k - 'a';
            else if (k >= 'A' && k <= 'Z') kVal = k - 'A';
            else kVal = 0;
            result[i] = char((pVal + kVal) % 26 + 'a');
            ++keyIndex;
        } else if (p >= 'A' && p <= 'Z') {
            int pVal = p - 'A';
            char k = keyword[keyIndex % keyLen];
            int kVal;
            if (k >= 'a' && k <= 'z') kVal = k - 'a';
            else if (k >= 'A' && k <= 'Z') kVal = k - 'A';
            else kVal = 0;
            result[i] = char((pVal + kVal) % 26 + 'A');
            ++keyIndex;
        } else {
            result[i] = p;
        }
        ++i;
    }
    result[i] = '\0';
}

void vigenereDecrypt(const char* ciphertext, const char* keyword, char* result) {
    int keyLen = 0;
    while (keyword[keyLen] != '\0') ++keyLen;
    int keyIndex = 0;
    int i = 0;
    char c;
    while ((c = ciphertext[i]) != '\0') {
        if (c >= 'a' && c <= 'z') {
            int cVal = c - 'a';
            char k = keyword[keyIndex % keyLen];
            int kVal;
            if (k >= 'a' && k <= 'z') kVal = k - 'a';
            else if (k >= 'A' && k <= 'Z') kVal = k - 'A';
            else kVal = 0;
            result[i] = char((cVal - kVal + 26) % 26 + 'a');
            ++keyIndex;
        } else if (c >= 'A' && c <= 'Z') {
            int cVal = c - 'A';
            char k = keyword[keyIndex % keyLen];
            int kVal;
            if (k >= 'a' && k <= 'z') kVal = k - 'a';
            else if (k >= 'A' && k <= 'Z') kVal = k - 'A';
            else kVal = 0;
            result[i] = char((cVal - kVal + 26) % 26 + 'A');
            ++keyIndex;
        } else {
            result[i] = c;
        }
        ++i;
    }
    result[i] = '\0';
}
