#include <iostream>
using namespace std;int main(){int n;cin>>n;while(n--){string w;cin>>w;if(w.size()>10)cout<<w[0]<<w.size()-2<<w.back()<<endl;else cout<<w<<endl;}return 0;}