#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// string countSort(string str){
//     vector<int>v (26,0);
    
//     for(int i=0 ; i<str.length() ; i++){
//         int index=str[i]-'a';
//         v[index]++;
//     }
    
//     int j=0;
//     for(int i=0 ; i<26 ; i++){
//         while(v[i]--){
//             str[j++]=i+'a';
//         }
//     }
//     return str;
// }

int main() {
	//code
// 	string str;
// 	cin>>str;
	
// 	cout<<countSort(str);

int t ;
cin>>t;

while(t--){
    string s;
    cin>>s;
    
    sort(s.begin(),s.end());
    cout<<s<<endl;
}
	
	return 0;
}