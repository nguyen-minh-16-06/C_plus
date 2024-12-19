#include <iostream>

using namespace std;

int main()
{
    // MẢNG ĐA CHIỀU
    // Mảng đa chiều: Ban đầu ta có 1 mảng bên trong có 5 phần tử và bên trong sẽ là các mảng con
    int a[5] = {0, 1, 2, 3, 4};
    /*
    LƯU Ý: - Mảng trên có 5 phần tử và các phần tử có kiểu dữ liệu là số nguyên, nhưng nếu ta
    cho 4 thành 4.5 thì nó sẽ tự động ép kiểu 4.5 về 4.
    - Trừ khi là những kiểu dữ liệu không thể ép được, ví dụ như string {0, 1, 2,.., "abc"};
    thì sẽ có báo lỗi và dấu gạch đỏ ở bên dưới.
    */
    /*
    ĐẶC BIỆT: Với mỗi phần tử, nó không chỉ là 1 giá trị đơn mà nó có thể là 1 mảng con bên trong nữa
    (tức là MẢNG TRONG MẢNG) <=> FOR TRONG FOR
    - Ban đầu ta có 1 mảng bên trong có 5 phần tử và bên trong sẽ là các mảng con => khái niệm này được gọi là
    MẢNG ĐA CHIỀU
    - Giống như việc học toán vậy, có khái niệm hệ toạ độ Ox, hệ toạ độ Oxy hay Oxyz (mảng cũng giống như vậy)
    - Từ chiều trong MẢNG ĐA CHIỀU nó giống với chiều không gian trong hình học vậy.
    - Muốn khai báo thêm 1 chiều cho mảng thì ta sẽ thêm 1 cặp ngoặc vuông nữa ở phần khai báo.
    */

    int b[5][2] = {{0, 1}, {0, 1}, {0, 1}, {0, 1}, {0, 1}}; // Ban đầu mảng gồm có 5 phần tử, và ta muốn 5 phần tử này
    // là 1 mảng con gồm 2 phần tử thì ta thêm 1 cặp ngoặc vuông phía sau [5] là [2] như trên.
    // - Thay vì ở bên trong là các giá trị đơn thì nó sẽ chuyển thành 1 mảng con gồm 2 phần tử nữa {{0, 1}, {0, 1},...}
    // => Như vậy ta có 1 mảng gồm có 5 phần tử, và với mỗi phần tử lại là 1 mảng gồm 2 phần tử.
    // - [5] là số lượng phần tử to, [2] là số lượng phần tử con.
    // - Tương tự với mảng 3 chiều thì ta thêm [] ở sau [2], ví dụ: b[5][2][3]. Tuy nhiên theo thực tế thì mảng 2 chiều
    // thường ít gặp và với mảng 3 chiều thì lại càng hiếm nữa.
    // ĐẶC BIỆT: Trừ duy nhất 1 mảng 2 chiều đặc biệt mà mọi người thường gặp và thường xuyên nhất chính là MẢNG KÍ TỰ.

    string s[5] = {
        "Nguyen Minh",
        "Ozawa",
        "Rei Kamiki",
        "KONAN KOYOI",
        "Ai Uehara"};

    /* HÃY ĐỂ Ý RẰNG, đây là chỉ là mảng 1 chiều thôi (1 chiều thì chỉ 1 cặp ngoặc vuông). Tuy nhiên thực chất đây có thể
    coi là 1 mảng 2 chiều của các kiểu dữ liệu char (bởi vì mỗi 1 phần tử của kiểu dữ liệu string như này thì nó lại là 1
    mảng của kí tự char)
    - Qua ví dụ trên đây cũng cho ta thấy, với khái niệm mảng 2 chiều hay 3 chiều cũng chỉ mang tính chất tương đối mà thôi
    (tức là ý nghĩa ở đây rằng bên trong mảng có thể sẽ là 1 tập hợp 1 cái cấu trúc dữ liệu nó phức tạp hơn, KHÔNG CHỈ LÀ
    MẢNG) và ta sẽ học Struct hay con trỏ trong những bài sau.
    => Linh động hơn trong khái niệm MẢNG hơn.
    */

    /*
    DUYỆT MẢNG 2 CHIỀU
    */
    //  c[m][n] -> mxn phần tử
    int c[5][2] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}}; // 5x2 = 10

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
            /*
            Với [i] là thể hiện thuộc mảng con nào
            Ví dụ: i = 1 thì {0, 1},
                   i = 2 thì {2, 3}
               hay i = 3 thì {4, 5},...
            */
            /*
            Với [j] thể hiện phần tử con nào trong mảng con
            Ví dụ:
            j = 0 thì trong mảng con i = 1, j = {0}, nếu j = 1 thì trong mảng con i = 1, j = {1}
            j = 0 thì trong mảng con i = 2, j = {2}, nếu j = 1 thì trong mảng con i = 1, j = {3}
            Tương tự với các mảng con i khác
            */
        }
        cout << "\n";
    }

    string strs[5] = {               // - Lập trình C thì có thể viết như sau: char s[5][10]:
                      "Nguyen Minh", // + Có thể hiểu là ta gồm có 5 chuỗi kí tự và mỗi chuỗi kí tự sẽ có tối đa là 10 chữ (10 ký tự)
                      "Ozawa",       // + Ở đây là 5 chuỗi kí tự (hiểu đơn giản là 1 mảng các kiểu dữ liệu char)
                      "Rei Kamiki",
                      "KONAN KOYOI",
                      "Ai Uehara"};

    for (int i = 0; i < 5; i++)
    {
        /*
        length() có nghĩa là độ dài của chuỗi, về mặt array (mảng) mà nói thì nó chính là số các phần tử trong mảng
        con ("Nguyen Minh")
        Ví dụ: "Nguyen Minh" thì có 12 kí tự với Nguyen 6 kí tự space là 1 kí tự và Minh 4 kí tự
        "Ozawa" thì có 5 kí tự
        */
        for (int j = 0; j < s[i].length(); j++) // Đây là cách duyệt sâu kí tự
        {
            cout << strs[i][j] << " ";
        }
        cout << "\n";
        /*
        - Sau khi in ra thì các kí tự sẽ được in rời ra như: N g u y e n  M i n h, thực chất nó chỉ là chuỗi kí tự,
        nhưng được in ngắt ra thành từng kí tự riêng. Vậy bản chất ở đây String chỉ đơn giản là mảng 2 chiều mà thôi.
        - Vậy tại sao chúng ta không dùng "char s[5][10]", có thể hiểu rằng String là 1 kiểu dữ liệu rất là phổ biến
        và chúng ta phải xử lý hay làm việc trên kiểu dữ liệu này, thế nên với với cách khai báo char s[5][10] là
        cách khai báo 1 string kiểu nguyên thuỷ (không có gì cả). Trong khi nếu chúng ta làm với kiểu "string strs[5]"
        thì có rất nhiều cơ chế, tính/chức năng mở rộng bên trong nó, giúp chúng ta làm việc với string 1 cách nhanh
        hơn
        */
    }

    /*
    => VẬY HIỂU ĐƠN GIẢN RẰNG MẢNG 2 CHIỀU LÀ 1 MẢNG CON TRONG 1 MẢNG LỚN VÀ ĐỂ DUYỆT MẢNG 2 CHIỀU THÌ CHÚNG TA SỬ DỤNG
    VÒNG LẶP LỒNG NHAU.
    */

    return 0;
}