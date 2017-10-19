output_list = []


def toString(a):
    return ''.join(a)


def permute(a, l, r):
    if l == r:
        if toString(a) not in output_list:
            output_list.append(toString(a))
    else:
        for i in range(l, r+1):
            a[l], a[i] = a[i], a[l]
            permute(a, l+1, r)
            a[l], a[i] = a[i], a[l]


string = input()
n = len(string)
a = list(string)
permute(a, 0, n-1)
for s in output_list:
    print(s)