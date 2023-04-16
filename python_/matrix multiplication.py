A = [[12, 7, 3],
    [4, 5, 6],
    [7, 8, 9]]
 
# A= zip([[1,2], [3,4], [5,6]])
# [[1,3,5], [2,4,6]]
  
# B =zip([[1,2], [3,4], [5,6]])
     
B = [[5, 8, 1, 2],
    [6, 7, 3, 0],
    [4, 5, 9, 1]]

result = [[0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0]]
 

for i in range(len(A[0])):
 

    for j in range(len(B[0])):
 

        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]
 
for r in result:
    print(r)