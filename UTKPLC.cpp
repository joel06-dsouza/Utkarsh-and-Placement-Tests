#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    char f,s,th;
    char x,y;
    while(t--){
        cin>>f>>s>>th;
        cin>>x>>y;
        if(x==f && y==s){
            cout << x << endl;
        }
        else if(x==f && y==th){
            cout << x << endl;
        }
        else if(x==s && y==f){
            cout << y << endl;
        }
        else if(x==s && y==th){
            cout << x << endl;
        }
        else if(x==th && y==f){
            cout << y << endl;
        }
        else if(x==th && y==s){
            cout << y << endl;
        }
    };
	return 0;
}

