for i in range(200,401):
    numbers =str(i)
    is_even = True
    for j in numbers:
        if int(j)%2:
            is_even = False
    if is_even:
        print(numbers,end=", ")   