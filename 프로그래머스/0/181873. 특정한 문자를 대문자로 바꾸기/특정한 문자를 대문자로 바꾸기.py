def solution(my_string, alp):
    return ''.join([x if x != alp else x.upper() for x in (my_string)])