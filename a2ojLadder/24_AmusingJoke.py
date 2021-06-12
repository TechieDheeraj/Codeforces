#! /usr/bin/env python3

###
 #      file    :  24_AmusingJoke.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 12 10:09:13
 #      lastMod :  Sat 12 Jun 10:09:13 2021
###

def main():
    a=""
    b=""
    c=""
    a = str(input())
    b = str(input())
    c = str(input())
    d={}

    l = min(len(a), len(b))
    for i in range(l):
        if a[i] in d:
            d[a[i]]+=1
        else:
            d[a[i]] = 1

        if b[i] in d:
            d[b[i]]+=1
        else:
            d[b[i]] = 1

    if len(a) > l:
        for i in range(l, len(a)):
            if a[i] in d:
                d[a[i]]+=1
            else:
                d[a[i]] = 1
    elif len(b) > l:
        for i in range(l, len(b)):
            if b[i] in d:
                d[b[i]]+=1
            else:
                d[b[i]] = 1

    for i in range(len(c)):
        if d.get(c[i]) == None:
            print("NO")
            return 
        d[c[i]]-=1
        if d[c[i]] == 0:
            del d[c[i]]

    if len(d) == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__": 
    main()

