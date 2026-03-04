#include <iostream>

using namespace std;

int main()
{
    int n,szam=1,P=1;
    cout<<"n=";
    cin>>n;
    for(int index = 0;index < n;index++){
        cout<<"szam=";
        cin>>szam;
        for(int oszto = 3;oszto < szam;oszto+2){
            if(szam % oszto == 0){
                P *= oszto;
            }
        }
    }
    cout << "P ="<<P<<endl;
    return 0;
}
