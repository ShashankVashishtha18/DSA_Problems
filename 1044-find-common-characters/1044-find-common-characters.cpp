class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char , int> min_freq;
        vector<string> answer;

        for(char ch='a'; ch<='z'; ch++){  // filling minimum freq to maximum
            min_freq[ch] = 1000;
        }       

        for(auto word : words){  // processing each word

            unordered_map<char , int > freq;
            for(auto ch : word){
                freq[ch]++;
            }
            for(char ch='a'; ch<='z';ch++){
                min_freq[ch] = min(freq[ch] , min_freq[ch]);
            }
        }
        for(char ch='a'; ch<='z'; ch++){
                
                while(min_freq[ch]>0){
                    answer.push_back(string(1 ,ch));
                    min_freq[ch]--;
                }

            }
        return answer;
    }
};