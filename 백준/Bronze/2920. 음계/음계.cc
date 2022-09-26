#include <stdio.h>

int main(){
    int arr[8];
    int point = 0, unpoint = 0;
    for(int i = 0; i < 8; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < 4; i++){
        if(arr[i] == i+1 && arr[i] + arr[7 - i] == 9)
            point++;
        else if(arr[7-i] ==  i+1 && arr[i] + arr[7-i] == 9)
            unpoint++;
    }
    
    if(point == 4)
        printf("ascending");
    else if(unpoint == 4)
        printf("descending");
    else
        printf("mixed");
    
}