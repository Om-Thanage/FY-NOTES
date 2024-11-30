# def is_palindrome(s):
#     s = s.lower()
#     if len(s) <= 1:
#         return True
#     elif s[0] == s[-1]:
#         return is_palindrome(s[1:-1])
#     else:
#         return False

# while True:
#     input_string = input("Enter here \n")
#     if is_palindrome(input_string):
#         print("Yes, it is a palindrome")
#     else:
#         print("No, it is not a palindrome")

#     if input("Do you want check another word? (yes/no) ").lower() != "yes":
#         break

# print("Thank You")
def is_palindrome():
    while True:
        input_string = input("Enter here \n").lower()
        reversed_string = ""
        for i in input_string:
            reversed_string = i + reversed_string
        if (input_string == reversed_string):
            print("Yes,it is a palindrome")
        else:
            print("No, it is not a palindrome")
        if input("Do you want check another word?(yes/no)").lower() !="yes":
            break
is_palindrome()
print("Thank You")