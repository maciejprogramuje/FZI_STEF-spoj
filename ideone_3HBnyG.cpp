#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
 
int main() {
    long int cities, moneyFromCity, moneyTotal, tempMoney;
    scanf("%ld", &cities);
    scanf("%ld", &moneyFromCity);
	moneyTotal = moneyFromCity;
    
	for(int i = 1; i < cities; i++) {
		scanf("%ld",&tempMoney);
		
		moneyFromCity = max(tempMoney, tempMoney + moneyFromCity);
		moneyTotal = max(moneyTotal, moneyFromCity);
	}
	
	if(moneyTotal < 0) {
		moneyTotal = 0;
	}
    printf("%ld", moneyTotal);
    
    return 0;
}