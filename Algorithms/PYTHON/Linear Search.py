__Author__="Ravishankar Chavare"
__GitHub__="https://github.com/chavarera"

def LinearSearch(lst,number):
  '''Function Input
        lst: A Integer Element List
        number: The Number which Do you Want to Search
        
     Function Output:
        result: True if number is found else False
        index: if element found then index else return -1 if element is not found
        iteration : Total No of Iteration Required
  '''
  
  result=False
  iteration=0
  index=-1
  
  
  for i in range(len(lst)):
    iteration+=1
    if lst[i]==number:
      result=True
      index=i
      break
  return result,index,iteration
    

#Driver Program  
#Simple List
lst=[1,2,3,4,5,6,7,8,9,10]

# Print Normal List
print(lst)
#Get Use Input From User
number=int(input("Enter Search Number:"))

#Call Search Function and save result in res and No of iteration in iteration
res,index,iteration=LinearSearch(lst,number)

#Print the Result
print("\nNumber In List: {} \nNumber Index :{} \nIt Required iteration: {}".format(res,index,iteration))
