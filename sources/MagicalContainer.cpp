#include "MagicalContainer.hpp"

using namespace std;

namespace ariel{

    void MagicalContainer::updateSorted(){}
    void MagicalContainer::updateCross(){}
    void MagicalContainer::updatePrime(){}

    bool MagicalContainer::isPrime(int num){
        return false;
    }

    void MagicalContainer::addElement(int element){
        this->originalVector.push_back(element);
        updateSorted();
        updateCross();
        updatePrime();
    }

    void MagicalContainer::removeElement(int element){}

    int MagicalContainer::size() const{
        return 1;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container){}

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator&){};

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other){
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator& other) const{
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator& other) const{
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*() const{
        return 1;
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++(){
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin() const{
        return *this;
    }

    MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end() const{
        AscendingIterator tempIter(*this);
        return tempIter;
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container){}
    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator&){}

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other){
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator& other) const{
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator& other) const{
        return false;
    }

    int MagicalContainer::SideCrossIterator::operator*() const{
        return 1;
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++(){
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin() const{
        return *this;
    }

    MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end() const{
        MagicalContainer::SideCrossIterator tempIter(*this);
        return tempIter;
    }


    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container){}
    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator&){}

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other){
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator& other) const{
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator& other) const{
        return false;
    }

    int MagicalContainer::PrimeIterator::operator*() const{
        return 1;
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++(){
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin() const{
        return *this;
    }

    MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end() const{
        MagicalContainer::PrimeIterator tempIter(*this);
        return tempIter;
    }

}