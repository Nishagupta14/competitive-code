void game(map <int,int>&m,int energy){
    int count=0;
    for(auto &itr:m){
        if(e>=itr.first){
            count++;
            energy=energy+itr.second;
        }
        else{
            continue;
        }
    }
    cout<<count<<endl;
}
void mapping(int power[],int bonus[],int n,int e){
    map<int,int>m ;//mapping key value from array sorts automatically in ascending order
    for(int i=0;i<n;i++){
        m.insert({p[i],b[i]});
    }
    
    game(&m,e);
    }
}
int main(){
    int n;
    cin>>n;
    int i;
    int power[n],bonus[n];
    int e;
    cin>>e;
    for(int i=0;i<n;i++){
        cin>>power[i];
    }
    for(int i=0;i<n;i++){
        cin>>bonus[i];
    }
    mapping(power,bonus,n,e);
    return 0;
}