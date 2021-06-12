#! /usr/bin/env python3

###
 #      file    :  26_HQ9+.py
 #      author  :  techiedheeraj
 #      created :  2021 Jun 12 14:09:39
 #      lastMod :  Sat 12 Jun 14:09:39 2021
###

def main():
    c = ['H', 'Q', '9']

    s = str(input())
    for i in range(len(s)):
        if s[i] in c:
            print("YES")
            return
    print("NO")

if __name__ == "__main__": 
    main()

