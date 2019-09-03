// namespace std have been included for this problem.

// Add any helper functions(if needed) above.
bool permutation(string input1, string input2)
{
    int buffer1[52];
    int buffer2[52];
    for(int i = 0; i < 52; i++){
        buffer1[i] = 0;
        buffer2[i] = 0;
    }
    
    for(int i = 0; i < input1.length(); i++){
        buffer1[input1[i]-65]++;
    }
    for(int i = 0; i < input2.length(); i++){
        buffer2[input2[i]-65]++;
    }
    for(int i = 0; i < 52; i++){
        if(buffer1[i] != buffer2[i]){
            return false;
        }
    }
    return true;
}