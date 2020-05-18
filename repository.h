#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

template <class T>
class Repository {
    public:
        void add(T* item);
        void remove(int i);
        std::vector<T*> getAll();
        int find(T *item);
        int find_with(T *item);
        int getSize();
        T* get(int position);
    protected:
        std::vector<T*> items;
};

template <class T>
void Repository<T>::add(T* item) {
    
    /* if (items.size() == 0) */
        items.push_back(item); // adauga daca e primul items.nt
        
    /* else */
    /* { */
    /*     // adaugam items.ntul nou INAINTE de ultimul items.nt existent */
    /*     T* before = items[items.size() - 1]; // salvam ultimul items.nt */
    /*     items[items.size() - 1] = item; // ultimul items.nt devine cel nou */
    /*     items.push_back(before); // ultimul items.nt ramane cel anterior */
    /* } */
}
template <class T>
void Repository<T>::remove(int i) {
    std::cout << "remove" << std::endl;
    items.erase(items.begin() + i);
}
template <class T>
T* Repository<T>::get(int position) {
    return items.at(position);
}
template <class T>
std::vector<T*> Repository<T>::getAll() {
    return items;
}
template <class T>
int Repository<T>::find(T *item)
{
    auto it=std::find(items.begin(), items.end(), item);
    if (it != items.end()) return distance(items.begin(), it);
    return -1;
}
template <class T>
int Repository<T>::getSize() {
    return items.size();
}
template <class T>
int Repository<T>::find_with(T *search)
{
    std::cout << "find" << std::endl;
    /* bool found =(*search) == *(items[2]); */
    /* std::cout << found << std::endl; */
    /* std::cout << "find" << std::endl; */
    std::cout << "find" << std::endl;
    auto it=std::find_if(items.begin(), items.end(), [search](T* item){ bool found = (*search) == (*item); return found; });
    if (it != items.end()) return distance(items.begin(), it);
    return -1;
}
