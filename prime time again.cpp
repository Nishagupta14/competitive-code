/* Prime Time Again
Difficulty: MEDIUM
Avg. time to solve
25 min
Success Rate
60%
Problem Statement
Given two integers ‘D’ and ‘P’. Where ‘D’ is the number of hours in a day and a day can be divided into ‘P’ equal parts. Your task is to find total instances of equivalent prime groups. Prime group refers to the group of elements (hours) which are prime and measure the same equivalent time since the start of the day.
For example, if we consider ‘D’ to be 24 and ‘P’ to be 2, then the day of total 24 hours is divided into 2 parts ( 1 - 12 ) and ( 13 - 24 ). 5 hours in the first part of the day is equivalent to 17, which is 5 hours into the second part of the day. And since 5 and 17 both are prime, they can be considered as a prime group.
2
36 3
8 2
Sample Output 1:
2
1
*/
 bool prime(int element){
        if(element==1){
            return false;
        }
        int flag=0;
        for(int i=2;i<element;i++){
            if(element%i==0){
                return false;
            }
        }
      return true;
    }
int countPrimeGroup(int dayhours, int parts) {
    int coloumn=(dayhours/parts);
    int row=parts;
    int arr[row][coloumn];
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            arr[i][j]=count;
            count++;
        }
    }
     int primegroup=0;
    for(int i=0;i<coloumn;i++){
        
            bool flag=true;
            for(int j=0;j<row;j++){
                int element=arr[j][i];
                if(!prime(element)){
                    flag=false;
                    break;
                }
            }
            if(flag){
                primegroup +=1;
            }
        }
        return primegroup;
    }
        


 