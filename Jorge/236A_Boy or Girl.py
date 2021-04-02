

name = input()

letters = []

for char in name:

    if (char not in letters):
        letters.append(char)
    else:
        pass


if (len(letters) % 2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")