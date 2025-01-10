#include <stdio.h>

using namespace std;

int main()
{
    int tuoi = 19;
    char xep_loai = 'A';
    char ho_ten[30] = "Nguyen Minh"; // Cách khai báo chuỗi kí tự (Ở C không có lệnh string)

    // In kí tự ra trong C sử dụng prinf();
    printf("Xin chao toi la Minh\n");
    printf("Minh nam nay %d tuoi", tuoi); // d: decimal - số thập phân
    /*%d: kí tự trích xuất số (int, float,...), và liệt kê biến cần trích xuất ở cuối
    chuỗi*/

    printf("\nMinh duoc xep loai %c", xep_loai);
    /*%c: kí tự trích xuất kí tự (char), và liệt kê biến cần trích xuất ở cuối chuỗi*/

    printf("\nToi ten la %s", ho_ten);
    /*%s: kí tự trích xuất chuỗi kí tự (string), và liệt kê biến cần trích xuất ở cuối chuỗi*/

    printf("\n%s duoc xep loai %c", ho_ten, xep_loai);
    // Kết hợp 2 kí tự %s và %c

    // Nhập kí tự vào trong C sử dụng scanf();
    printf("\nNhap ten: ");
    scanf("%[^\n]s", ho_ten);
    /* ^: nhận toàn bộ các kí tự cho đến khi gặp dấu \n thì xuống dòng thì mới
    kết thúc 1 lần gặp*/

    printf("\nNhap tuoi: ");
    scanf("%d", &tuoi);

    printf("\n%s duoc xep loai %c va nam nay %d tuoi", ho_ten, xep_loai, tuoi);
}