/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/

#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    
    //รับค่าพิกัดจุด A
    printf("Input A Point :\n");
    scanf("%f %f", &x1, &y1);
    
    //รับค่าพิกัดจุด B
    printf("Input B Point :\n");
    scanf("%f %f", &x2, &y2);
    
    //คำนวณหาจุดกึ่งกลาง
    float midX = (x1 + x2) / 2;
    float midY = (y1 + y2) / 2;
    
    //แสดงผลลัพธ์
    printf("Mid Point of A and B is ( %.1f, %.1f )\n", midX, midY);
    
    return 0;
}