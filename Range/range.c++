#include<iostream>
#include<vector>

using namespace std;

class Range {

 public: 
	int start;
	int limit;

	Range() {
        this -> start = 0;
        this -> limit = 0;
	}

    Range(int limit) {
        this -> start = 0;
        this -> limit = limit;
    }

    Range(int start, int limit) {

        this -> start = start < limit ? start : limit;
        this -> limit = limit < start ? start : limit;
    }

    void rstretch(){
        this -> limit = this -> limit + 1;
    
    }

    void rstretch(int jump){
    	limit += jump;
    }

    void lstretch(){
        this -> start = this -> start - 1;
    }

    void lstretch(int jump){
    	start -= jump;
    }

    void stretch() {
        this -> start--;
        this -> limit++;
        
    }
    void stretch(int margin) {
        this -> start -= margin;
        this -> limit += margin;
    }

    void squeeze() {
        this->start++;
        this->limit--;

        

    }

};
