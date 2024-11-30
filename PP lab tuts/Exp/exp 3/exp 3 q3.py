string1 = input("Enter your string:\n")
alpha = 0
numeric = 0
for i in range(0,len(string1)):
    if string1[i].isalpha():
        alpha += 1
    elif string1[i].isnumeric():
        numeric += 1
print("Letters:", alpha)
print("Digits:", numeric)