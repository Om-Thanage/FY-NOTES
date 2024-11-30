while True:
    input_string = input("Enter here \n").lower() 
    reversed_string = ""
    for i in input_string:
        reversed_string = i + reversed_string
    if (input_string == reversed_string):
            print("Yes,it is a palindrome") 
    else:
            print("No, it is not a palindrome")

    if input("Do you want check another word?(yes/no) ").lower() !="yes":
        break
print("Thank You")    