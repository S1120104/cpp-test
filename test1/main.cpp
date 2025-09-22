#include <iostream>
#include <iomanip> // 引入 iomanip 庫以控制輸出格式

int main() {
    float fahrenheit, celsius;

    // 輸入華氏溫度
    std::cout << "請輸入華氏溫度 (F)：";
    std::cin >> fahrenheit;

    // 華氏轉攝氏
    celsius = (fahrenheit - 32) * 5 / 9;

    // 輸出結果，保留兩位小數
    std::cout << std::fixed << std::setprecision(2); // 設定輸出格式
    std::cout << "攝氏溫度 (C)：" << celsius << std::endl;

    return 0;
}


   
               


