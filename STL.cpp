#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // //create vector,declare
    // vector<int>v;
    // //size and capacity
    // cout<<"size of v:"<<v.size()<<endl;
    // cout<<"capacity of v:"<<v.capacity()<<endl;
    // cout<<v.empty()<<endl;
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(8);
    // v.push_back(10);
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.empty()<<endl;
    // cout<<v.at(3)<<endl;
    // cout<<"size of v:"<<v.size()<<endl;
    // cout<<"capacity of v:"<<v.capacity()<<endl;
    // //update value
    // v[3]=5;
    // cout<<v.at(3)<<endl;


    // //initialization of a vector
    // vector<int>v1(5,1);
    // cout<<"size of v:"<<v1.size()<<endl;
    // cout<<"capacity of v:"<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"size of v:"<<v1.size()<<endl;
    // cout<<"capacity of v:"<<v1.capacity()<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>v3={1,2,3,4,5};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v3[i]<<" ";
    // }



    // //delete values form vector
    // vector<int>vnew;
    // vnew.push_back(3);
    // vnew.push_back(2);
    // vnew.push_back(5);
    // vnew.push_back(9);
    // vnew.push_back(7);
    // vnew.push_back(4);//deleting value
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // cout<<vnew.size()<<endl;
    // vnew.pop_back();
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // cout<<vnew.size()<<endl;
    // vnew.erase(vnew.begin()+1);//earsing a value from perticuler index 
    // cout<<vnew.size()<<endl;
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // vnew.insert(vnew.begin()+2,50);//insering a value in a perticular index
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // cout<<vnew.front()<<endl;
    // cout<<vnew.back()<<endl;
    // cout<<vnew.empty()<<endl;
    // vnew.clear();
    // cout<<vnew.empty()<<endl;
    // cout<<vnew.size()<<endl;
    // cout<<vnew.capacity()<<endl;

    // //copy value of 1 vector to another
    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(21);
    // arr.push_back(12);
    // arr.push_back(22);
    // arr.push_back(112);
    // vector<int>a;
    // a=arr;
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(auto it=arr.begin();it!=arr.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto i: a)
    // cout<<i<<" ";


    //SORTING
    vector<int>sorting;
    sorting.push_back(4);
    sorting.push_back(41);
    sorting.push_back(14);
    sorting.push_back(40);
    sorting.push_back(76);
    sorting.push_back(43);
    sorting.push_back(145);

    for(int i=0;i<sorting.size();i++)
    {
        cout<<sorting[i]<<" ";
    }
    cout<<endl;
    //sort in increasing order
    sort(sorting.begin(),sorting.end());
    for(int i=0;i<sorting.size();i++)
    {
        cout<<sorting[i]<<" ";
    }
    cout<<endl;
    //sort in decreasing oder
    // sort(sorting.begin(),sorting.end(),greater<int>());
    // for(int i=0;i<sorting.size();i++)
    // {
    //     cout<<sorting[i]<<" ";
    // }
    // cout<<endl;
    //Another method to sort in decreasing order
    // sort(sorting.rbegin(),sorting.rend());
    // for(int i=0;i<sorting.size();i++)
    // {
    //     cout<<sorting[i]<<" ";
    // }
    // cout<<endl;

    //searching in binary search
    cout<<binary_search(sorting.begin(),sorting.end(),4)<<endl;
    cout<<find(sorting.begin(),sorting.end(),41)-sorting.begin()<<endl;
    //int maxi=max_element(sorting.begin(),sorting.end())<<endl;
    //cout<<maxi;
}