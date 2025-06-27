#include "text_utility.h"
#include <iostream>
using namespace std;

int main () {
    cout<<"Is the word (hello) a palindrome?"<<endl;

    if(isPalindrom("hello")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    cout<<endl<<"Is the word (helloolleh) a palindrome?"<<endl;

    if(isPalindrom("helloolleh")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    cout<<endl<<"Changing all characters of (goOd MorniNG) to uppercase"<<endl;
    char str [] = "goOd MorniNG";
    Uppercase(str);
    cout <<str<<endl;

    cout<<endl<<"Changing all characters of (goOd MorniNG) to lowercase"<<endl;
    char str2 [] = "goOd MorniNG";
    Lowercase(str2);
    cout <<str2<<endl;

    cout<<endl<<"Counting the occurence of the substring (AU) in (AUCgoAUCnoAUCyes AUC)."<<endl;

    int count = substringoccur("AUCgoAUCnoAUCyes AUC", "AU");
    cout<<"Number of occurence: "<<count<<endl;

    cout<<endl<<"Counting the vowels and the consonants in (Fundamentals of computing): "<<endl;

    countVowelsAndConsonants("Fundamentals of computing");

    cout<<endl<<"Testing reverse string func on (Malak):"<<endl;

    char str3 [] = "Malak";
    reverseString(str3);
    cout<<str3<<endl;

    cout<<endl<<"Counting the words in (Life is beautiful)."<<endl;
    int count2 = countW("Life is beautiful.");
    cout<<"Number of words: "<<count2<<endl;

    cout<<endl<<"Counting the characters in (Life is beautiful):"<<endl;

    int count3 = countCharacters("Life is beautiful.");
    cout<<"Number of characters: "<<count3<<endl;
}