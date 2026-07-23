#include<bits/stdc++.h>
Includes almost all standard libraries at once.
Useful in competitive programming.
Not recommended for production (due to compile-time overhead).

Time complexity(best worst avg)
map (logn,logn,logn)
vs
unordered map (1,n,1)
so at an average unordered_map > map

Time complexity{best worst avg}
selection (select min) {n2,n2,n2}
buble (swap pair) {n,n2,n2} [if no swap in a iteration = full sorted = break => better than insertion after this filter]
insertion (feels like inserting but is better bubble ){n,n2,n2}
Merge (weird but good) {nlogn,nlogn,nlogn}
quick (weird but quite good) {nlogn,nlogn,nlogn}

