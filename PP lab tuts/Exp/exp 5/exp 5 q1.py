# print("Enter your Personal details")
# list1 = []
# def personal_details():
#     while True:
#         name = input("Enter your name:\n")
#         try:
#             if name.isalpha():
#                 list1.append(str(name))
#                 break
#             else:
#                 print("Please enter a valid input")
                   
#         except (TypeError, ValueError):
#             print("Please enter a valid input")
           
#     while True:    
#         age = input("Enter your age: \n")
#         try:
#             list1.append(int(age))
#             break
#         except (TypeError, ValueError):
#             print("Please enter an integer")
           
#     while True:    
#         height = input("Enter your height: \n")
#         try:
#             list1.append(float(height))
#             break
#         except (TypeError, ValueError):
#             print("Please enter a valid input")
           
#     while True:    
#         weight = input("Enter your weight: \n")
#         try:
#             list1.append(float(weight))
#             break
#         except (TypeError, ValueError):
#             print("Please enter a valid input")
           
# personal_details()
# print("Your details are:")
# for i in range(0,len(list1)):
#     print(list1[i])
#Password checker

#Code:
# while True:
#     try:
#         password = input("Create your password\n")
   
#         if len(password)<8:
#             raise ValueError("Passowrd should be atleast 8 characters long.")
#         if not any (letters.isupper() for letters in password):
#             raise ValueError("Must contain atleast one uppercase")
#         if not any (letters.islower() for letters in password):
#             raise ValueError("Must contain atleast one lowercase")
#         if not any (letters.isdigit() for letters in password):
#             raise ValueError("Must contain atleast one digit")
#         if not any (letters in "!@#$%^&amp;*()_+" for letters in password):
#             raise ValueError("Must contain atleast one special character")
#         break
#     except ValueError as d:
#         print (d)
# print("You have created a strong password")
# print("Your password is: ",password)

def calculate_average(numbers):
    if not numbers:
        raise Exception("The list is empty")
    total = 0
    count = 0
    for num in numbers:
        total += num
        count += 1
    average = total / count
    print(f"The average of the numbers is: {average}")

try:
    user_input = input("Enter a list of numbers separated by spaces: ")
    numbers = [float(x) for x in user_input.split()]
    calculate_average(numbers)
except Exception as e:
    print(e)
except ValueError:
    print("Invalid input. Please enter a list of numbers separated by spaces.")

