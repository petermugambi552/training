def maxprofit_multiple_transactions(prices):
    profit=0
    for i in range(1,len(prices)):
        #Buy yesterday,sell today if profitable
        profit+=max(0,prices[i]-prices[i-1])
        return profit