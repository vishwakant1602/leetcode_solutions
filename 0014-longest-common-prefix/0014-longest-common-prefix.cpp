class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i=0; i<strs[0].size(); i++){
            for( string& s : strs){
                if( i == s.size() || s[i] != strs[0][i]){
                    return res;
                }
            }
            res += strs[0][i];

        }
        return res;

//         Idea: Pehle string (strs[0]) ko "reference" maan lo, aur uske har character ko baaki saari strings ke saath compare karo, ek-ek position pe.

    // Outer loop — strs[0] ke har index i pe jaate hain (character by character).
    // Inner loop — us index i par, har string s ko check karo:
    // Agar i == s.size() → matlab yeh string itni chhoti hai ki uska index i exist hi nahi karta (string khatam ho gayi) → prefix yahin tak hai, res return kar do.
    // Agar s[i] != strs[0][i] → matlab is position par character match nahi kar raha → prefix yahin tak hai, res return kar do.
    // Agar saari strings ne is index pe match kar liya (inner loop bina return kiye complete ho gaya), toh yeh character common prefix ka part hai → res mein add kar do.
    // Jab tak strs[0] ke saare characters check na ho jaayein, yeh process repeat karo.

        
    }
};