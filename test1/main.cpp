#include <iostream>
using namespace std;

int main() {
    float scores[3];  // 儲存三次分數
    float sum = 0;    // 分數總和
    bool isFail = false; // 用來檢查是否有分數低於 40

    // 輸入三次分數
    for (int i = 0; i < 3; i++) {
        cout << "請輸入第 " << i + 1 << " 次的分數: ";
        cin >> scores[i];
        sum += scores[i];  // 累加分數
        if (scores[i] < 40) {
            isFail = true; // 只要有一個分數低於 40 就標記為不及格
        }
    }

    // 計算平均
    float average = sum / 3;

    // 判斷是否及格
    if (isFail || average < 60) {
        cout << "此學科不及格" << endl;
    } else {
        cout << "平均分數是: " << average << "，此學科及格" << endl;
    }

    return 0;
}

   
               


