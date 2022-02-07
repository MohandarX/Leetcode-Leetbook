int maxProfit(int* prices, int pricesSize)
{
    int total = 0;
    int index = 0;
    while (index < pricesSize)
    {
        while (index < pricesSize - 1 && prices[index] >= prices[index + 1])
        {
            index++;
        }
        int min = prices[index];
        while (index < pricesSize - 1 && prices[index + 1] >= prices[index])
        {
            index++;
        }
        total += prices[index] - min;
        index++;
    }
    return total;
}