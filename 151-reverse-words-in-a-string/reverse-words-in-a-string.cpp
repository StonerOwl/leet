class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while(ss >> word) {
            words.push_back(word);
        }

        int left = 0;
        int right = words.size() - 1;

        while(left < right) {
            swap(words[left], words[right]);
            left++;
            right--;
        }

        string result = "";

        for(int i = 0; i < words.size(); i++) {
            result += words[i];

            if(i != words.size() - 1)
                result += " ";
        }

        return result;
    }
};