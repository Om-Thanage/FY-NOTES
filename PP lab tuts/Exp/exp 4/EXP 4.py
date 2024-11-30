# def my_function(fname,lname):
#   print(fname+ " " + lname)

# my_function("Amit", "Kumar")
# def my_function(fname, lname):
#   print(fname + " " + lname)

# my_function("Emil")
# def my_function(*kids):
#     print("The youngest child is " + kids[2])

# # my_function("Emil", "Tobias", "Linus")
# def my_function(college3, college2, college1):
#   print("The Best college is " + college3)

# my_function(?)
# def my_function(country= "Norway"):
#   print("I am from " + country)

# my_function("Sweden")
# my_function("India")
# my_function()
# my_function("Brazil")
def tri_recursion(k):
      if(k > 0):
        result = k + tri_recursion(k - 1)
        print(result)
      else:
            result = 0
            return result

print("Recursion Example Results")
tri_recursion(6)
