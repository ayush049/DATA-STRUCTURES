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





square=[value**2 for value in range(1,11)]
print(square)