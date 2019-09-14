#include <string>
#include <iostream>
#include <vector>

class Explain{
    public:
    Explain();
    Explain(std::string _meaning,std::string _info);
    void Append(std::string _meaning,std::string _info);
    std::string getExplain(int position);
    std::string getExample(int position);
    void Remove(int position);
    inline bool operator==(const Explain& val);
    void sort();
    private:
    const static bool compare(const std::pair<std::string,std::string>&,const std::pair<std::string,std::string>&);
    std::vector<std::pair<std::string,std::string>> detail;
};