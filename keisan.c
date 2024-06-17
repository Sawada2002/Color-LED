#include <stdio.h>

int main(void) {
    /* 
    firstNum:１つ目の数
    secondNum:２つ目の数
    result：結果
    select：計算方法の選択
    value：前回の値
    */
    int firstNum, secondNum, result = 0; 
    int select = 0;
    int value = 0; 

    while (1) {
        if (value == 1) { //下の ※1 を参照
            firstNum = result;
            printf("前回の結果（%d）を1つ目の数として使用します．\n", result);
        } else {
            printf("1つ目の数を入力してください．");
            scanf("%d", &firstNum); //2つ目の数を選択
        }

        printf("2つ目の数を入力してください．");
        scanf("%d", &secondNum); //１つ目の数を選択

        printf("2つの値をどうしますか？．\n");
        printf("(1)足し算，(2)引き算，(3)掛け算，(4)割り算\n");
        scanf("%d", &select); //計算方法選択

        if (select == 1) {
            result = firstNum + secondNum;
            printf("結果: %d + %d = %d\n", firstNum, secondNum, result); //最初の数 + 次の数 = 結果 と表記
        } 
        else if (select == 2) {
            result = firstNum - secondNum;
            printf("結果: %d - %d = %d\n", firstNum, secondNum, result); //最初の数 - 次の数 = 結果 と表記
        } 
        else if (select == 3) {
            result = firstNum * secondNum;
            printf("結果: %d * %d = %d\n", firstNum, secondNum, result); //最初の数 × 次の数 = 結果 と表記
        } 
        else if (select == 4) {
            if (secondNum != 0) {
                result = firstNum / secondNum;
                printf("結果: %d / %d = %d\n", firstNum, secondNum, result); //最初の数 ÷ 次の数 = 結果 と表記
            } else {
                printf("エラー: 0で割ることはできません．\n");
                continue;  
            }
        } else {
            printf("選択した数値がおかしいです．もう一度入力してください\n");
            continue;  
        }

        printf("もう一度計算しますか？\n（前回の結果を使う場合は '1' を，使わない場合は '2' ，終了する場合は '0' を入力してください）\n");
        scanf("%d", &value); //前回の値を入力するときは1，使わない場合は2で判定 ※1

        if (value == 0) {
            break;
        }
    }

    return 0;
}
