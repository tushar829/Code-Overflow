# Python3 program to check if the triangle is equilateral or isosceles or scalene 
def checkTriangle(x, y, z): 
  
    # _Check for equilateral triangle 
    if x == y == z: 
        print("Equilateral Triangle") 
  
    # Check for isoceles triangle 
    elif x == y or y == z or z == x: 
        print("Isoceles Triangle") 
  
    # Otherwise scalene triangle 
    else: 
        print("Scalene Triangle") 
  
  
# Driver Code 
  
# Given sides of triangle 
x = 4
y = 7
z = 8
  
# Function Call 
checkTriangle(x, y, z) 
