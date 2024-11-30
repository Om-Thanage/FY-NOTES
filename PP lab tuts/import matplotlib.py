# import matplotlib.pyplot as plt
# import numpy as np

# xpoints = np.array([1, 8])
# ypoints = np.array([6, 10])
# zpoints = np.array([6, 10])

# plt.plot(xpoints, ypoints, zpoints)
# plt.show()
# num = int(input("Enter a number: "))
# prime = True
# for i in range(2, num):
#     if num % i == 0:
#         prime = False
#         break
# if num == 1:
#     print("Neither prime nor composite")
# elif prime and num != 1:
#     print("PRIME")
# else:
#     print("Composite")
# f = open("bhendi.txt", "r")
# data = f.read()
# print(data)
# f.close()
# import matplotlib.pyplot as plt
# import numpy as np

# xpoints = np.array([1, 2, 6, 8])
# ypoints = np.array([3, 8, 1, 10])

# plt.plot(xpoints, ypoints)
# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np
# ypoints = np.array([3, 8, 1, 10])
# plt.plot(ypoints, linestyle = 'dotted')
# plt.show()
# import numpy as np
# import matplotlib.pyplot as plt

# x = np.array([80, 85, 90, 95, 100, 105, 110, 115, 120, 125])
# y = np.array([240, 250, 260, 270, 280, 290, 300, 310, 320, 330])

# plt.plot(x, y)

# plt.title("Sports Watch Data")
# plt.xlabel("Average Pulse")
# plt.ylabel("Calorie Burnage")

# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# x = np.array([5,7,8,7,2,17,2,9,4,11,12,9,6])
# y = np.array([99,86,87,88,111,86,103,87,94,78,77,85,86])

# plt.scatter(x, y)
# plt.show()
# import numpy as np
# import matplotlib.pyplot as plt

# x = np.array([80, 85, 90, 95, 100, 105, 110, 115, 120, 125])
# y = np.array([240, 250, 260, 270, 280, 290, 300, 310, 320, 330])

# plt.title("Sports Watch Data")
# plt.xlabel("Average Pulse")
# plt.ylabel("Calorie Burnage")

# plt.plot(x, y)

# plt.grid()

# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# #plot 1:
# x = np.array([0, 1, 2, 3])
# y = np.array([3, 8, 1, 10])

# plt.subplot(1, 2, 1)
# plt.plot(x,y)

# #plot 2:
# x = np.array([0, 1, 2, 3])
# y = np.array([10, 20, 30, 40])

# plt.subplot(1, 2, 2)
# plt.plot(x,y)

# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# #plot 1:
# x = np.array([0, 1, 2, 3])
# y = np.array([3, 8, 1, 10])

# plt.subplot(2, 1, 1)
# plt.plot(x,y)

# #plot 2:
# x = np.array([0, 1, 2, 3])
# y = np.array([10, 20, 30, 40])

# plt.subplot(2, 1, 2)
# plt.plot(x,y)

# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# x = np.array(["A", "B", "C", "D"])
# y = np.array([3, 8, 1, 10])

# plt.bar(x,y)
# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# x = np.array(["A", "B", "C", "D"])
# y = np.array([3, 8, 1, 10])

# plt.bar(x, y, color = "#4CAF50")
# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np

# y = np.array([35, 25, 25, 15])
# mylabels = ["Apples", "Bananas", "Cherries", "Dates"]

# plt.pie(y, labels = mylabels)
# plt.show()
# import matplotlib.pyplot as plt
# import numpy as np
# x = np.array([3,4,5,6,7])
# y = np.array([4,5,6,7,8])
# plt.plot(x,y)
# plt.xlabel("X")
# plt.ylabel("Y")
# plt.title("y = x + 1")
# plt.grid()
# plt.show()
# fileObj = open("employeedetails.txt","wt")
# fileObj.write("EmpId \tName \tDepartment\n")

# def file():
#     fileObj.write(ID + "\t" + Name + "\t" + Department+ "\n") 
    

# while True:
#     print("Enter your details")
#     ID = input("Enter your EmpId: ")
#     Name = input("Enter your name: ")
#     Department = input("Enter your department: ")
#     choice = input("Do you want to continue? (yes/no): ")
#     file()
#     if choice != "yes":
#         break 
# fileObj.close()
# print(fileObj)
# file_name = input("Please enter the file name: \n(If file is not in the same directory enter full path otherwise only file name)\n")

# try:
    
#     with open(file_name, 'r') as file:
        
#         contents = file.read()
        
#         print(contents.upper())
# except FileNotFoundError:
    
#     print("The file does not exist. Please check the file name and try again.")

# import numpy as np

# # Taking input and converting it into an array of integers
# user_array = input("Enter an array of numbers with space in between: ").split()
# array_1 = np.array(user_array)

# max_value = np.argmax(array_1)
# print("Maximum number in given array is:", array_1[max_value])

# sorted_array = np.sort(array_1)
# print("The sorted array is:", sorted_array)

# search_number = input("Enter the number to search: ")
# # Converting the search number to an integer

# for i in range(0, len(sorted_array)):
#     if sorted_array[i] == search_number:
#         print("The number is at", i+1, "position.")
# import numpy as np
# user_array = input("Enter an array of numbers with space in between").split()
# array_1 = np.array(user_array)
# max_value = np.argmax(array_1)
# print("Maximum number in given array is:", array_1[max_value])
# sorted_array = np.sort(array_1)
# print("The sorted array is:", sorted_array)
# search_number = input("Enter the number to search\n")
# for i in range(0, len(user_array)):
#     if sorted_array[i] == search_number:
#         print("The number is at",i+1," position.")
# import matplotlib.pyplot as plt

# x = [1,2,3]

# y = [2,3,4]

# plt.grid()
# plt.plot(x, y)


# plt.xlabel('X-Axis')
# plt.ylabel('Y-Axis')
# plt.title('My First  Graph!')


# plt.show()
# import matplotlib.pyplot as plt
# x = ["Java", "Python", "PHP", "JavaScript", "C#", "C++" ]
# y = [22.2,17.6,8.8,8,7.7,6.7]
# plt.pie(y, labels=x)
# plt.grid()
# plt.show()


import matplotlib.pyplot as plt


weights = []
heights = []

num_students = int(input("Enter the number of students: "))


for i in range(num_students):

    weight = float(input(f"Enter the weight of student {i+1} in kg: "))
    height = float(input(f"Enter the height of student {i+1} in cm: "))
    
    weights.append(weight)
    heights.append(height)

plt.scatter(weights, heights)

plt.xlabel('Weights (kg)')
plt.ylabel('Heights (cm)')
plt.title("Student Body Metrics: Weights vs Heights")

plt.grid()
plt.show()

