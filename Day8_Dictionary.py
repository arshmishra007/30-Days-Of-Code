n = int(input())
PhoneBook = dict(input().split() for x in range(n))
try:
    for x in range(n):
        key = input()
        if key in PhoneBook: 
            print (key,'=',PhoneBook[key],sep='') 
        else: 
            print('Not found')
except:
        exit()
