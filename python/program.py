########## table program ####################
# n=int(input("enter the number :- "))
# for i in range(1,11):
#     print(n,"x",i,"=",n*i)

######### even odd program #################
# n=int(input("enter the number :- "))
# if(n%2==0):
#     print(n,"is even")
# else:
#     print(n,"is odd")


# a=int(input("Enter the number: "))
# if(a>0):
#     c=a+1
#     print(c)
######### prime number program ##############
# count = 0
# n=int(input("enter the number :- "))
# for i in range(2,n):
#     if(n%i==0):
#         count=count+1
# if(count==0):
#     print(n,"is a prime number")
# else:
#     print(n,"is not a prime number")

# from googletrans import Translator
# t=Translator()
# a=input("Enter the statement :- ")
# result=t.t(a,dest='hi')
# print(result.text)



# a=12
# b=23.5
# c='ABESEC'
# print(a,b,c,sep='\n')

# for i in range(4,10):
#     print(i)


##### age 
# m=int(input("enter the age"))
# if(m>0):
#     if(m>18):
#         print("above 18")
#     elif(m<18):
#         print("below 18")
# else:
#     print("Not a valid age")


#n=int(input("En"))

# for i in range(10,1,-1):
#     print(i)


# wrong
# a=[]
# n=int(input("Enter the size: "))
# for i in range(1,n):
#     e=int(input("Enter list element: "))
#     a.append(e)
# for i in range(1,n):
#     print(a[i])



'''square=[value**2 for value in range(1,11)]
 print(square)'''





# taking user input in list in python
'''list=[]
n=int(input("Enter the size: "))
for i in range(0,n):
    a=int(input("Enter the element: "))
    list.append(a)
print("list is: ",list)'''

# Another method of list input 
'''inputlist=input("please enter the list element of type integer").split()'''

# method of traversing a list
'''for i in inputlist:
    if(int(i)>0):
        print(i,end=" ")'''

# nested list as a matrix
'''nes=[[1,2,3],[3,4,5],[5,6,7]]
for i in range(len(nes)):
    for j in range(len(nes[i])):
        print(nes[i][j],end=" ")
    print()'''


# flat list from a nested list

'''nes=[[1,2],[3,4],[5,6,7]]
newlist=[]
for i in range(len(nes)):
    for j in range(len(nes[i])):
        newlist.append(nes[i][j])
print(newlist)'''

# list comprehensions

'''l=[3**x for x in range(10)]
print(l)'''

#1 even numbers
'''l=[x for x in range(10) if x%2==0]
print(l)'''

#2
'''l=["even" if x%2==0 else "odd" for x in range(10)]
print(l)'''



# inputlist=input("enter the list elements: ").split()
# for i in inputlist:
#     print(i)


l=[10,20,3,100,100]
'''for i in range(len(l)):
    print(i)
    if l[i]%2==0:
        l[i]=l[i]+10
    else:
        l[i]=l[i]+5
print("updated list is: ",l)'''


'''l2=[]
l3=[]
for i in range(len(l)):
    if l[i] not in l2:
        l2.append(i)
    else:
        l3.append(i)
print(l2)
print(l3)'''