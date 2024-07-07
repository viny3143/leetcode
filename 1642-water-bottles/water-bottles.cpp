class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int drink_bottles = numBottles;
        while(numBottles >= numExchange)
        {
            int newBottles = numBottles / numExchange;
            drink_bottles += newBottles;   
            numBottles = newBottles + (numBottles % numExchange);
        }
        return drink_bottles;
    }
};