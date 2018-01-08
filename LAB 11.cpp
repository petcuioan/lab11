#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Stack {
public:
	int size() const;
	bool isEmpty() const;
	const T& top() const {
		if (isEmpty()) throw "Stiva goala\n";
		return v.back();
	}
	void push(const T& ob);
	void pop();
	vector <T> v;
};

template<typename T> bool Stack<T>::isEmpty() const {
	return (v.empty());
}

template<typename T> void Stack<T>::push(const T& ob) {
	v.push_back(ob);
}

template<typename T> void Stack<T>::pop() {
	if (isEmpty()) throw "Stiva goala\n";
	v.pop_back();
}

int main() {
    Stack <int> st;
	int i=10;
	int ii=20;
	int iii=30;
    st.push(i);
    st.push(ii);
    st.push(iii);
    while (!st.isEmpty())
    {
        cout << st.top() << "\n";
        st.pop();
    }
	return 0;
}
