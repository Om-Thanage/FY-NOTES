# def factorial(n1):
#     if n1 == 0:
#         return 1
#     else:
#         return n1 * factorial(n1-1)
# n1 = int(input("Enter your number "))
# result = factorial(n1)
# print(result)
# Get input from the user
numbers = input("Enter numbers separated by a space: ")
numbers = numbers.split()
even = []
odd = []
for num in numbers:
    if (lambda x: x % 2 == 0)(int(num)):
        even.append(num)
    elif (lambda x: x % 2 != 0)(int(num)):
        odd.append(num)
print("Even numbers:", even)
print("Odd numbers:", odd)