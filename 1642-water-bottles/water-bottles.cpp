class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;
        while(empty >= numExchange){
            int exchange = empty / numExchange;
            total += exchange;
            empty = exchange + empty % numExchange;
        }
        return total;
    }
};