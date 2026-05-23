word = "Six Seven Five Five"
vowels = ["A", "E", "I", "O", "U", "a", "e", "i", "o", "u"]
e = 0
for i in word:
    if i in vowels:
        e += 1
print(e)
