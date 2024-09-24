#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    char str;
    cin>>str;

    string yc;
    while (cin>>yc){
        if (yc== "***"){
            break;
        }
    

        if (yc== "find-max"){
            int max = *max_element(a.begin(), a.end());
            cout <<max <<endl;
        }

        else if (yc=="find-min"){
            int min = *min_element(a.begin(), a.end());
            cout<<min<<endl;
        }

        else if (yc=="sum"){
            int s=0;
            for (int i=0;i<n;i++){
                s=s+a[i];
            }
            cout<<s<<endl;
        }

        else if (yc=="find-max-segment"){
            int c,d;
            cin>>c>>d;
            int max1=*max_element(a.begin()+c-1,a.begin()+d);
            cout<<max1<<endl;
        }
    }
    return 0;
}