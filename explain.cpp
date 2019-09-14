#include "explain.h"
#include <algorithm>

Explain::Explain(){
    // No need to do everything
}

Explain::Explain(std::string meaning,std::string example){
    detail.push_back(std::make_pair(meaning,example));
}

void Explain::Append(std::string info, std::string exp){
    detail.push_back(std::make_pair(info,exp));
}

std::string Explain::getExplain(int loc){
    return detail.at(loc).first;
}

std::string Explain::getExample(int loc){
    return detail.at(loc).second;
}

void Explain::sort(){
    std::sort(detail.begin(),detail.end(), Explain::compare);
}

void Explain::Remove(int pos){
    for (auto ptr = detail.begin(); ptr != detail.end(); ptr++){
        if(pos == 0){
            ptr = detail.erase(ptr);
        }
    }
    return;
}

const bool Explain::compare(const std::pair<std::string,std::string>& _itema,const std::pair<std::string,std::string>& _itemb){
    return _itema.first < _itemb.first;
}

inline bool Explain::operator==(const Explain& info){
    if(this->detail == info.detail){
        return true;
    }
    return false;
}