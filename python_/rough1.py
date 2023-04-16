A = [[12, 7, 3],
    [4, 5, 6],
    [7, 8, 9]]
B = [[5, 8, 1, 2],
    [6, 7, 3, 0],
    [4, 5, 9, 1]]
 

result = [[sum(a * b for a, b in zip(A_row, B_col))
                        for B_col in zip(*B)]
                                for A_row in A]
 
for r in result:
    print(r)



# import numpy as np
# m1=np.array( [[12, 7, 3],[4, 5, 6],[7, 8, 9]])
# m2=np.array([[5, 8, 1, 2],[6, 7, 3, 0],[4, 5, 9, 1]])
# result=np.dot(m1,m2)
# print(result)