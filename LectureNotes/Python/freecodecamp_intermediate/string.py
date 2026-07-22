"""
Detailed explanation of common string operations in Python.

1) string.strip()
   - Removes leading and trailing whitespace characters from a string.
   - Useful for cleaning input data such as user-entered text.
   - Time complexity: O(n), where n is the length of the string.
     Reason: it scans the string from both ends to find the first and last
     non-whitespace character.

   Example:
"""
text = "      hello world         "
print(text.strip())  # "hello world"

"""
2) string.find(substring)
   - Returns the index of the first occurrence of substring in the string.
   - Returns -1 if the substring is not present.
   - Useful for searching inside text.
   - Time complexity: O(n * m) in the worst case, where n is the length of the
     string and m is the length of the substring.
     In practice, Python uses efficient search algorithms internally, but the
     general behavior is still linear in the size of the text being searched.

   Example:
"""
message = "Python is fun"
print(message.find("fun"))  # 10
print(message.find("java"))  # -1

"""
3) string.replace(old, new)
   - Replaces every occurrence of old with new.
   - Returns a new string; the original string is not modified.
   - Useful for text transformation.
   - Time complexity: O(n) for scanning the string and creating the result,
     more precisely O(n + k) where k is the number of replacements performed
     in the worst case, because the final output must be built.

   Example:
"""
text = "I like apples and apples"
print(text.replace("apples", "oranges"))
# "I like oranges and oranges"

"""
4) ''.join(list)
   - Joins elements of a list (or any iterable of strings) into one string.
   - The empty string before join is the separator, so it concatenates without
     spaces or commas.
   - Very efficient for combining many small strings into one final string.
   - Time complexity: O(total_length_of_all_strings)
     Reason: Python must visit every element and copy the characters into the
     resulting string.

   Example:
"""
parts = ["P", "y", "t", "h", "o", "n"]
result = "".join(parts)
print(result)  # "Python"

"""
Summary:
- strip(): removes edge whitespace -> O(n)
- find(): search for a substring -> O(n) to O(n*m) depending on the search
  implementation details
- replace(): substitute all matches -> O(n)
- ''.join(list): combine many strings efficiently -> O(total characters)

These methods are foundational in text processing and are widely used in
real-world programs for cleaning, parsing, and transforming data.
"""
