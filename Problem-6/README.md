# NOTICE - I'll attempt to at least finish this problem even though the contest is over.

6 Burns So Good
Timothy “Sauceboss” von Fyre knows how to make one thing: hot sauce. His creations are regionally recognized as being the finest around, with one customer remarking of his newest sauce
“It’s like tangoing with Hades in an ironworks”. Every day a hoard of intestinally compromised
consumers arrives at his store, ready to purchase more of their cherished condiments.
Sauceboss has implemented a queue system to manage the crowd. Each patron receives a ticket
displaying two numbers and their first name. Sauceboss, while designing his queue system, had
a moment of hot sauce induced mental clarity. He decided that to figure out one’s place in line,
one must first take the two numbers on the ticket, say, n and k, and compute their binomial
coefficient. This is computed by: n!
k!(n−k)!
Once calculated, a customer’s precedence in the queue corresponds to a numerical ordering of
the calculated binomial coefficients in which the lower its value on the real number line the closer
a person is to the front of the queue. In a situation where two tickets have the same binomial coefficient, they are compared lexicographically by the individuals’ names where a < b < c < ... < z
Tim has one other passion in life: drawing binary trees. His wild fanbase has hired you to
write a program which will print the customer queue at a given point in time as a binary tree.
In other words, a queue of seven people: 1, 2, 3, 4, 5, 6, 7 has a binary tree representation of:
1
2 3
4 5 6 7
Assumptions:
2 ≤ n ≤ 50, for all inputs of n; n will always be an integer
1 ≤ k ≤ 49 for all inputs of k; k will always be an integer
n > k for each line of input
All individuals in the queue have a unique name.
The input size will always be 2y − 1 where y ≥ 2 for any value of y
6.1 Input
X lines of input in the format of: < n ><single space>< k ><single space><name>
6.2 Output
The name of the customers in the queue, represented as a left-justified binary tree.
6.3 Sample Input/Output
Sample Input Sample output
39 34 Ashton Otto
24 21 King Mohammed Lucian
13 12 Lucian King Ashton Aryan Camron
2 1 Otto
5 1 Mohammed
36 24 Aryan
41 30 Camron
1
