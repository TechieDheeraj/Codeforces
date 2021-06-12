#! /usr/bin/env python3

###
 #      file    :  28_team.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 12 14:58:27
 #      lastMod :  Sat 12 Jun 14:58:27 2021
###

def main():
    n = int(input())
    c = 0
    for j in range(n):
        l = list(map(int, input().split()))
        if l.count(1) >= 2:
            c+=1
        del l
    print(c)

if __name__ == "__main__": 
    main()
