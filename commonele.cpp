  /*Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
*/
class Solution
{

public:
vector<int>commonElements(int A[],int B[],int C[],int n1,int n2,int n3){
  
         map<int,int> ma;
            map<int,int> mb;
            map<int,int> mc;
            vector<int> a;
            for(int i=0;i<n1;i++)
            {
                ma[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                mb[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                mc[C[i]]++;
            }
            for(int i=0;i<n1;i++)
            {
                if(ma[A[i]] && mb[A[i]] && mc[A[i]])
                {
                    ma[A[i]]=0;
                    a.push_back(A[i]);
                }
            }
            return a;
        }

        
        
        };
        int main(){
            int t;
            cin>>t;
            while(t--){
                int n1,n2,n3;
                cin>>n1>>n2>>n3;
                int A[n1];
                int B[n2];
                int C[n3];
                
                for(int j=0;j<n1;j++){
                            cin>>B[i];             
                }
                for(int k=0;k<n1;k++){
                            cin>>C[i];             
                }
                solution ob;
                vector<int >res=ob.commonElements(A,B,C,n1,n2,n3);
                if(res.size()==0){
                    cout<<-1;
                }
                for(int i=0;i<res.size();i++){
                    cout<<res[i]<<" ";
                }
                cout<<endl;
            }
        }