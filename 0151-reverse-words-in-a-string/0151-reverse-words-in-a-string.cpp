class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end()); // pahle ans ko reverse kr diya

        for(int i = 0;i<n;i++){ //poori string traverse krne ke liye
            string word = ""; //single word handle 
            while(i<n && s[i] != ' '){ // jb tk word hai ya string mae space na aajayee to track the single word
                word += s[i];
                i++;  //word add krdiyee abhi string revrsed hai
            }

            reverse(word.begin(), word.end()); // individual word jo revrsed the unko revrse krke theek krdiya

            if(word.length() > 0)
                ans += " "+ word; // finally ek space ke saath ans mae add krdiya
        }
        return ans.substr(1); //ist space jo extra tha usko hta diya 1 index se start krke
        
    }
};