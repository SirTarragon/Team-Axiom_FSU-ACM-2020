# 2 Candy Wars
You and your friend just got back from a night of trick or treating. But now it’s time to get
down to business: Who got the best candy? Rather than simply count up how much candy each
of you have, you and your friend agree that certain candies are better than others. Specifically,
you both agree that Chocolate candy are better than Gummy candy, and Gummy candy are
better than Peanuts.

You both come to the agreement that 2 Peanut candies are equal to a Gummy candy, and
2 Gummy candy are equal to a Chocolate candy. In addition, you both agree that the size
of the candy is important in determining who got the better selection. You both come to the
agreement that 2 Small candies are equal to 1 Medium candy, and 2 Medium candies are equal
to 1 Large candy. Since you have background in coding, you decide to create a program that
can calculate who got the better selection of candy, based on amount, type, and size of the candy.
Hint: In order to calculate a ’value’ for each candy based on type and size, going up in size
should double the value of the candy, and going up in rank for type of candy should double the
value.

Example: 1 Large Chocolate candy = 2 Medium Chocolates OR 2 Large Gummy candy (since 1
Large = 2 Mediums, and 1 Chocolate = 2 Gummy candy) 

Another example: 2 Gummy Mediums
= 1 Gummy Large OR 1 Chocolate Medium.

# 2.1 Input
The first line of input will be a single integer N representing the N number of candies belonging
to person 1. This will then be followed by N lines of input in the following format:

"A""single white-space""B"

Where A represents the candy type and B represents the size of the candy. the candy and sizes
are represented in the following table:

A Candy
C Chocolate
G Gummy
P Peanuts
B Size
L Large
M Medium
S Small

An input line of “C M”, would refer to a Chocolate candy that has Medium size.
After N lines, there will be a line with a single integer M representing the M number of candies
belonging to person 2. These M lines will be formatted the same mentioned above.

# 2.2 Output
The output will be a single integer either ’1’ or ’2’, representing person 1 and person 2 respectively, and whom has the most valuable total of candy.
Unless a tie occurs, in which case you will output “tie”.
Sample Input and Output are on the next page.
1

# 2.3 Sample Input/Output
Sample Input 1 Sample output 1
2 2
G S
P M
2
P S
G M
Sample input 2 Sample Output 2
4 tie
C S
P L
P M
G L
2
C L
G S
2
