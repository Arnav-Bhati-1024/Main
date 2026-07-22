"""Detailed explanation of key itertools tools.

The itertools module provides fast, memory-efficient iterator building blocks.
Unlike lists, these tools work lazily, producing values one at a time.

Core ideas:
1. product() -> Cartesian product of input iterables.
2. permutations() -> All possible orderings of a given length.
3. combinations() -> All possible subsets of a given length without repetition.
4. accumulate() -> Running cumulative results.
5. groupby() -> Groups consecutive items sharing the same key.
6. Infinite iterators -> count(), cycle(), repeat() generate values forever.

These examples are meant to help understand their behavior in practice.
"""

from itertools import product, permutations, combinations, accumulate, groupby, count, cycle, repeat

# ---------------------------------------------------------------------------
# 1) product()
# ---------------------------------------------------------------------------
# product(iter1, iter2, ...) returns the Cartesian product of the iterables.
# It is like nested loops.
#
# Example:
#   product(['a', 'b'], [1, 2]) -> ('a', 1), ('a', 2), ('b', 1), ('b', 2)
#
# Why it matters:
# - Useful when you want every combination of values from multiple collections.
# - It is often used in testing, combinatorics, and generating grids.

print("product() example:")
print(list(product(['a', 'b'], [1, 2])))
print()

# A 3-way product is also possible:
print(list(product([0, 1], ['x', 'y'], ['A', 'B'])))
print()


# ---------------------------------------------------------------------------
# 2) permutations()
# ---------------------------------------------------------------------------
# permutations(iterable, r=None) returns all possible orderings of length r.
# By default, r = len(iterable), so it returns all possible full-length orders.
#
# Example:
#   permutations('AB') -> ('A', 'B'), ('B', 'A')
#
# Important detail:
# - Order matters.
# - Each result is a tuple.
# - It does not reuse elements within a single tuple.

print("permutations() example:")
print(list(permutations('AB')))
print(list(permutations([1, 2, 3], 2)))
print()


# ---------------------------------------------------------------------------
# 3) combinations()
# ---------------------------------------------------------------------------
# combinations(iterable, r) returns all possible combinations of length r.
#
# Example:
#   combinations('ABC', 2) -> ('A', 'B'), ('A', 'C'), ('B', 'C')
#
# Important detail:
# - Order does not matter.
# - Once an element is used, it cannot be reused in the same combination.
# - Unlike permutations(), combinations() is not about ordering.

print("combinations() example:")
print(list(combinations('ABC', 2)))
print(list(combinations([1, 2, 3], 2)))
print()


# ---------------------------------------------------------------------------
# 4) accumulate()
# ---------------------------------------------------------------------------
# accumulate(iterable, func=None) returns running totals or running results.
# By default, it uses addition.
#
# Example with numbers:
#   [1, 2, 3, 4] -> 1, 3, 6, 10
#
# You can also pass a custom function.
# Example:
#   accumulate([1, 2, 3], lambda x, y: x * y) -> 1, 2, 6

print("accumulate() example:")
print(list(accumulate([1, 2, 3, 4])))
print(list(accumulate([1, 2, 3, 4], lambda x, y: x * y)))
print()


# ---------------------------------------------------------------------------
# 5) groupby()
# ---------------------------------------------------------------------------
# groupby(iterable, key=None) groups consecutive items that have the same key.
# It only groups adjacent items with the same key value.
#
# Example:
#   ["a", "a", "b", "b", "a"] grouped by itself gives
#   groups: 'a' -> ['a', 'a'], 'b' -> ['b', 'b'], 'a' -> ['a']
#
# Important detail:
# - Consecutive values matter.
# - If the data is not already sorted by the key, groupby will split incorrectly.
# - It returns an iterator of (key, group_iterator) pairs.

print("groupby() example:")
items = ['a', 'a', 'b', 'b', 'a', 'a']
for key, group in groupby(items):
    print(key, list(group))
print()

# If we sort first, the groups become more meaningful.
print(list(groupby(sorted(items))))
print()


# ---------------------------------------------------------------------------
# 6) Infinite iterators
# ---------------------------------------------------------------------------
# The itertools module also includes iterator generators that never end.
# These are very useful when combined with break conditions.
#
# 6.1 count(start=0, step=1)
#     Produces an infinite sequence of increasing numbers.
#
# 6.2 cycle(iterable)
#     Repeats the elements of an iterable forever.
#
# 6.3 repeat(element, times=None)
#     Repeats a single element forever, or a specified number of times.
#
# These are infinite because they do not stop on their own. You must use them
# with break or a limited slice in a practical program.

print("Infinite iterators examples:")

print("count():")
for i in count(5, 2):
    print(i, end=' ')
    if i >= 15:
        break
print()

print("cycle():")
for i, value in enumerate(cycle(['A', 'B', 'C'])):
    print(value, end=' ')
    if i >= 5:
        break
print()

print("repeat():")
print(list(repeat('Python', 4)))
print()


# ---------------------------------------------------------------------------
# Quick summary
# ---------------------------------------------------------------------------
# - product() = all combinations from multiple iterables
# - permutations() = ordered arrangements
# - combinations() = unordered selections
# - accumulate() = running cumulative values
# - groupby() = group consecutive matching items
# - Infinite iterators (count/cycle/repeat) = produce endless streams of data
#
# These functions are lazy, which means they are memory-efficient and ideal for
# working with large datasets.
