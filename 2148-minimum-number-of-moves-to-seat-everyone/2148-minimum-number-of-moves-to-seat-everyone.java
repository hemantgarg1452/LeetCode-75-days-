class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        //first we sort both the arrays eg: [3 1 5] and [2 7 4]
        Arrays.sort(seats);    //[1 3 5]
        Arrays.sort(students); //[2 4 7]

        int step=0;

        for(int i=0; i<seats.length; ++i){ //iterate until all seats covered OR we can also use students.length. 
            step = step + Math.abs(seats[i]-students[i]); // subtract the seats[i] position and student[i]...[1 1 2] result steps
        }
        return step; 
    }
}

//C++ Approach------->
    // sort(seats.begin(), seats.end());
    // sort(students.begin(), students.end());

    // int steps=0;

    // for(int i=0; i<seats.size(); ++i){
    //     steps += abs(seats[i]-students[i]); 
    // }
    // return steps;
