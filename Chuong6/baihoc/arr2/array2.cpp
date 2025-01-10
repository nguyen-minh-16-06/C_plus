#include <iostream>

using namespace std;

int main()
{
    // THAO TÁC VỚI MẢNG
    /*
    - Có 2 cách làm việc với mảng:
    + Thứ nhất: duyệt mảng và tìm kiếm (bài trước có sử dụng 1 vòng lặp for để duyệt (cách truyền thống))
    + Thứ hai: sắp xếp mảng
    */

    /*
    Bài này cũng để duyệt mảng nhưng vòng lặp for này DÀNH RIÊNG CHO MẢNG (kiểu dữ liệu danh sách)
    với cấu trúc sau:
    Bài toán: In toàn bộ phần tử của mảng dưới ra, nhưng sử dụng 1 cách viết khác của for dành riêng cho MẢNG.
    Đây là cấu trúc vòng lặp dành riêng cho các kiểu dữ liệu danh sách.
    */

    int arr[6] = {5, 3, 8, 7, 10, 2};

    /*
    - Phạm vi của bài này chỉ áp dụng cho MẢNG, còn trong kiến thức nâng cao thì nó sẽ áp dụng chung
    cho tất cả các cấu trúc dữ liệu (1 nhóm dữ liệu liên kết lại với nhau)
    - Đồng thời MẢNG (MẢNG NGUYÊN THUỶ) cũng là 1 trong những các cấu trúc dữ liệu và thực tế thì nó
    là kiểu cấu trúc dữ liệu đơn giản, dễ nhất và được hỗ trợ sẵn bởi C++, tức là không cần phải add
    bất kì thư viện nào.
    */

    // - Cú pháp có 2 phần và được ngăn cách nhau bởi 1 dấu hai chấm ( : )
    // - Thành phần bên trái là 1 biến lặp (đại diện cho các phần tử trong mảng)
    // Ví dụ: Trong mảng là 1 kiểu số nguyên => các phần tử là kiểu int => khai báo kiểu dữ liệu int x
    // x đại diện cho từng phần tử trong mảng (có thể là 5, 3, 8,..) lần lượt từng cái một
    // - Thành phần bên phải là mảng arr
    // - Với cách viết này thì rất gọn và nhiều ưu điểm:
    // 1. Không cần quan tâm tới số lượng phần tử (không cần phải khai báo liên quan gì tới số lượng phần tử)
    // 2. Khi thao tác với phần tử trên mảng thì chỉ cần làm việc với biến x mà thôi
    // Tên của vòng for này là FOR_EACH

    /* LƯU Ý:
    - Không phải lúc nào cũng áp dụng cách này, đây chỉ là 1 cách viết khác bổ trợ thêm.
    - Với cách viết x[i] thì ta có thể kiểm soát được vị trí của phần tử khi cần xử lý các thứ liên quan tới vị trí
    - Khi CHỈ QUAN TÂM tới giá trị của phần tử trong mảng (không quan tâm nó có bao nhiêu phần tử, vị trí phần tử trong mảng)
    thì sử dụng vòng for này.
    */
    for (int x : arr)
    {
        if (x % 2 == 0)
        {
            cout << x << " ";
        }
    }
    cout << "\n";

    /* Vấn đề thứ 2:
    - Sắp xếp: tức là trộn lẫn các phần tử hay là đảo lộn thứ tự phần tử của mảng theo 1 quy luật nào đó.
    - Ví dụ: Trong việc làm web bán hàng, thì người mua hàng online sẽ có nhu cầu như sắp xếp theo giá, theo độ
    phổ biến, bán chạy (dựa vào số lượng của khách hàng đã mua) => sắp xếp theo số đơn tăng dần.
    => Thuật toán SẮP XẾP rất là QUAN TRỌNG (Có rất nhiều thuật toán sắp xếp và nó phụ thuộc vào cấu trúc dữ liệu)
    - Với phạm vi nhập môn thì chỉ cần nắm được 1 cách sắp xếp mà đơn giản nhất.
    - Với dạng sắp xếp thì không thể dùng vòng lặp FOR_EACH bên trên được, vì sắp xếp thì liên quan đến thứ tự phần tử
    => Vòng lặp for cổ điển nó vẫn được ưu ái hơn (FOR_EACH chỉ tối ưu đoạn code và tuỳ vào tình huống cần sử dụng thôi)
    - Chẳng hạn như for, while hay if else, switch case. Mỗi cái sẽ được ứng dụng tuỳ vào 1 bài hay hoàn cảnh nhất định.
    */

    // Sắp xếp theo thứ tự tăng dần.
    int Array[6] = {5, 3, 8, 7, 10, 2};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (Array[j] < Array[i])
            {
                int temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }

    // Kiểm tra mảng sau khi sắp xếp
    for (int y : Array)
    {
        cout << y << " ";
    }
    cout << "\n";

    /*
    LƯU Ý: Với kích thước của mảng, không phải lúc nào cũng biết trước được phần tử mà ta cần là bao nhiêu
    không phải lúc nào ta cũng điền số 6 vào mãi được
    */

    int N = 6;

    int array[N] = {5, 3, 8, 7, 10, 2}; /* Expression must have a constant value: có nghĩa là biểu thức trong
    cặp ngoặc vuông [] cần có 1 hằng số không thể thay đổi giá trị, khi ta khai báo N = 6 thì N là 1 biến
    mà đã là 1 biến thì có thể thay đổi giá trị trong tương lai. Có thể thay thành N = 3;
    - Nếu muốn sửa thì thêm const int array[N] = {5, 3, 8, 7, 10, 2}; */

    const int M = 6; // Biến này không thể thay đổi giá trị trong tương lai

    int ar[M] = {5, 3, 8, 7, 10, 2};

    /*
    GIẢ SỬ: Bây giờ chúng ta muốn linh động số phần tử trong mảng thì phải làm như thế nào ?
    VÍ DỤ BÀI TOÁN: Yêu cầu nhập số lượng phần tử từ bàn phím thì phải làm sao ?
    - Bắt buộc phải là biến, không thể là hằng số được (Vì làm sao bản thân ta biết được mảng có bao nhiêu phần tử)
    - Thì cách giải quyết ở đây là khai báo biến thật to vào
    */

    const int MAX = 1000; // Thể hiện cái tối đa các phần tử mà nó có thể chứa.
    int n = 6;
    int arrayy[MAX] = {5, 3, 8, 7, 10, 2}; /* Ý nghĩa: Là mảng có tối đa 1000 phần tử, nhưng chúng ta chỉ làm việc với
    6 phần tử mà thôi */
    arrayy[6] = 9;
    n++; /* n++; : Có nghĩa là khi ta thêm 1 phần tử thì ta phải tăng int n = 6; lên n = 7 (n chính là số lượng phần tử
    mà ta đang kiểm soát) */

    arrayy[7] = 4;
    n++;

    arrayy[8] = 6;
    n++;

    arrayy[9] = 1;
    n++;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrayy[j] < arrayy[i])
            {
                int temp = arrayy[i];
                arrayy[i] = arrayy[j];
                arrayy[j] = temp;
            }
        }
    }

    for (int z : arrayy)
    {
        cout << z << " ";
    }
    // - Bây giờ các giá trị vô định ở cuối sẽ tự gán bằng 0, sẽ không còn vô định nữa bởi vì chúng thuộc tập MAX = 1000
    // - Đó cũng là 1 cách hạn chế lỗi trong chương trình, khi mà ta không biết ta sẽ khai báo 1 mảng có bao nhiêu phần tử
    // - Thì ta nên tạo 1 mảng thật to, sau đó ta làm việc với n phần tử bên trong mảng thôi.
    // - Với cách làm như này, ta có thể linh động thêm bớt các phần tử trong mảng được, không bị bó buộc trong 1 số lượng
    // cố định phần tử nào nữa, mà ta sẽ linh động hơn (miễn là giới hạn bé hơn 1000)

    return 0;
}