#include <iostream>
#include <list>
#include <vector>
#include <set>

/*
		1. Реализуйте функцию которая копирует элементы из одного контейнера
		   в другой но наоборот
		2. В качестве примера можно скопировать элементы из std::set в
		   std::vector
*/

template<typename T1, typename T2>
void form_set_to_vector(const T1 from_copy, T2& to_copy)
{

	auto begin_from_copy = from_copy.rbegin();
	auto end_from_copy = from_copy.rend();

	to_copy.resize(from_copy.size());

	auto begin_to_copy = to_copy.begin();

	while (begin_from_copy != end_from_copy)  *begin_to_copy++ = *begin_from_copy++;

}

int main()
{
	std::list<double> arr;
	std::set   <double> b;

	b.insert(1.4);
	b.insert(2.3);
	b.insert(3.1);
	b.insert(4.5);

	form_set_to_vector(b, arr);

	for (auto& item : arr)
	{
		std::cout << item << " ";
	}
}