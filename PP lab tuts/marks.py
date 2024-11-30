phy= int (input("Enter your marks in physics\n"))
chem= int (input("Enter your marks in chemistry\n"))
maths= int (input("Enter your marks in maths\n"))
CS= int (input("Enter your marks in CS\n"))
Eng= int (input("Enter your marks in Eng\n"))
total= int(input("Enter your total marks"))
tm = int(phy+chem+maths+CS+Eng)
p= float((tm/total)*100)
print("MARKS OF ALL SUBJECTS", phy,chem,maths,CS,Eng)
print("Your percentage is", p)
if (p>=85):
    print("Grade is A++")
elif (p>=75 and p<85):
    print("Grade is A+")
elif (p>=60 and p<75):
    print("Grade is B+")
elif (p>=40 and p<60):
    print("Grade is B")
else:
    print("Grade is Fail")