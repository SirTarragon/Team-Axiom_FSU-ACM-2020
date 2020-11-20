Q10-Please Be Careful Wild Turkey.md 11/13/2020
1 / 3
Question 10: Please Be Careful Wild Turkey
Description
The turkey guardians care for all turkeys, not just those in their turkey sanctuary. They often observe turkeys in
their natural habitat to make sure they are safe.
Recently, the guardians have come across a new rafter of turkeys (bet you didn't know that was a word for a
group of turkeys) and found that their habitat seems quite dangerous.
The turkeys live in a gridded area that is surrounded on all sides by hot lava. At each time step, they move
between any of the valid adjacent grid points (up, down, left, or right) with a few constraints.
Unlike like the calm turkeys found in a turkey sanctuary, wild turkeys are quite fast and have a lot of
momentum. They are so fast that they cannot immediately begin moving in the opposite direction as the
direction they are headed. For example, if a turkey is heading left, to begin heading right they must first go up
or down for one time step. In other words, a turkey can never go left then right (or up then down, down then
up, etc.) in sequential steps.
There are many holes in the newly found habitat, and if a turkey falls in, they cannot get out (so if a turkey
falls in a hole, it remains in the same position for all subsequent time steps). Also, the turkeys can not leave
their habitat. If they touch the lava at the edges of the habitat, they get burned and quickly jump back a space
(away from the lava), but preserve their previous momentum. For example, if a turkey was heading left from
square (1, 1) it could have the following series of moves (1, 1) -> [hit the lava] (2, 1), (2, 2).
To clarify, upon hitting the left side of the grid (moving left from space (1, 1)), the turkey jumps back a
space (to (2, 1)) but maintains the leftward momentum, so moving left, up, or down are all valid but moving
right is not.
A turkey begins with upward momentum.
The benevolent guardians wish to determine the safety of the habitat. To do this, they wish to determine the
number of paths, out of all possible paths of length T that a turkey can take, do not involve the turkey falling
in a hole. Since the number of paths can be very large, report this value modulo 100000007.
Input Description
The input will be given as follows:
The first line will consist of four integers separated by spaces 2 < R <= 50, 2 < C <= 50 , 1 <= H <
R*C, 1 <= T <= 50, corresponding to the number of rows in the habitat, the number of columns in the
habitat, the number of holes, and the number of time steps to be observed, respectively. The next line will
contain two integers, 1 <= x <= R and 1 <= y <= C, corresponding to the starting location of a turkey. The
next H lines will contain two numbers, 1 <= x <= R and 1 <= y <= C corresponding to the location of a
hole.
The grid is oriented as such: the top left of the grid is position (1, 1), the bottom left is position (R, 1), the
top right is (1, C), and the bottom right is (R, C).
Q10-Please Be Careful Wild Turkey.md 11/13/2020
2 / 3
The grid is always at least 2 x 2 so there is always enough space for the turkey to be bounced back if it hits
the border. You can assume that all H holes are distinct, the starting position is not in a hole, and that the
turkeys start with upwards momentum.
Output Description
The output should contain a single integer, the number of paths where the turkey does not fall in a hole out
of all possible paths, modulo 100000007.
Input Example
5 6 2 3
3 3
3 4
4 3
Output example
16
Explanation
The habitat is a 5x6 grid with 2 holes at (3, 4) and (4, 3). The turkey starts at position (3, 3) with
upwards momentum and can move for at most 3 time steps. Here are all of the possible paths the turkey
could take (in no particular order):
1. (3, 3), (3, 2), (3, 1) <- hit the lava, (3, 2)
2. (3, 3), (3, 2), (3, 1), (2, 1)
3. (3, 3), (3, 2), (3, 1), (4, 1)
4. (3, 3), (3, 2), (2, 2), (1, 2)
5. (3, 3), (3, 2), (2, 2), (2, 1)
6. (3, 3), (3, 2), (2, 2), (2, 3)
7. (3, 3), (3, 2), (4, 2), (5, 2)
8. (3, 3), (3, 2), (4, 2), (4, 1)
9. (3, 3), (3, 2), (4, 2), (4, 3) <- fell in hole
10. (3, 3), (2, 3), (1, 3) <- hit the lava, (2, 3)
11. (3, 3), (2, 3), (1, 3), (1, 2)
12. (3, 3), (2, 3), (1, 3), (1, 4)
13. (3, 3), (2, 3), (2, 2), (2, 1)
14. (3, 3), (2, 3), (2, 2), (1, 2)
15. (3, 3), (2, 3), (2, 2), (3, 2)
16. (3, 3), (2, 3), (2, 4), (2, 5)
17. (3, 3), (2, 3), (2, 4), (1, 4)
18. (3, 3), (2, 3), (2, 4), (3, 4) <- fell in hole
19. (3, 3), (4, 3) <- fell in hole, (4, 3), (4, 3)
In path #10, the turkey moves left to (2, 3), then left again to (1, 3). At (1, 3), the turkey again moves
left, hits the lava, jumps back to (2, 3) and maintains its leftward momentum. In path #19, the turkey falls in
a hole after the first time step. The turkey is unable to leave the hole for the remainder of the time steps.
Q10-Please Be Careful Wild Turkey.md 11/13/2020
3 / 3
Out of the 19 possible paths, 3 involve the turkey falling in a hole (#9, #18, and #19). Thus, the correct answer
is 16.


The directional information in Q10 has a mistake. The example sub-path in the
first section should read:

=====================

 For example, if a turkey was heading up from square `(1, 1)` it could have the
following series of moves `(1, 1) -> [hit the lava] (2, 1), (2, 2)`. To clarify,
upon hitting the top of the grid (moving up from space `(1, 1)`), the turkey
jumps back a space (to `(2, 1)`) but maintains the upward momentum, so moving
left, right, or up are all valid but moving down is not.

=====================

In the explanation, the description of path #10 should read:

=====================

In path #10, the turkey moves up to `(2, 3)`, then again to `(1, 3)`. At `(1,
3)`, the turkey again moves up, hits the lava, jumps back to `(2, 3)` and
maintains its upward momentum.

=====================

The information about the grid endpoints (top left is `(1, 1)`, bottom left is
`(R, 1)`, etc.) is still correct.
