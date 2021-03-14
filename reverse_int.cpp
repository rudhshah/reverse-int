class Solution {
public:
    int reverse(int x) {
        bool neg = false;
        long a_ = (long)x;
        if(x < 0){
            neg = true;
            long a_= a_*-1;
        }
        cout << a_ << endl << endl;
        string str = to_string(a_);
        cout << str << endl;
        for(int i =0; i < str.size()/2; i++){
            swap(str[i], str[str.size()-1-i]);
        }
        cout << str;
        long long z = stoll(str);
        if (z < pow(-2, 31) || z >( pow(2,31) - 1))
            return 0;
        if(neg){
            return (0 - stoll(str));
        }
        return stol(str);
        
    }
};
