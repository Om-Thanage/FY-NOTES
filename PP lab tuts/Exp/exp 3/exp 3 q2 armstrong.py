#Write a program to check whether a number is Armstrong or not.(Armstrong number is a number that is equal to the sum of cubes of its digits for example: 153 = 1^3 + 5^3 + 3^3.)
num = input("Enter the number\n")
digits = list(num)
sum = 0
for i in range(0, len(digits)):
    sum += int(digits[i])**len(digits)
if int(num) != sum: 
    print(num,"is not an Armstrong number.")
else:
    print(num,"is an armstrong number.")