def solution(n):
    answer = []
    answer.append(n)
    while(1) :
        if n % 2 == 0:
            n /= 2
        else:
            n = 3 * n + 1
        answer.append(n)
        if n == 1:
            break;
    return answer