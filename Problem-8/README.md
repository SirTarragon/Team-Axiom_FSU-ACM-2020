Q8-Turkey Activities.md 11/13/2020
1 / 2
Question 8: So Much Room for Turkey Activities
Description
At the turkey sanctuary, the turkey guardians wish to give the turkeys a lot of space. Recently, the turkey
guardians were gifted a new plot of land that the turkeys can use. The plot came with a fence already
installed. Fortunately, this fence forms a convex polygon (with vertices being the fence posts and edges being
the fence, and each of the connected pairs of fence posts being connected by a straight segment of fence).
Unfortunately, the donor did not tell the guardians how large the fenced in area is. The guardians care greatly
for their turkeys, and require that there is at least 5 units of area for each turkey in an enclosure, so they set
out to determine how many turkeys they can place in the new location.
Given the positions of each fence post, in clockwise order (so that adjacent pairs are connected, and the very
last fence post connects to the first fence post), find the maximum number of turkeys that can live inside the
fenced off area with sufficient space.
Input Description
The first line of input will be an integer 3 <= N <= 250, indicating the number of fence posts. The next N lines
will contain two integers -1000 <= X, Y <= 1000, indicating the x and y coordinates of the fence post. The
fence posts are listed in clockwise order around the fence, starting from an arbitrary point on the fence. The
very last fence post is connected to the first fence post.
It is guaranteed that the fence posts form a convex polygon and that no three fence posts are co-linear (all
falling on the same straight line).
Output Description
The output should be a single integer T representing the maximum number of turkeys that can be inside of
the fenced in area so that there are at least 5 units of area per turkey.
Input Example
6
3 3
3 -1
-1 -7
-5 -1
-5 3
-1 6
Output example
13
Q8-Turkey Activities.md 11/13/2020
2 / 2
Explanation
The fence posts form the region shown below (not necessarily drawn to scale):
which has area 68. Since we must have at least 5 units of area per turkey, we find 68/5 = 13.6, meaning at
most 13 turkeys can be present in the area.
