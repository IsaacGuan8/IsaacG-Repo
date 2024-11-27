#ifndef Points_hpp
#define Points_hpp

class Points{
    public:
        Points(int x, int y);
    
        Points operator + (const Points& other)const;
        Points operator + (int value)const;
        
        void display()const;
    
        Points& operator ++ ();
        Points operator ++ (int);
    
    private:
        int xCoordinate;
        int yCoordinate;
};

#endif
