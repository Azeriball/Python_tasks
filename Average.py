numbers = []
for i in range (5):
  inputs = int(input("Enter a number: "))
  numbers.append(inputs)
print(numbers)
e = 0
for a in numbers:
  e += a
e += 0.0
e /= len(numbers)
print(e)
