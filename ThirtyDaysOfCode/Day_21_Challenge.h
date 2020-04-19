#pragma once
/*
	public interface List<E> extends Collection<E>
public interface Map<K,V>


The letters enclosed between angle brackets (< and >) are type parameters and, like many things in programming, there is a convention behind them (remember, following conventions help us write clean, readable code!). The letters below are commonly-used generic type parameters:

    E - Element
    K - Key
    V - Value
    N - Number
    T - Type (e.g.: data type)
    S,U,V, etc. These are second, third, and fourth types for when T is already in use. 
*/

#include "common.h"
void Day_21_Challenge();
template <typename T>
void printArray(vector<T> a);