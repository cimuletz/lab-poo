//
// Created by seraf on 20.04.2021.
//

#ifndef SHOPPINGLIST_CPP_BILL_H
#define SHOPPINGLIST_CPP_BILL_H


#include "Reminder.h"

class Bill: public Reminder{
    double value;
    std::string company;
public:
    explicit Bill(double value, std::string company, std::string message, DateTime remindTime, bool important = true);
    Bill(const Bill& b) = default;
    void setValue(double value);
    void setCompany(std::string company);
    ~Bill() override = default;
    void delay();
    std::unique_ptr <Reminder> clone() override;

};


#endif //SHOPPINGLIST_CPP_BILL_H
