
// C++ code to reverse a stack using recursion by using ARRAY

#include <bits/stdc++.h>
using namespace std;

int put_at_the_last(stack<int>& s1, int k)
{
    if(s1.empty())
    {
        s1.push(k);
        return 0;
    }

    int temp=s1.top();
    s1.pop();
    put_at_the_last(s1, k);

    s1.push(temp);

    return 0;
}

int reverse_stack(stack<int>& s1)
{
    if(s1.empty()){
        return 0;
    }


    int temp=s1.top();
    s1.pop();

    reverse_stack(s1);

    put_at_the_last(s1,temp);

    return 0;
}



int main()
{
	stack<int> st, st2;

	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	cout << "Original Stack" << endl;

	while (!st2.empty()) {

		cout << st2.top() << " ";
		st2.pop();
	}



	cout<<endl;


	reverse_stack(st);
	cout << "Reversed Stack" << endl;

	while (!st.empty()) {

		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}

