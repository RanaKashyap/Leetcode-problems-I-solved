// MY SOLUTION
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words(s.size(), "");
        int wordCount = 0;
        string revWords = "";
        int i = s.size() - 1;
        int j = s.size() - 1;

        while (i >= 0)
        {
            
            if (s[i] != ' ')
            {
                j = i;
                while (s[j] != ' ' && j > 0) {
                    j--;
                }

                if (j == 0 && s[0] != ' ') {
                    words[wordCount] = s.substr(0,i+1);
                } else {
                    words[wordCount] = s.substr(j+1,i-j);
                }
                wordCount++;
                i=j;
            }

            i--;

        }

        for (const auto &word : words) {
            if (word != "") {
                if (wordCount > 1) {
                    revWords += word + " ";
                } else {
                    revWords += word;
                }
                wordCount--;
            }
        }

        return revWords;
    }
};

// DIFF APPROACH
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int left=0;
        int right=0;
        int i=0;
        while(i<n){
            while(i<n && s[i]==' ')i++;
            if(i==n)break; // to stop index going out of bounds
            while(i<n && s[i]!=' '){
                s[right++]=s[i++];
            }
            reverse(s.begin()+left,s.begin()+right);
            s[right++]=' ';
            left=right;
            i++;
        }
        s.resize(right-1);
        return s;
    }
};