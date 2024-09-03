class Solution {
public:
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int size = 26;
    int check(char target) {
        int left = 0;
        int right = size - 1;
        while (left <= right) {
            if (letters[left] == target) return left;  
            if (letters[right] == target) return right;
            left++;
            right--;
        }
        return -1; 
    }
    int getLucky(string s, int k) {
        int check_sum = 0;
        for (auto i : s) {
            int cnt = check(i) + 1;
            while(cnt) {
                check_sum += cnt % 10;
                cnt /= 10;
            }
        }
        cout<<check_sum<<endl;
        while(k > 1) {
            int for_check = 0;
            while(check_sum) {
                for_check += check_sum % 10;
                check_sum /= 10;
            }
            check_sum = for_check;
            k--;
        }
        
        return check_sum;
    }
};