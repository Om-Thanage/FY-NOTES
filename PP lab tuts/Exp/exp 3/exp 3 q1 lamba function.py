# Write a program to read the numbers until -1 is encountered. Also, count the number of prime numbers and composite numbers entered by the user
prime_count = 0
composite_count = 0

while True:
    num = int(input("Enter a number (-1 to stop): "))
    if num == -1:
        break
    elif num <= 0:
        print("Negative integer cannot be prime\nPlease enter a positive value")
        continue
    elif num > 1:
        for i in range(2, num):
            if (num % i) == 0:
                composite_count += 1
                break
        else:
            prime_count += 1
    else:
        print(num," is neither prime nor composite")

print("Number of prime numbers: ", prime_count)
print("Number of composite numbers: ", composite_count)
