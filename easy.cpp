#include<iostream>
#include<sstream>
using namespace std;
int lengthOfLastWord(const string&s){
    int length=0;
    bool foundWord=false;
    //iterate through the string in reverse
    for(int i=s.length()-1;i>=0;i--){
        //check for non-space character
        if(s[i]!=' '){
            foundWord=true;
            ++length;
        }
        else{
            //if a word is found,break the loop
            if(foundWord){
                break;
            }
        }
    }
    return length;
}
int main(){
    string inputString;
    //Get input from the user
    cout<<"Enter a String: ";
    getline(cin, inputString);
    //call the function with user input
    int result=lengthOfLastWord(inputString);
    //Display the result
    cout<<"Length of the last word: "<<result<<endl;
    return 0;
}