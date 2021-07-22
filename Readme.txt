My main application which i have thought was to have a class Employee, variables (EmpID, Name and Manger Id)
 and its member functions to execute Insert, List and Search. 

Before executing that i wanted to give a try about how integer array is working and also a struct
so that it will help me to refresh the concepts and better logic implemetation. 

My first trial :

1. Console Application1 - 

I just modified the problem statement with the following
1. The employee details can be given only first time
2. All the values are integer only, i have avoided the name as i have decide to go with basic integer array for trial.

Implementation :

Main is  Emp Id is unique. So the logic is implemented to avoid duplicates iterating through 
the aray taken the current index and checking the dulpicate from the starting index.
Atleast one employee record should be there. I have avoided only negative numbers here, 
entering special characters is not handled which gives exception.
Dynamic int array is created and taken care deletion as well.

After testing, the identified bugs are unfixed. It does run.

2. Console Application2 - 

Here modified the problem statement with the following
1. The employee details can be given only first time
2. struct is used. 
3. Seperate member fuction is not implemented and all are in main() function.

Implementation :

Same as above. Additionally non negative characters and alphabets and specail character entry is handled. 
Total no of Record is limited to 100. Dynamic array for struct is created and deleted while coming out of program.
Employee id only non negative numbers alone handled not other like special characters. It gives exception.
As for and if it requires little pause while this is running, so sleep is implemeted for minimal time.

After testing, the identified bugs are unfixed. It does run.

3. Console Application 3 -

Employee details can be entered in the beginning and each employee details can be inserted seperately.
Then List and Search Manger id are another functions.

I have not not developed completley as a fine working module because of system limitaion.
It does not give build errors.
At the same time Insert module has not fine tuned. While allocating dynamic array from one to another 
I find while writing and accessing array index there is some logic improvemnet is required.
Even Emp Id and Manger ID can be implented as unsigned int instead of int and exception handling of specail cahacters can be implemented.
EmpName string type should be improved to accpet only alphabets.
Seperate functionality should be implemented.
These are the errors i find during my implentaion and testing.



