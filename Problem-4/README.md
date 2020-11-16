# 4 Imposter Calculator

The smartest monster in the world, Frank Einstein, loves to play Among Us (a murder mystery
game where a number of crewmate players are to identify the imposter players among them that
are out for blood). The only problem is, Frank keeps getting accused of being an imposter for
stalking the other players while trying to find the real imposters.
He has simply had enough and has decided that he needs an Imposter Calculator to find imposters more efficiently. This calculator would be able to tell when an imposter “vents” or jumps
the game map, which is something that only imposters can do.
This means that whenever a player goes into a room, but comes out of a different room, they
have “vented.” Frank proposes that if we build this calculator for him, he may just let us help
him with his top-secret research project. We better get started!

# 4.1 Input
The first line of input will be two integers N and M separated by a single white-space. N represents the number of players and M represents the number of lines of input to follow.
The next M lines of input will be in the following format:

<player color><single white-space><room name><single white-space><I or O>
  
If a player enters a room, then it will be represented as an ’I’, if they left a room, then it will be
represented as an ’O’. There will only be a single imposter, no more than 10 players, up to 7 different rooms, and
up to 100 lines of input.
  
# 4.2 Output
The output should be two lines. One line with the player color that is the imposter followed by
one line with the number of times they “vented”, meaning they went into a room and came out
of a different room.
Note when printing out the player color, keep the entire string lowercase.
Sample Input and Output are on the next page.
1

# 4.3 Sample Input/Output

Sample Input 1
4 8
purple medbay I
purple medbay O
orange electrical I
orange security O
black electrical I
black electrical O
white admin I
white admin O

Sample output 1
orange
1

Sample input 2
4 10 
red electrical I
red electrical O
blue weapons I
green cafeteria I
yellow medbay I
green cafeteria O
yellow medbay O
blue shields O
blue admin I
blue cafeteria O

Sample Output 2
blue
2
