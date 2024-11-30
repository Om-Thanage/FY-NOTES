#Write a program that takes a string as input from the user and computes the frequency of each letter. Use a variable of dictionary type to maintain the count.
# s1 = input("Enter a string\n")
# x= s1.split()
# freq = {}
 
# for i in s1:
#     if i in freq:
#         freq[i] += 1
#     else:
#         freq[i] = 1
#     if " " in freq:
#      freq.pop(" ")
#     else:
#         print(str(freq))
s1 = input("Enter a string\n").lower()
freq = {}

for i in s1:
    if i != " ":
        if i in freq:
            freq[i] += 1
        else:
            freq[i] = 1

print(str(freq))