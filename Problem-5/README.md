Q5-Holiday Rush.md 11/14/2020
1 / 2
Question 5: Holiday Rush
Description
Each holiday season you travel back home and help by working in your family’s restaurant. This holiday you
think you can make a permanent change to the restaurant that should help all year long. By using the skills
you’ve learned at school and the knowledge you have about food service you plan to make an order
scheduler. Hopefully this will be enough to convince them that you don’t need to help during the holiday rush
anymore.
To schedule things correctly you know you’ll need a couple pieces of information. Each ticket should include
the time of the order, the number of appetizers, main dishes, and desserts ordered per table, and the table
number. Then, using what you’ve learned in school you should be able to tell the kitchen the best order for
dishes to go out to the tables. From experience you know that dishes should be timed such that appetizers
are first out, then main dishes, and finally the desserts. The timing for these should each be based on the
relative intervals of 10 minutes for appetizers, 15 minutes for main dishes, and 10 mins for dessert. Where
each time is based on when the table had their order taken or from when they last had a dish brought to
them. Also, you know that all appetizers, main dishes, and desserts for a table must go out together.
Input Description
To test your program you will be giving it a set number of orders with their time stamps, table numbers, and
the dishes ordered. To make things simpler you format this information such that the first line tells you how
many orders you will be handling. Then each following line starts with a time stamp in the 00:00 AM/PM
format, table number, number of appetizers, number of main dishes, and number of desserts all space
separated and followed by a newline character ( '\n').
Output Description
To make sure that you can track multiple orders at once you need to verify that you can tell the kitchen the
time for each order to go out, the table it goes to, the type of dish(es), the number of them. To do this you will
list the time for each outgoing order, the table number, the number of dishes, and dish type. Multiple
outgoing orders will be listed in order of table number and comma separated. All spaces are a single space
character ' ' and there will be one time slot per line of output.
Input Example
4
12:15 PM 1 1 3 2
09:00 AM 13 3 3 0
09:15 AM 13 1 0 0
12:00 PM 4 0 5 4
Q5-Holiday Rush.md 11/14/2020
2 / 2
Output example
09:10 AM Table 13: 3 app
09:25 AM Table 13: 1 app 3 main
12:15 PM Table 4: 5 main
12:25 PM Table 1: 1 app, Table 4: 4 dessert
12:40 PM Table 1: 3 main
12:50 PM Table 1: 2 dessert
