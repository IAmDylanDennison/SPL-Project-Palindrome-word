//Dylan Dennison SPL C++ palindrome program 
//using object oriented programming

//For comparison points between the languages please read the readme file in the repository.

#include <iostream>
#include <string>

using std::string; using std::cin; using std::cout; using std::endl;

class Palindrome { //creating a type or class named Palindrome. 
public:
	Palindrome(string word) : word_(word) {} //takes string into the objects parameters
											 // so it needs a constructor to set that string to its private var word_
	bool checkWord() {  // funciton that checks the string to see if it is Palindrome or not and returns a boolean 

		int front = 0;  //front and back are used for indexing of the string
		int back = word_.length() - 1; //Front will be the char from the front of the string and back being the last char in the string

		while (front != word_.length()) { //loop that will iterate through the whole string 
			if (word_[front] != word_[back]) //if a difference is found at the indexes it will return a false boolean 
				return false;	

			front++; //after each loop the the front index will move one element closer to the end of the string
			back--;  // after each loop the the back index will move one element closer to the beginning of the string
		}
		return true; // if the condition in the while loop did not return false it will be default return true
	}

private:
	string word_; //private var that is a string. not needed but good for modularization purposes
};

int main() {
	string word;
	cout << "Welcome to Dylan's Palindrome program!" << endl << endl;
	cout << "Please input a word(all lower case) to be checked: ";           //asking for users input 
	cin >> word;
	cout << endl;
	
	Palindrome palindromeWord(word);     //creates an object from the Palindrome class and puts the user inputted string into the parameter 

	if (palindromeWord.checkWord())  //the class funciton checkWord will return a boolean values. if true the word is Palindrome
		cout << "The word is Palindrome!" << endl;
	else 
		cout << "The word is NOT Palindrome!" << endl; //if the checkword funciton returns false it will return false so it would print the word is NOT Palindrome
}
