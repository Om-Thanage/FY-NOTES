#Write a python program to take list values as input parameters and returns another list without any duplicates.
list_input= list(input ("Enter your list\n"))
x = list(set(list_input))
if (" " in x): 
    x.remove(" ")#removes space from list
    print(x)
else:
    print(x)

