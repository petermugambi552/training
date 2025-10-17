def maxprofit_k_transactions(k,prices):
    if k>=len(prices)// 2:
        #if k is  large enough,it's same as unlimitted transactions
        return maxprofit_multiple_transactions(prices)
    #use Dp with states:[transaction][holding_stock]
    buy=[-prices[0]]*(k+1)
    sell=[0]*(k+1)
    for price in prices[1:]:
        for j in range(k,0,-1):
            sell[j]=max(sell[j],buy[j]+price)
            buy[j]=max(buy[j],sell[j-1]-price)
            return result