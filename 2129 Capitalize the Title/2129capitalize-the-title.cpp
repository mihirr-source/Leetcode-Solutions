class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i =0; i<title.size(); i++){
            title[i] = tolower(title[i]);
        }
        if(title.length() >2 && title[1]!=' ' && title[2]!=' '){
            title[0]=toupper(title[0]);
        }
        for(int i = 1; i+2<title.size(); i++){

            if(title[i-1] == ' ' && title[i+1]!= ' ' && (title[i+2]!= ' ' && title[i+2] != '\0') ){
                title[i]= toupper(title[i]);
            }
        }
        return title;
    }
};