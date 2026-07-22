# Lambda function examples

# 1. Simple arithmetic
add = lambda x, y: x + y
subtract = lambda x, y: x - y
multiply = lambda x, y: x * y
divide = lambda x, y: x / y

print("1.", add(5, 3), subtract(10, 4), multiply(2, 6), divide(20, 4))

# 2. Square and cube
square = lambda x: x ** 2
cube = lambda x: x ** 3
print("2.", square(4), cube(3))

# 3. String manipulation
upper = lambda s: s.upper()
reverse = lambda s: s[::-1]
capitalize_words = lambda s: " ".join(word.capitalize() for word in s.split())

print("3.", upper("python"), reverse("lambda"), capitalize_words("hello world from python"))

# 4. Filtering lists
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
even_numbers = list(filter(lambda n: n % 2 == 0, nums))
odd_numbers = list(filter(lambda n: n % 2 != 0, nums))
print("4.", even_numbers, odd_numbers)

# 5. Mapping lists
squared = list(map(lambda n: n ** 2, nums))
print("5.", squared)

# 6. Sorting with key
students = [("Alice", 90), ("Bob", 78), ("Charlie", 95), ("David", 88)]
sorted_by_name = sorted(students, key=lambda item: item[0])
sorted_by_score = sorted(students, key=lambda item: item[1], reverse=True)
print("6.", sorted_by_name, sorted_by_score)

# 7. Returning a lambda
make_multiplier = lambda n: lambda x: x * n
double = make_multiplier(2)
triple = make_multiplier(3)
print("7.", double(5), triple(5))

# 8. Conditionals inside lambda
is_even = lambda n: True if n % 2 == 0 else False
max_of_two = lambda a, b: a if a > b else b
print("8.", is_even(6), max_of_two(12, 9))

# 9. Using lambda with dictionary values
prices = {"apple": 2.5, "banana": 1.2, "orange": 1.8}
cheapest = min(prices.items(), key=lambda item: item[1])
print("9.", cheapest)

# 10. Lambda with list comprehensions
numbers = [10, 20, 30, 40]
converted = list(map(lambda x: x / 10, numbers))
print("10.", converted)

# 11. Lambda with reduce
# product = reduce(lambda a, b: a * b, [1, 2, 3, 4, 5])
# print("11.", product)

# 12. Lambda with tuple unpacking
pairs = [("a", 1), ("b", 2), ("c", 3)]
formatted = list(map(lambda pair: f"{pair[0]} -> {pair[1]}", pairs))
print("12.", formatted)

# 13. Lambda for checking membership
contains_python = lambda text: "python" in text.lower()
print("13.", contains_python("I love Python"), contains_python("I love Java"))

# 14. Lambda for rounding
round_to_tens = lambda x: round(x, -1)
print("14.", round_to_tens(123), round_to_tens(178))

# 15. Lambda for finding length
length = lambda s: len(s)
print("15.", length("lambda"), length([1, 2, 3, 4]))
