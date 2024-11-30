# import numpy as np
# arr = np.array([[1, 2, 3, 4], [5, 6, 7, 8]])
# print(arr.shape)
# import numpy as np
# arr = np.array([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
# newarr = arr.reshape(4, 3)
# print(newarr)
# import numpy as np
# arr = np.array([1, 2, 3])
# for x in arr:
#       print(x)
# import numpy as np
# arr1 = np.array([1, 2, 3])
# arr2 = np.array([4, 5, 6])
# arr = np.concatenate((arr1, arr2))
# print(arr)
# import numpy as np
# arr = np.array([1, 2, 3, 4, 5, 6])
# newarr = np.array_split(arr, 3)
# print(newarr)
# import numpy as np
# arr = np.array([1, 2, 3, 4, 5, 4, 4])
# x = np.where(arr == 4)
# print(x)
# import numpy as np
# arr = np.array([3, 2, 0, 1])
# print(np.sort(arr))
# import numpy as np
# arr = np.array([41, 42, 43, 44])
# x = [True, False, True, False]
# newarr = arr[x]
# print(newarr)

#2. Write a python program to calculate the sum of all columns in a 2D NumPy array.
# import numpy as np

# row = int(input("Enter the number of rows: \n"))
# col = int(input("Enter the number of columns: \n"))
# data = input("Enter numbers with space \n").split()
# arr = np.array(list(map(int, data))) 
# newarr = arr.reshape(row , col)

# for i in range(0, col): 
#     arr1 = newarr[:,i]
#     arr2 = sum(arr1)
#     print(f"Sum of column {i+1}: {arr2}")

# print(newarr)

#3. Create two NumPy arrays representing monthly high and low temperatures for a year. Calculate the monthly average temperatures, the overall average high and low temperatures, and identify the months with the highest and lowest average temperatures.

import numpy as np
low = np.array([31, 32, 33, 33, 34, 32, 30, 39, 31, 34, 34, 32])
high = np.array([17, 18, 21, 24, 27, 26, 25, 25, 25, 24, 21, 18])
month = ["Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"]
overall_high_avg = sum(high)/len(high)
overall_low_avg = sum(low)/len(low)
month_avg_list = []
for i in range (0,12):
  month_avg_value = float((high[i]+low[i])/2)
  month_avg_value = round(month_avg_value, 2)
  print(month[i],": ",month_avg_value,"°C")
  month_avg_list.append(month_avg_value)
print("Overall high average temperature",round(overall_high_avg,2),"°C")
print("Overall low average temperature",round(overall_low_avg,2),"°C")
print("Monthly averages:\n",month_avg_list)
unsorted = np.array(month_avg_list)
high_average = np.argmax(unsorted)
low_average = np.argmin(unsorted)
print(f"Month of highest temperature average:{month[high_average]} {month_avg_list[high_average]} °C.")
print(f"Month of lowest temperature average:{month[low_average]} {month_avg_list[low_average]} °C.")
