#include "text_utility.h"
#include <iostream>
using namespace std;

int main () {
    if(isPalindrom("hello")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    if(isPalindrom("helloolleh")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    char str [1000] = "goOd MorniNG";
    Uppercase(str);
    cout <<str<<endl;

    char str2 [1000] = "goOd MorniNG";
    Lowercase(str2);
    cout <<str2<<endl;

    int count = substringoccur("AUCgoAUCnoAUCyes AUC", "AU");
    cout<<count<<endl;

    countVowelsAndConsonants("Fundamentals of computing");

    char str3 [1000] = "Malak";
    reverseString(str3);
    cout<<str3<<endl;

    int count2 = countW("You're gonna carry that weight.");
    cout<<count2<<endl;

    int count3 = countCharacters("You're gonna carry that weight.");
    cout<<count3<<endl;
}