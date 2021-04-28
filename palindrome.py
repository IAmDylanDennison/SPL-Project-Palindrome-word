#Dylan Dennison SPl python palindrome program
#Using procedural programming


print("Welcome to Dylan's Palindrome program")  
inputString = input("Please input a word(lower case) to be checked: ") #ask for string input

flag = True  #predicate for Palindrome decision 
front = 0   #front and back are used for indexing of the string
back = -1   #Front will be the char from the front of the string and back being the last char in the string
while front != inputString.__len__() :  #loop that will iterate through the whole string 
    if inputString[front] != inputString[back] :   #if a difference is found at the indexes it will set the boolean to false
        flag = False
    front += 1 # after each loop the the front index will move one element closer to the end of the string
    back -= 1  # after each loop the the back index will move one element closer to the beginning of the string

if flag == True:  # if the boolean is still true and doesnt get switched to false it means no difference were found
    print("The word is Palindrome!")
else:
    print("The word is NOT Palindrome") #else would mean flag does not equal true so there would be a difference in the while loop condition 



