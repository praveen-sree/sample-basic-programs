value1 = input("Enter First Value :- ")
value2 = input("Enter Second Value :- ")

print("Sum of the values :- {0}".format(str(int(value1)+int(value2))))

Biggest_number=0
if value1 > value2:
    Biggest_number = value1
else:
    Biggest_number = value2

print("The biggest number is :- {0}".format(Biggest_number))
