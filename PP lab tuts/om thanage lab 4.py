print("Welcome to ABC Bank")
min_balance = 1000
print("BANK ACCOUNT 1234567000")
print("Current balance:",min_balance)
while True:
    choice = input("Deposit(D) or Withdrawal(W)? ")
    def deposit(d_amount):
        global min_balance
        min_balance += d_amount

    def withdraw(w_amount):
        global min_balance
        if min_balance >= w_amount:
            min_balance -= w_amount
        else:
            print("Low balance")

    if choice.lower() == "deposit" or choice.lower() == "d":
        try:
            d_amount = int(input("Enter your amount: "))
        except ValueError:
            print("Please enter a valid number.")
            d_amount = int(input("Enter your amount: "))
        deposit(d_amount)
    elif choice.lower() == "withdrawal" or choice.lower() == "w":
        try:
            w_amount = int(input("Enter your amount: "))
        except ValueError:
            print("Please enter a valid number.")
            w_amount = int(input("Enter your amount: "))
        try:
            withdraw(w_amount)
        except:
            print("Low balance")

    print(f"Your current balance is {min_balance}.")
    choice2 = input("Do you wish to continue?(yes/no)")
    if choice2.lower()=="no":
        break
print("Thank you")
