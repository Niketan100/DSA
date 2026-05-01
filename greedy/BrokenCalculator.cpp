class Solution {
public:
    int brokenCalc(int startValue, int target) {
        // multiply by 2 || subtract by 1 -> thse are options we have 
        // lets just reverse them -> divide and add to make it a better divide 

        //  Example if 11 -> target and startValue is 2 -> 
        //  {2} *2 -1 *2 *2 -1 -> 6 steps 
        //  {2} * 2 *2 -1 -1 * 2 -1-> 7 steps 

        //  closest number is giving better result so make target was 11 and ultimately if i have to reach even number i will come to closes greater even number it can be itself or nect number

        //  11 +1 -> (which in our tranformations mean kind of subtractions which is allowed operation 
        //     1 operation allowed you might say we are allowed to sub not add but adding is heling us better
        //     so 12/2 = 6/2 -> 3/2 -> 1 -> remaining % startingValue + counter so far 

        //     i hope you understand what the hell is goin on 
        int counter = 0;

        while(target > startValue){
            if(target %2 != 0){
                target++;
                
            }else{
                target /=2;
            }
            counter++;
        }
        return counter + (startValue - target);
    }
};