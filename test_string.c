#include <stdio.h>

int main() {
    FILE *file;
    char line[369]; // Mảng để lưu trữ dòng được đọc

    // Mở tệp để đọc
    file = fopen("csram_000.mem", "r");
    
    // Kiểm tra xem tệp có tồn tại không
    if (file == NULL) {
        printf("Không thể mở tệp.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }
    int i = 0;
    // Đọc từng dòng từ tệp và hiển thị {
    while (fgets(line, sizeof(line), file) != NULL || i <256){;
        printf("Dòng %d: %s\n", i, line);
        i++;
    }

    // Đóng tệp
    fclose(file);

    return 0; // Kết thúc chương trình mà không có lỗi
}
