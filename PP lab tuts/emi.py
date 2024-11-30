import calendar
print(calendar.day_name)
print("EMI CALCULATOR")
Principal_amount=float(input("Enter principal amount\n"))
rate=float(input("Enter rate of interest\n"))
time=float(input("No. of months\n"))
interest=float((rate/12)/100)
EMI= float(Principal_amount*interest*(1+interest)**time)/((1+interest)**time-1)
print("Expected EMI is",round(EMI, 2))