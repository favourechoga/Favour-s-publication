#include <iostream>
#include <vector>

int calculateExpectedProfit(std::vector<int> &profits) {
    int expectedProfit = 0;
    for (int i = 0; i < profits.size(); i++) {
        int monthlyProfit = profits[i];
        for (int j = 1; j < 12; j++) {
            monthlyProfit *= 2;
        }
        expectedProfit += monthlyProfit / 12;
    }
    return expectedProfit;
}

int main() {
    std::vector<int> monthlyProfits = {9000, 4000, 5000};
    int lastYearsAverageProfit = 500000;

    int expectedAverageMonthlyProfit = calculateExpectedProfit(monthlyProfits);
    int totalAnnualProfit = expectedAverageMonthlyProfit * 12;

    std::cout << "Expected Average Monthly Profit: " << expectedAverageMonthlyProfit << std::endl;
    std::cout << "Total Annual Profit: " << totalAnnualProfit << std::endl;

    if (expectedAverageMonthlyProfit > lastYearsAverageProfit) {
        std::cout << "Congratulations! Your average profit for 2023 is higher than last year's. It's time to get married!" << std::endl;
    } else {
        std::cout << "Sorry to say, but your average profit for 2023 is not higher than last year's. It's better to postpone the marriage plan for now." << std::endl;
    }

    return 0;
}
