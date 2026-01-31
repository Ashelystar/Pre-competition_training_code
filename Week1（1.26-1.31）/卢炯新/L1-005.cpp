#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    string exam_id[1001];
    int exam_seat[1001];

    for (int i=0; i<N; i++){
        string id;
        int test_seat, seat;
        cin >> id >> test_seat >> seat;

        exam_id[test_seat] = id;
        exam_seat[test_seat] = seat;
    }

    int M;
    cin >> M;
    for (int i=0; i<M; i++){
        int query;
        cin >> query;

        cout << exam_id[query] <<" "<<exam_seat[query] << endl;

    }
    return 0;
}