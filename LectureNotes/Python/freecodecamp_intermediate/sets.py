# Example of sets in Python

# A set is an unordered collection of unique items.
numbers = {1, 2, 3, 4, 4, 5}
print(numbers)  # {1, 2, 3, 4, 5} -> duplicates are removed
print("=========================================================================")
# You can add and remove items
numbers.add(6)
numbers.remove(2)
print(numbers)
print("=========================================================================")
# Set operations
even_numbers = {2, 4, 6, 8}
print(numbers | even_numbers)               # union
print(numbers.union(even_numbers))          # union
print(numbers & even_numbers)               # intersection
print(numbers.intersection(even_numbers))   # intersection
print(numbers - even_numbers)               # difference
print(numbers.difference(even_numbers))     # difference
print(numbers.symmetric_difference(even_numbers))     # AUB - AnB
print("=========================================================================")
word_set="hello"
print(word_set)
print("=========================================================================")
numbers2=numbers.copy()
even_numbers2=even_numbers.copy()
numbers2.intersection_update(even_numbers2) # A = AnB
print(numbers2)
print("=========================================================================")
numbers3=numbers.copy()
even_numbers3=even_numbers.copy()
numbers3.difference_update(even_numbers3) # A = A-B
print(numbers3)
print("=========================================================================")
numbers4=numbers.copy()
even_numbers4=even_numbers.copy()
numbers4.symmetric_difference_update(even_numbers4) # A = AnB
print(numbers4)
print("=========================================================================")
# Subset and superset examples
small_set = {1, 2}
big_set = {1, 2, 3, 4}
print(small_set.issubset(big_set))      # True
print(big_set.issuperset(small_set))    # True
print(big_set.issubset(small_set))      # False
print("=========================================================================")
# isdisjoint() example
set_a = {1, 2, 3}
set_b = {4, 5, 6}
set_c = {3, 4, 5}
print(set_a.isdisjoint(set_b))          # True
print(set_a.isdisjoint(set_c))          # False
print("=========================================================================")
# frozenset is an immutable version of a set.
# You cannot add to or remove from it after creation.
# It is useful when you need a hashable set, e.g. to use inside another set.
frozen_numbers = frozenset([1, 2, 3, 4])
print(frozen_numbers)
print("=========================================================================")
# A frozenset can be placed inside a regular set because it is hashable.
outer_set = {frozen_numbers, frozenset({5, 6})}
print(outer_set)


