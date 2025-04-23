#include <iostream>
#include <vector>
using std::vector, std::cout;
int filledOrders(vector<int> order, int k);

int main()
{

    filledOrders(vector<int> order, int k);

}
int filledOrders(vector<int> order, int k) {

    int max_number_of_orders=0;
    
    for(int i=0;i<order[0];i++)
    {   
        if (order[i+1]>=k)
        {
            max_number_of_orders++;
            k-=order[i+1];
        }
    }
    return max_number_of_orders;
    }