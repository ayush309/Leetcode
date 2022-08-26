the  idea is to take three pointer
k will point to end of array 1
j will point to end of array 2
i will point to last non zero element in array 1
​
now we will just check which is greater and we will move them at the end of array and the shift the pointer on that basis
`if(arr1[i] > arr2[j]`
copy it to last arr1[k] = arr1[i]
i--
k--
​
else
`arr1[k] = arr2[j]`
j--
k--