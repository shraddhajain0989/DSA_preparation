def isPalindrome(s, l, r):
    # Base case
    if l >= r:
        return True

    # If characters don't match
    if s[l] != s[r]:
        return False

    # Recursive call
    return isPalindrome(s, l + 1, r - 1)

# Driver code
s = "madam"
print(isPalindrome(s, 0, len(s) - 1))
