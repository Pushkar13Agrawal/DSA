class Solution {
public:

int help(string s, int i , long long num , int sign){
    // the first time it will encounter anything otheer than digit or i exceeds the length of string given it will return the ans 
    // used (int ) to type cast
if(i>=s.length() || !isdigit(s[i])){
    return (int)(sign * num);
}
//reconstruct number 
num=num*10+(s[i]-'0');

if(sign*num<=INT_MIN){
    return INT_MIN;
}
if(sign * num>=INT_MAX){
    return INT_MAX;
}

return help(s,i+1 ,num,sign);
}
    int myAtoi(string s) {
        int i=0;
       // skip white space
        while(i<s.length() && s[i]==' '){
                i++;
            
        }
        int sign =1;
        //check  for + and -ve sign
        if(i<s.length()&&( s[i]=='-' ||  s[i]=='+')){
            if( s[i]=='-') sign*=-1;
           
            i++;
        }
return help(s, i , 0 ,sign);
    }
};