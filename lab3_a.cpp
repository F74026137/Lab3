#include<iostream>
#include<iomanip>
#include<vector>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
int n,i,insert,moveItem,total;

ifstream inFile("file.in",ios::in);
if(!inFile){
cerr<<"Failed opening"<<endl;
exit(1);
}

inFile>>n;
vector<int>v(n);

for ( i=0; i<n ; i++){
inFile>>v.at(i);
}


for(int next=1;next<n;++next)
 {
 insert = v.at(next);
 moveItem = next;
 while((moveItem>0) &&(v.at(moveItem-1) > insert))
 {
 v.at(moveItem) = v.at(moveItem-1);
 --moveItem;
 }
 v.at(moveItem) = insert;
}
total=0;
for(i=1;i<=5;i++){
total+=v.at(n-i);
}
cout<<total<<endl;


/*for ( i=0; i<n ; i++){
cout<<v.at(i)<<endl;
}
*/
return 0;
}
 
