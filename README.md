# 📚 C++ Master Database & Algorithm Curriculum

Chào mừng bạn đến với kho lưu trữ mã nguồn và cơ sở dữ liệu học tập C++ của tôi! Kho lưu trữ này được thiết kế như một **Database thu nhỏ**, quản lý toàn bộ lộ trình từ lập trình cơ bản đến các thuật toán nâng cao.

---

## 🏛️ I. Quy định chung của Thư mục Tổng (Database Rules)

Để giữ cho kho code luôn gọn gàng, dễ tìm kiếm và chuẩn chỉnh, mọi thư mục con và file đều phải tuân thủ các quy tắc sau:

1. **Cấu trúc đặt tên thư mục:** Viết thường, không dấu, ngăn cách bằng dấu gạch dưới (`_`) hoặc gạch ngang (`-`).
   * *Ví dụ đúng:* `level_00_co_ban`, `level_05_mang_va_xau`, `knight_tour`.
2. **Cấu trúc đặt tên file code:** Đặt tên ngắn gọn, có ý nghĩa hoặc theo số thứ tự bài tập.
   * *Ví dụ:* `bai_01.cpp`, `kt.cpp`, `linear_search.cpp`.
3. **Quy chuẩn trong mỗi thư mục cấp con:**
   * Mỗi thư mục bài tập nên có kèm một file ghi chú ngắn (`README.md` riêng hoặc bình luận trực tiếp trong code) giải thích cách giải hoặc độ phức tạp thuật toán.
4. **Giới hạn dung lượng:** Tránh đưa các file dữ liệu biên dịch nặng (`.exe`, `.obj`, thư mục `.vs`, `bin`, `obj`) lên GitHub.

---

## 🚀 II. Lộ trình bài tập C++ (Mức 0 - Mức 10)

Bảng tổng hợp dưới đây phân chia các cấp độ từ nhập môn đến thi học sinh giỏi / chuyên sâu:

| Mức độ | Tên phân vùng (Thư mục) | Nội dung chính & Kiến thức trọng tâm | Trạng thái |
| :---: | :--- | :--- | :---: |
| **Level 0** | `level_00_nhap_mon` | Cài đặt môi trường, cú pháp cơ bản `cout`, `cin`, kiểu dữ liệu, toán tử. | 🟢 Hoàn thành |
| **Level 1** | `level_01_dieu_kien` | Cấu trúc rẽ nhánh `if-else`, `switch-case`, toán tử ba ngôi. | 🟢 Hoàn thành |
| **Level 2** | `level_02_vong_lap` | Vòng lặp `for`, `while`, `do-while`, thuật toán vét cạn cơ bản. | 🟢 Hoàn thành |
| **Level 3** | `level_03_ham_va_module` | Viết hàm, truyền tham trị/tham chiếu (`pass by value/reference`), đệ quy cơ bản. | 🟢 Hoàn thành |
| **Level 4** | `level_04_mang_1_chiều` | Mảng tĩnh `vector`/mảng một chiều, tìm kiếm, sắp xếp cơ bản (Bubble, Selection). | 🟢 Đang làm |
| **Level 5** | `level_05_mang_2c_va_xau` | Ma trận (mảng 2 chiều), xử lý chuỗi ký tự (`string`, `stringstream`). | 🔄 Sắp tới |
| **Level 6** | `level_06_con_tro_va_struct` | Con trỏ (`pointers`), cấp phát động, cấu trúc dữ liệu tự định nghĩa (`struct`). | 🔄 Sắp tới |
| **Level 7** | `level_07_stl_cpp` | Thư viện chuẩn STL (`vector`, `pair`, `map`, `set`, `stack`, `queue`). | 🔄 Sắp tới |
| **Level 8** | `level_08_thuat_toan_tim_kiem` | Tìm kiếm nhị phân (`Binary Search`), thuật toán tham lam (`Greedy`), Two Pointers. | 🔄 Sắp tới |
| **Level 9** | `level_09_quy_hoach_dong` | Quy hoạch động cơ bản và nâng cao (DP 1 chiều, 2 chiều, Knapsack, LCS). | 🔄 Sắp tới |
| **Level 10** | `level_10_do_thi_va_nang_cao` | Đồ thị (`BFS`, `DFS`, `Dijkstra`), Quay lui nâng cao (`Backtracking` như bài Mã đi tuần). | 🔄 Sắp tới |

---

## 🛠️ III. Cách tổ chức thư mục trên máy tính của bạn

Để khớp với README trên, trên máy tính của bạn nên sắp xếp cấu trúc thư mục như sau:

```text
cpp-database/
│
├── level_00_nhap_mon/
│   ├── hello_world.cpp
│   └── tinhtoan.cpp
│
├── level_01_dieu_kien/
│   └── giai_phuong_trinh.cpp
│
├── ... (các level tiếp theo)
│
└── knight_tour/               <-- Thư mục chuyên đề nâng cao (Level 10)
    └── kt.cpp