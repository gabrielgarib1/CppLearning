#include <iostream>
#include <vector>
#include <algorithm>


using std::vector, std::cout;
int filledOrders(vector<int> orders, int k);


int main()
{
    vector<int> orders = {20,10,15,20,14,11,10};

    int k = 200;
    int result = filledOrders(orders,k);
    cout<<"Result: "<<result;    
}




int filledOrders(vector<int> orders, int k) {

    int max_number_of_orders=0;
    int size = orders.size();

    std::sort(orders.begin(),orders.end());

    for(int i=0; i<size; i++)
    {        
        if (orders[i]<=k)
        {
            max_number_of_orders++;
            k-=orders[i];
        }
    }
    return max_number_of_orders;
    }