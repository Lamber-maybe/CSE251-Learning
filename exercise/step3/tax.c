//
// Created by Lamber on 2022/11/4.
//
#include <stdio.h>
#include <stdlib.h>

/*
 * 1. 新建文档
 * 2. 根据年收入和免税额计算 纳税人所欠税款
 * 3. 提示用户输入他/她的年收入
 *    如年收入 < 9350 美元，则所欠税款为0。输出0并退出程序
 * 4. 提示用户指定申报状态 1) single 2) married, filing jointly 3) married, filing separately
 */

int main(){
    double annualIncome, taxableIncome;
    int option;
    int dependents;
    int children;

    printf("Enter your annual income: ");
    scanf("%lf", &annualIncome);

    if (annualIncome < 9350.0) {
        printf("0");
        exit(0);
    }

    printf("What is your filing status?\n");
    printf("1) single\n");
    printf("2) married filing jointly\n");
    printf("3) married filing separately\n");

    printf("Please enter a number: ");
    scanf("%d", &option);

    switch(option){
        case 1:
            dependents = 1;
            taxableIncome = annualIncome - 5700.0 - dependents * 3650;
            break;
        case 2:
            printf("How many children do you have? ");
            scanf("%d", &children);
            dependents = 2 + children;
            taxableIncome = annualIncome - 11400.0 - dependents * 3650;
            break;
        case 3:
            dependents = 1;
            taxableIncome = annualIncome - 5700.0 - dependents * 3650;
            break;
    }

    /*
     * 计算获得需要纳税的部分的金额，
     * 现在根据表格计算需要缴纳多少税
     * 需要纳税的部分 taxableIncome
     */

    if(0 <= taxableIncome && taxableIncome <= 16750){
        printf("%.2lf\n", taxableIncome * 0.1);
    }

    else if(16750 < taxableIncome && taxableIncome <= 68000){
        printf("%.2lf\n", 1675.0 + (taxableIncome-16750)*0.15);
    }

    else if(68000 < taxableIncome && taxableIncome <= 137300){
        printf("%.2lf\n", 9362.5 + (taxableIncome-68000)*0.25);
    }
    else {
        printf("%.2lf\n", 26687.5 + (taxableIncome-137300)*0.28);
    }
}
