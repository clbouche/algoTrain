//c'est paaaaaaas du tout optiiiiiiii loliloool

int solution(int X, int Y, int D) {
    int j = 0;
    while(X < Y)
    {
        X += D;
        j++;
    }
   return j;
}

//plus opti youhou 

#include <tgmath.h> 

int solution(int X, int Y, int D) {
    return (ceil((double)(Y - X) / D));
}
