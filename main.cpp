struct cmp {
    bool operator() (pair<string,int> p1,pair<string,int> p2) const{
        if(p1.ff>p2.ff){
            return true;
        }
        else if(p1.ff==p2.ff){
            return p1.ss>p2.ss;
        }
        else{
            return false;
        }
    }
};
