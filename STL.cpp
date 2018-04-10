#include<iostream>
#include<vector>

using std::vector;

int main(){

template <class T>
vector<pair<int,int>> convertsorted(const T& set)
{
vector<pair<int,int>> returnvalue;
auto iter= set.cbegin();
pair<int,int> currentrange(*iter,*iter +1);
cout<<"["<<*iter<<",";

for(++iter;iter!=set.end();++iter){
assert(*iter >= currentrange.second);
if(*iter==currentrange.second){
currentrange.second=*iter +1;
}
else{
returnvalue.push_back(currentrange);
cout<< currentrange.second<< ") \n[" << *iter<< ",";
currentrange.first=*iter;
currentrange.second=*iter+1;
}
}
cout<< currentrange.second<<")\n";
returnvalue.push_back(currentrange);

return returnvalue;

}
