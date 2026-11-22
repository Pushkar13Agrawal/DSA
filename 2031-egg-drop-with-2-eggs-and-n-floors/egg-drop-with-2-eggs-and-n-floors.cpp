class Solution {
public:
    int twoEggDrop(int n) {
        int moves = 0;
        int floor = 0;
        while (floor < n) {
            moves++;
            floor += moves;
        }

        return moves;
    }
};