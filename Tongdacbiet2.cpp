#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);
 long long n,k,L,R,a[100005],b[100005],m=0; cin>>n;
 for(k=2; k*k<=2*n; k++){
  if(2*n%k==0){
   L=2*n/k+1-k;
   if(L%2==0){
    L/=2;
    R=L+k-1;
    m++;
    a[m]=L; b[m]=R;
   }
  }
 }
 cout<<m<<endl; 
 for(int i=0; i<m; i++)
  cout<<a[i+1]<<" "<<b[i+1]<<endl;
}