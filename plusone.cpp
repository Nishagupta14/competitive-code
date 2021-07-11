/*PLUSONE
Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
*/
vector<int>Plusone(vector<int>& digits){
    int n=digits.size();
    for(int i=n-1;i>=0;i--){
        //if digit is 9 then it becomes 0
        if(digits[i]==9){
            digits[i]=0;
        }
        //other nos 
        else{
            digits[i]++;
            return digits;
        }
    }
    //if it is eg 999 put 1 at 0 th index and push_back 0 at end
    digits[0]=1;
    digits.push_back(0);
    return digits;
}