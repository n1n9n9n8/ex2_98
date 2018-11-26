
#include "interface.h"

// for me to remember: YYYY-MM-DD
int strnigToint(string s);

Date::Date(string date) {
    if (date.length() != 10)
        throw "Illegal argument";
    this->date = date;
}

bool Date::operator<(const Date &d) const {
    return !(*this == d || *this > d);
}

bool Date::operator>(const Date &d) const {
    if (*this == d) {
        return true;
    }
    int this_year = strnigToint(this->getDate().substr(0, 5));
    int other_year = strnigToint(d.getDate().substr(0, 5));
    if (this_year != other_year) {
        return this_year > other_year;
    }
    int this_month = strnigToint(this->getDate().substr(6, 9));
    int other_month = strnigToint(d.getDate().substr(6, 9));
    if (this_month != other_month) {
        return this_month > other_month;
    }
    int this_day = strnigToint(this->getDate().substr(10, 13));
    int other_day = strnigToint(d.getDate().substr(10, 13));
    return this_day > other_day;

}

bool Date::operator==(const Date &d) const {
    return d.getDate() == this->getDate();
}


int strnigToint(string s) {
    int index = 0;
    bool negate = (s[0] == '-');
    if (s[0] == '+' || s[0] == '-')
        ++index;

    int result = 0;
    for (int i = index; i < s.size(); ++i) {
        result = result * 10 - (s[i] - '0');  //assume negative number
    }
    return negate ? result : -result; //-result is positive!
}