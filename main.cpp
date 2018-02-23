#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int counter=0 ,position=0;
    string input ,output;
    cin >> input;

    while(position<input.size()){
        for ( int i=0; i<4 ; i++ ){
            if( input[position+i]=='0' )
                counter++;
        }
        cout<<counter<<endl;
        counter=0;
        position+= 4 ;

    }
    return 0;
}
