namespace average{
    double grade(double grades[], int classSize)
    {
        double gradeSum = 0;
        for(int i = 0 ; i < classSize ;i++){
            gradeSum += grades[i];
        }
        return gradeSum / classSize;
    }
}
