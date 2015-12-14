#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> restorePattern(vector<string> start, vector<string> target){
    vector<string> ret;

    return ret;
}

int main(int, char**){
    int H;
    cin >> H;
    vector<string> start(H),target(H);
    for(int i = 0; i < H; ++i){
        cin >> start[i];
    }
    for(int i = 0; i < H; ++i){
        cin >> target[i];
    }

    vector<string> ret = restorePattern(start,target);
    cout << ret.size();
    for(auto line : ret){
        cout << line << endl;
    }
    return 0;
}
