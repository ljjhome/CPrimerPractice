#include <iostream>
#include <vector>
#include <string>
using namespace std;
void printvstr(const vector<string> & vstr, int num){

    if(num > 0){
        cout<<vstr[vstr.size()-num]<<endl; 
        printvstr(vstr,num-1);
        return;
    }
    return;
     
}
int main(){
    
    vector<string> vstr{"haha1","haha2","haha3","haha4"};
    printvstr(vstr,vstr.size()); 
    
    return 0;
}
