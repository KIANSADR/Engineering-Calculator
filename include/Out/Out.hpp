#pragma once

template <typename T>
bool OutOfRange(T value, T max, T min)
{
    return ((value > max) || (value < min));
}