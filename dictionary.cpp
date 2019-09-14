#include "dictionary.h"

Dictionary::Dictionary(){

}

void Dictionary::AppendWord(const std::string& things,const Explain& explain){
    if(item.at(things) == Explain()){
        item[things]=explain;
    }
    else{
        std::cout << "Error: Unable To Append. Already have one occupied" << std::endl;
    }
    return;
}

void Dictionary::AppendWordMeaningToDictionary(const std::string& things, const std::string &means, const std::string& examples){
    if(things == ""){
        std::cout << "Error: You Don't Provide Needed Infomation: Request at least a word" << std::endl;
        return;
    }
    if(means == ""){
        std::cout << "Error: You Don't Provide Needed Infomation: Request at least a meaning" << std::endl;
    }
    if(item.at(things) == Explain()){
        std::cout << "Warning: Appending into the list for a newcoming word" << std::endl;
        item[things] = Explain(means,examples);
    }
    item[things].Append(means,examples);
}