// Vector is the replacement of array. array is fixed sized but vector isn't. vector can be called as dynamic array..!
#include<bits/stdc++.h>
using namespace std;

int main(){
    // syntax: vector<data_type> vector_name;
    // syntax: vector<data_type> vector_name = {elements}; // like array
    // syntax: vector<data_type> vector_name(size); // we can also initialize vector with its capacity.. but the capacitiy and size are not fixed, if we want we can increase it
    // syntax: vector<data_type> vector_name(size , the_element_we_want_in_each_index); // we can also initialize vector with its capacity and the value we want in each vector.. here also capacity and size are not fixed, it can be increased

    vector<int> v0 = {1,2,3,4,5,6,7}; 

    vector<int> v; // need not to mention the size
    // v[0] = 2;  this line and the next line are not valid
    // v[2] = 3;

    //but in case of access or update the value, indexing is valid,,like: cout<<v[3]; or v[4] = 6;

    // there is a function, named push_back(element) is use to insert value to the array from last
    /*
        example:
                    s means size and c means capacity                 

        v.push_back(2);   c1 , s1
        v.push_back(3);   c2 , s2
        v.push_back(4);   c4 , s3
        v.push_back(5);   c4 , s4
        v.push_back(6);   c8 , s5  (so for next 3 size the capacity will be c8)
        
        it means 2 insets at last {} -> {2}
        then insert 3 at last {2,_} -> {2,3}
        then insert 4 at last {2,3,_,_} -> {2,3,4,empty}
        then insert 5 at last {2,3,4,_} -> {2,3,4,5}

        mainly, if the size and capacity of that vector is same then the next capacity will be double
    */ 

    vector<int> v2(6); //we can also do this..now by default the capacity if this vector is 6 and in each index 0 will stored
    // so the size is also 6 of this vector cause in each index 0 is stored by default
    v2[3] = 2580; // here we can update this, and it's valid. cause in each index 0 has stored already by default 
    cout<<"Size of the vector v2 befor push_back() new values: "<<v2.size()<<endl;
    cout<<"Capacity of the vector v2 befor push_back() new values: "<<v2.capacity()<<endl;
    cout<<"v2[3]: "<<v2[3]<<endl;
    v2.push_back(8); // we can add nex values or elements at last
    v2.push_back(4); // cause the size and capacity are not fixed
    cout<<"v2[6]: "<<v2[6]<<endl;
    cout<<"v2[7]: "<<v2[7]<<endl;
    cout<<"Size of the vector v2 after push_back() new values: "<<v2.size()<<endl;
    cout<<"Capacity of the vector v2 after push_back() new values: "<<v2.capacity()<<endl;
    cout<<endl<<endl; //pop_back() function is also workable here
    

    vector<float> v3(4 , 3.33); // here total 4 indexes and in each index, 3.33 is stored by default;
    v3[1] = 3.61; // we can also update this and it's valid.. cause in each index 3.33 is already stored
    for(short i = 0 ; i<4; i++) cout<<v3[i]<<endl;
    cout<<"Size of the vector v3 befor push_back() new values: "<<v3.size()<<endl;
    cout<<"Capacity of the vector v3 befor push_back() new values: "<<v3.capacity()<<endl;
    v3.push_back(3.67);
    v3.push_back(3.52);
    cout<<v3[4]<<endl<<v3[5]<<endl;
    cout<<"Capacity of the vector v3 after push_back() new values: "<<v3.capacity()<<endl;
    cout<<"Size of the vector v3 after push_back() new values: "<<v3.size()<<endl;
    // pop_back() function is also workable here

}