#include "text_utility.h"
#include <iostream>
using namespace std;

int main () {
    cout<<"Is the word hello a palindrome?"<<endl;

    if(isPalindrom("hello")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    cout<<"Is the word helloolleh a palindrome?"<<endl;

    if(isPalindrom("helloolleh")) cout<<"It is a palindrome."<<endl;
    else cout<<"It is not a palindrome."<<endl;

    cout<<"In the follwing two funcs, we change all characters of the sentence"<<endl<<" goOd MorniNG to uppercase then to lowercase."<<endl;
    char str [1000] = "goOd MorniNG";
    Uppercase(str);
    cout <<str<<endl;

    char str2 [1000] = "goOd MorniNG";
    Lowercase(str2);
    cout <<str2<<endl;

    cout<<"An example for the substring occurence counter."<<endl<<"We count the occurence of the substring AU in the sentence AUC."<<endl;

    int count = substringoccur("AUCgoAUCnoAUCyes AUC", "AU");
    cout<<count<<endl;

    cout<<"Counting the vowels and the consonants in the string Fundamentals of computing: "<<endl;

    countVowelsAndConsonants("Fundamentals of computing");

    cout<<"Testing reverse string func with string Malak:"<<endl;

    char str3 [1000] = "Malak";
    reverseString(str3);
    cout<<str3<<endl;

    cout<<"Counting the words in the sentece: You're gonna carry that weight."<<endl;
    int count2 = countW("You're gonna carry that weight.");
    cout<<"Number of words: "<<count2<<endl;

    cout<<"Counting the characters in the previous sentence:"<<endl;

    int count3 = countCharacters("You're gonna carry that weight.");
    cout<<"Number of characters: "<<count3<<endl;
}