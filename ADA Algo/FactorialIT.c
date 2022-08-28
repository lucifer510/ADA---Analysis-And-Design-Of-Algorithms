// C Program To Find Factorial Using Iterative Approach.
#include <stdio.h>

int factorialIt(int num){
    if (num==0)
    {
        return 1;
    }
    else{
        int ans = 1;
        for (int i = 1; i <= 5; i++)
        {
            ans = ans*i;
        }
        return ans;
    }

}
int main(int argc, char const *argv[])
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorialIt(num));
    return 0;
}
