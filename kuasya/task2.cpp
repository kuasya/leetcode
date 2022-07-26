class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        // Version 1
        // does not work
        /*
        int n = words.size();
        string element;
        int flag = 0;
        int flag2 = 0;
        
        for (int i = 0; i < n; i++) {
            element = words[i];
            int x = 0;
            int len_s = 0;  
            for (int j = 0; j < element.size(); j++) {
                if (j != 0 && element == words[i-1]){
                    flag = flag + flag2;
                    break;
                }
                if (x == s.size()) {break;} 
                while (x < s.size()){
                    //cout << element[j]<<s[x]<<j<<len_s<<" ";
                    
                    if (element[j] == s[x]) {
                        len_s = len_s + 1;
                        x = x + 1;
                        break;
                    }
                    x = x + 1;                
                }
                if (len_s == element.size()) {
                    flag = flag + 1;
                    flag2 = 1;
                } 
                else {
                    flag2 = 0;
                }
            }      
            
        } */
        
        
        
        // Version 2
        // стало все еще хуже, но мы не сдаемся
        // (успех был так близок.....) не проходит последний тест 53/53 Time Limit Exceeded
        // время спать (нет)
        // время начать сначала см. Version 3
        
        /*int flag = 0;
        int i = 0;
        while (i < words.size()) {
            string word = words[i];
            int len_word = 0;
            int id_word = 0;

            for (int j = 0; j < s.size(); j++){
                if (word[id_word] == s[j]){
                    len_word += 1;
                    id_word += 1;
                }
                if (len_word == word.size()){
                    flag += 1;
                    break;
                }
            }  
            i += 1;
            int same_word = 0; 
            // поиск таких же элементов, подсчет их и их удаление
            same_word = count(cbegin(words), cend(words), word);
            i -= same_word;
            
            if (len_word == word.size()){
                flag += same_word-1;
            }
            for (int d=0;d<same_word;d++){words.erase(find(words.begin(), words.end(), word));}
            //if (same_word > 1){cout << word << "_" << same_word << words.size() <<" ";}
            if (i < 0){i = 0;}  
        }*/
        
        
        
        // Version 3
        // not completed
        int i = 0;
        string letter = s[0];
        int n_letter = 1;
        vector<string> ivector;
        
        while (i < s.size()) {
            if (s[i] == letter && n_letter > 1) {
                
            }
        }
        
        return flag;
        
    }
};
