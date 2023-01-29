# include<iostream> 
using namespace std;
float lowestPrice(int kilometers, string period);
string transportType;
int main()
{
    int kilometers;
    string period;
    cout<<"Enter the period of the day:";
    cin>>period;
    cout<<"Enter the no. of kilometers:";
    cin>>kilometers;
    result=lowestPrice(kilometers,period);
    cout<<"Enter the type of transport";
    cin>>transportType;
    cout<<result;
}
    float lowestPrice(int kilometers, string period)
    {
    float cheapestPrice;
    if(period=="day"&&transportType=="Taxi")
    {
        cheapestPrice=kilometers*0.70;
    }
   if(period=="night"&&transportType=="Taxi")
    {
        cheapestPrice=kilometers*0.79;
    }
    if(period=="day"||period=="night"&&transportType=="Bus")
    {
        cheapestPrice=(kilometers*0.09)/12;
    }
    if(period=="day"||period=="night"&&transportType=="Train")
    {
        cheapestPrice=(kilometers*0.06)/100;
    }
    return cheapestPrice;
}