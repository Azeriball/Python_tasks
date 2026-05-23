word = "sixsevennevesxis"
word1 = word[0:len(word) // 2]
word2 = word[-1:(len(word) // 2) * -1 - 1:-1]
print("True") if word1 == word2 else print("False")
