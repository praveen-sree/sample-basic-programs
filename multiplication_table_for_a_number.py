# https://www.onlinegdb.com/online_python_compiler
  
value1 = int(input("Enter a Number Less than 10 :- "))
if value1 < 1 or value1 > 10:
    print("Enter a Number between 1 and 10 ")
    exit(1)
    
    # # meant for comment single line in python.
    # For Multiline comment start with """ and end with """ as below
    """
    Hello I can comment here in multiple lines
    This is a sample program for pranav.
    """
    # {0} = value of value1
    # {1} = value of i, varies in the for loop
    # {2} = Multiply value1 with i 
    
    
for i in range(1,10):
    print("{0} x {1} = {2}".format(value1,i,value1*i))
    
    # For range() check https://pynative.com/python-range-function/
    
