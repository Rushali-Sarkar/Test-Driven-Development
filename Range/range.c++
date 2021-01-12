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
        this -> start = start;
        this -> limit = limit;
    }
};
