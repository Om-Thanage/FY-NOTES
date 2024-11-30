#first
# num= int(input("Enter the number of rows"))
# for i in range(1,num+1):
#     for j in range(1,i+1):
#         print(j, end=" ")
#     print()
#second
# num= int(input("Enter the number of rows"))
# for i in range(1,num+1):
#     for j in range(1,i+1):
#         print(i, end=" ")
#     print()
#third
# num= int(input("Enter the number of rows"))
# digit  = 1
# for i in range(1,num+1):
#     for j in range(1,i+1):
#         print(digit, end=" ")
#         digit=digit+1
#     print()
#fourth
# num= int(input("Enter the number of rows"))
# for i in range(1,num+1):
#     for j in range(1,i+1):
#         print("*", end=" ")
#     print()
n = int(input("Enter the number of rows"))
for i in range(n):
    j = i+1
    if j == 1:
        print(" "*(n) + "*")
    elif j != n:
        print(" "*(n-j+1)+ "*" + " "*(2*i-1) + "*")
    else:
        print(" " + "* "*n)
