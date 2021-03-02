#include <stdio.h>

#pragma pack(1)
int main()
{
    //int size;
    struct bit_field{
        int a : 1;
    }bit_field1;
    
    printf("%d", sizeof(bit_field1));
    
    
    
    return 0;
}