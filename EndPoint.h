#ifndef ENDPOINT_H
#define ENDPOINT_H

#include <iostream>
#include <string>
using namespace std;

struct EndPoint
{
private:
    string address;
    string date;
    string time;

public:
    EndPoint()
    {
        address = "";
        date = "";
        time = "";
    }

    EndPoint(string address, string date, string time)
    {
        this->address = address;
        this->date = date;
        this->time = time;
    }

    string GetAddress()
    {
        return address;
    }

    string GetDate()
    {
        return date;
    }

    string GetTime()
    {
        return time;
    }

    void SetAddress(string address)
    {
        this->address = address;
    }

    void SetDate(string date)
    {
        this->date = date;
    }

    void SetTime(string time)
    {
        this->time = time;
    }
};

#endif // ENDPOINT_H