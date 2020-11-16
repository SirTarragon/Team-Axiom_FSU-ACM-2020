# NOTICE - I'll attempt to at least finish this problem even though the contest is over.

#3 Imposter Palindromes
Bob and Hannah love palindromes. They love palindromes so much that they wrote a whole
book of palindromes called Emu Love Volume. However, right before publishing the book, they
noticed that they typed up a few of their palindromes incorrectly.
For each mistyped palindrome, there is exactly 1 extra letter that was accidentally included
somewhere among the palindrome, thus making it no longer a palindrome.
Bob and Hannah have hired you to write a program that fixes the incorrectly written palindromes by locating the extra letter, removing it, and then returning the fixed palindrome.

#3.1 Input
The input is a single line which has a string. The string may be a single word or several, and if
it contains multiple words each will be separated a single white-space.
In the string there will be a single extra character that prevents it from being a palindrome.

#3.2 Output
Your output will be the input string with the extra character removed.
Note that when removing the extra character, you are not replacing it with anything, i.e. do
not replace with a single white-space, or any other character. The remaining characters in the
string should remain the same, i.e. keep the spacing and Capitalization the same.
In the sample input 1 below, the extra character is the ’k’ in plank.

#3.3 Sample Input/Output
Sample Input 1 
A man a plank a canal Panama

Sample output 1
A man a plan a canal Panama

Sample input 2
Bracecar

Sample Output 2
racecar
