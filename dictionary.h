#include <iostream>
#include <map>
#include "explain.h"

class Dictionary {
    public:
    Dictionary();
    void AppendWord(const std::string& word,const Explain& explain);
    void ReadFromDictionary();
    void AppendWordMeaningToDictionary(const std::string& things, const std::string &means = "", const std::string& examples = "");
    private:
    std::map<std::string,Explain> item;
};