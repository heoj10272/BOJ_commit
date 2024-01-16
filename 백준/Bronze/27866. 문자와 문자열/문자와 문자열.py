word = input()

try:
    idx = int(input())
    print(word[idx - 1])
except ValueError:
    print("정수를 입력하세요.")