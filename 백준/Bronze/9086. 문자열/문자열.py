count = int(input())
word_list = []

for i in range(count):
    word = input()
    word_list.append(word)

for word in word_list:
    print(word[0] + word[len(word)-1])

