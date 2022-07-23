#include<bits/stdc++.h>
using namespace std;
int main(){
    double total,percentage,cgpa,avg,n;
    cout<<"Enter the number of semester:"<<endl;
    cin>>n;
    total=0;
    cout<<"Enter the cgpa marks(in CGPA):"<<endl;
    for(int i=1;i<=n;i++){
        cin>>cgpa;
        total=total+cgpa;
    }
    avg=total/n;
    percentage=(avg-0.75)*10;
    cout<<"Percentage you got:"<<" "<<percentage<<" "<<"%";
    return 0;
}
