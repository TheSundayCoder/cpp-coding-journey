// //length of string;
// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;int counter  = 0;
//     getline(cin,s);
//     // cout<<s.length()<<endl;
// // for(int i = 0 ; s[i]!= '\0' ; i++)//not s.at(i)
// // {
// //  counter ++;
// // }
// // cout<<"String length is "<<counter;

// string::iterator it;
// for(it=s.begin(); it != s.end() ;it++){
//     counter ++;
// }
// cout<<"size of string is "<<counter;
//     return 0;
// }

// change case of letter

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;
//     getline(cin,s);
//     for(int i = 0 ; i < s.length() /*or s[i] != '\0' */ ; i++){
//         if(int(s.at(i))>='A' && int(s.at(i))<='Z'){ /*A KE JGHA 65 AND Z KE JAGHA 90 LIKHDO*/
//             s.at(i) = s.at(i) + 32 ;/*lowercase - uppercase = 32;*/
//         }
//         else if(int(s.at(i))>='a' && int(s.at(i))<='z'){/*a ->97 z ->122 we can replace with ascii code too*/
//             s.at(i) = s.at(i) -32;
//         }
//     }
//     cout<<endl<<s;
//     return 0;
// }

// count vowels  in a string

// #include <string>
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;int count = 0;
//     getline(cin, s);
//     for(int i = 0 ; s[i] != '\0';i++){
//         if(s.at(i)==  65  ||s.at(i)==  97  ||s.at(i)==   69 ||s.at(i)==  101  ||s.at(i)== 73   ||s.at(i)==  105  ||s.at(i)== 79   ||s.at(i)==  111  || s.at(i)== 85    ||s.at(i)==  117  ){
//             count ++;
//         }
//     }
//     cout<<"number of vowel are "<<count;
//     return 0;
// }


// //palindrome word

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     string k = "";
//    for(int i = s.length()-1 ; i>=0 ; i--){
//     s.at(i)= tolower(s.at(i));
//     k = k + s.at(i);
//    }
//    if(k==s){ //or (s.compare(k) == 0)
//     cout<<"palindrome";
//    }
//    else cout<<"not a palindrome";

//     cout<<endl<<s;
//         return 0;
// }



//find username in email 


#include <iostream>
using namespace std;

int main() {
    cout<<"Enter email id"<<endl;
    string email;
    cin>>email;
    string k = "";  //can use email.find('@') = n to get index of @; ; k = email.substr(0,n);
    for(int i = 0 ; i < email.length() ;i++){
       
        if(email.at(i) == '@'){
                break;
        }
         k = k + email.at(i);
    }
    cout<<"username is "<<k;
    return 0;
}