class Solution {
public:
    int countOperations(int num1, int num2) {
        // int a = min(num1, num2);
        // int b = max(num1, num2);
        // if(num1%2 == num2%2){ //either both even or both odd - same parity
        //     return (b/a + b%a );
        // } else {
            
        // } 
        long sum = 0;
        while(num1!=0 && num2!=0){
            int a = min(num1, num2);
            int b = max(num1, num2);
            long div = b/a;
            sum+=div;
            num1 = a;
            num2 = b%a;
        }
        return sum;
    }
};