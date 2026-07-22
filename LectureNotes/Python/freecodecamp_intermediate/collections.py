"""
Collections module: detailed explanation and examples
==================================================

The collections module provides specialized container data types that extend
built-in Python data structures with more convenient behavior.

1) Counter
----------
Counter is a dict subclass used for counting hashable objects.
It is especially useful when you need frequency counts for items in an iterable.

Why use Counter?
- Counts occurrences automatically
- Supports most common elements lookup
- Useful for text analysis, frequency distributions, histograms, etc.

Common methods:
- Counter(iterable) -> creates frequency map
- counter[key] -> gets count for a key
- counter.most_common(n) -> returns most frequent n items
- counter.update(iterable) -> adds counts
- counter.subtract(iterable) -> subtracts counts
- counter.elements() -> yields each element as many times as its count

Example:
"""
from collections import Counter

# Count frequency of letters in a string
word = "banana"
count = Counter(word)
print(count)  # Counter({'a': 3, 'b': 1, 'n': 2})

# Most common items
print(count.most_common(2))  # [('a', 3), ('n', 2)]

# Turn counts back into repeated elements
print(list(count.elements()))  # ['b', 'a', 'a', 'a', 'n', 'n']

# Update counts with another iterable
count.update("aaa")
print(count)  # Counter({'a': 6, 'b': 1, 'n': 2})

"""
2) namedtuple
-------------
namedtuple is a factory function that creates a tuple subclass with named fields.
It gives you the immutability of tuples while also allowing readable field access.

Why use namedtuple?
- Lightweight alternative to a class or dictionary
- Memory efficient
- Provides clear names for tuple elements
- Makes code more self-documenting

Syntax:
    NamedTupleClass = namedtuple('Name', ['field1', 'field2'])

Features:
- Access via dot notation: person.name
- Access via index: person[0]
- Can be unpacked like regular tuples
- Immutable: cannot change values after creation

Example:
"""
from collections import namedtuple

Point = namedtuple("Point", ["x", "y"])
# Point = namedtuple("Point", "x,y")
p1 = Point(10, 20)
print(p1)          # Point(x=10, y=20)
print(p1.x, p1.y)  # 10 20
print(p1[0], p1[1])  # 10 20

# It is still a tuple underneath, so unpacking works
x, y = p1
print(x, y)  # 10 20

"""
3) OrderedDict
--------------
OrderedDict is a dict subclass that preserves the insertion order of keys.
In Python 3.7+, regular dicts also preser order, but OrderedDict still provides
extra methods that are useful when orderve matters.

Why use OrderedDict?
- Keeps insertion order predictable
- Useful when you need to reorganize items while preserving order
- Provides methods like move_to_end() and popitem()

Common methods:
- move_to_end(key, last=True) -> move an existing key to the end (or beginning)
- popitem(last=True) -> remove and return the last inserted item by default
- reversed() -> reverse iteration support in some contexts

Example:
"""
from collections import OrderedDict

od = OrderedDict()
od['a'] = 1
od['b'] = 2
od['c'] = 3
print(od)  # OrderedDict([('a', 1), ('b', 2), ('c', 3)])

# Move key to the end
od.move_to_end('a')
print(od)  # OrderedDict([('b', 2), ('c', 3), ('a', 1)])

# Remove the last item
item = od.popitem()
print(item)  # ('a', 1)
print(od)   # OrderedDict([('b', 2), ('c', 3)])

"""
4) defaultdict
--------------
defaultdict is a dict subclass that provides a default value for missing keys.
Instead of raising KeyError, it creates the missing key automatically using a
factory function.

Why use defaultdict?
- Avoids repetitive checks for missing keys
- Very convenient for grouping data or building nested structures
- Cleaner code in many dictionary patterns

How it works:
    defaultdict(default_factory)

The default_factory is called whenever a missing key is accessed.

Example:
"""
from collections import defaultdict

# When a key is missing, give it a default list
scores = defaultdict(list)
scores['Alice'].append(90)
scores['Alice'].append(85)
scores['Bob'].append(78)

print(scores)  # defaultdict(<class 'list'>, {'Alice': [90, 85], 'Bob': [78]})
print(scores['Charlie'])  # []
print(scores)  # defaultdict(<class 'list'>, {'Alice': [90, 85], 'Bob': [78], 'Charlie': []})

# Another example: counting words with defaultdict(int)
word_counts = defaultdict(int)
for word in ['apple', 'banana', 'apple', 'cherry']:
    word_counts[word] += 1

print(word_counts)  # defaultdict(<class 'int'>, {'apple': 2, 'banana': 1, 'cherry': 1})

"""
5) deque
--------
deque stands for double-ended queue.
It is a list-like structure optimized for fast append and pop operations from both ends.

Why use deque?
- Efficient for left and right insertion/removal
- Great for queues, stacks, sliding windows, and breadth-first search
- More efficient than list for operations at both ends

Common methods:
- append(x) -> add to right end
- appendleft(x) -> add to left end
- pop() -> remove from right end
- popleft() -> remove from left end
- extend(iterable) -> add items to the right
- extendleft(iterable) -> add items to the left
- rotate(n) -> rotate elements by n positions
- clear() -> remove all elements

Example:
"""
from collections import deque

q = deque([1, 2, 3])
q.append(4)
q.appendleft(0)
print(q)  # deque([0, 1, 2, 3, 4])

print(q.popleft())  # 0
print(q.pop())      # 4
print(q)            # deque([1, 2, 3])

# rotate example
q.rotate(1)
print(q)  # deque([3, 1, 2])

# Example of queue behavior
queue = deque()
queue.append('first')
queue.append('second')
print(queue.popleft())  # 'first'
print(queue.popleft())  # 'second'

"""
Summary
=======
- Counter: counts elements in an iterable.
- namedtuple: tuple subclass with readable named fields.
- OrderedDict: dictionary with insertion-order-aware behavior.
- defaultdict: dictionary that automatically gives a default value for missing keys.
- deque: efficient queue/stack-like structure that supports operations on both ends.

These specialized structures are very useful in real-world Python programs,
especially when writing cleaner, more efficient, and more readable code.
"""
