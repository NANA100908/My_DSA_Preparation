Problem Link : https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true

//---------------------------------------------------------Solution-------------------------------------------//
vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}


//--------------------------------------------------------Algorithm------------------------------------------//

Simple one line solution using C++ stl library function reverse();