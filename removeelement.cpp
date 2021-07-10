/*27. Remove Element
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/
int removeelement(vector<int>&a,int val){
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==val){
            count++;
        }
        else{
            a[i-count]=a[i];
        }
    }
    return n-count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  
    int k=removeelement(v);
    for(int i=0;i<=k;i++){
        cout<<v[i];
    }
}