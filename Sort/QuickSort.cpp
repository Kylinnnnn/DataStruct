#include <stdio.h>
int Quick_Sort(int *nums,int left,int right){
	int temp;
	int partition = left;
	int index = left + 1;
	int j = right;
	if(left < right){
		for(int i = index;i <= j;i++){
		if(*(nums + partition) > *(nums + i)){
			temp = *(nums + i);
			*(nums + i) = *(nums + index);
			*(nums + index) = temp;
			index++;
			}
		}
		temp = *(nums + index -1);
		*(nums + index - 1) = *(nums + partition);
		*(nums + partition) = temp;
		Quick_Sort(nums,left,index - 2);
		Quick_Sort(nums,index,right);
	} 
	return 0;
}
int main(){
} 

