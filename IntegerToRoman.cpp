class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        vector<pair<int,char>> curr = {{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'},{0,'P'},{0,'P'}};
        for(int i=curr.size()-3;i>=0;i-=2){
            int l = curr[i].first;
            int c = num/l;
            if(c==0){
                continue;
            }
            if(c==1) res += curr[i].second;
            if(c==2){
                res += curr[i].second;
                res += curr[i].second;
            }
            if(c==3){
                res += curr[i].second;
                res += curr[i].second;
                res += curr[i].second;
            }
            if(c==4){
                res += curr[i].second;
                res += curr[i+1].second;
            }
            if(c==5){
                res += curr[i+1].second;
            }
            if(c==6){
                res += curr[i+1].second;
                res += curr[i].second;
            }
            if(c==7){
                res += curr[i+1].second;
                res += curr[i].second;
                res += curr[i].second;
            }
            if(c==8){
                res += curr[i+1].second;
                res += curr[i].second;
                res += curr[i].second;
                res += curr[i].second;
            }
            if(c==9){ 
                res += curr[i].second;
                res += curr[i+2].second;
            }
            num -= l*c;
        }
        return res;
    }
};