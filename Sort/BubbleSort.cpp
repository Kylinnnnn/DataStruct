#include <iostream>
using namespace std;
void *BubbleSort(int *nums,int length){
    for (int i = 0; i < length;i++){
        for (int j = 0; j < length - i;j++){
            if(nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);
        }
    }
    return 0;
}
int main(){  
}