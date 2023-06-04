#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cmath>

namespace ariel{

    class MagicalContainer{
        private:
            std::vector<int> originalVector;
            std::vector<int> ascendingVector; 
            std::vector<int> crossVector;
            std::vector<int> primeVector;
            void updateSorted();
            void updateCross();
            void updatePrime();
            bool isPrime(int num);

        public:
            MagicalContainer() = default;
            ~MagicalContainer() = default;
            void addElement(int element);
            void removeElement(int element);
            int size() const;


        class AscendingIterator{
            private:
                std::vector<int>::iterator iter; 
                size_t position;
            public:
                AscendingIterator(MagicalContainer &);
                ~AscendingIterator() = default;
                AscendingIterator(const AscendingIterator& );
                AscendingIterator& operator=(const AscendingIterator& );
                bool operator==(const AscendingIterator&) const;
                bool operator!=(const AscendingIterator&) const;
                bool operator>(const AscendingIterator&) const;
                bool operator<(const AscendingIterator&) const;
                int operator*() const;
                AscendingIterator& operator++();
                AscendingIterator begin() const;
                AscendingIterator end() const;
        };


        class SideCrossIterator{
            private:
                std::vector<int>::iterator iter;
                size_t position;
            public:
                SideCrossIterator(MagicalContainer &);
                ~SideCrossIterator() = default;
                SideCrossIterator(const SideCrossIterator&);
                SideCrossIterator& operator=(const SideCrossIterator& );
                bool operator==(const SideCrossIterator&) const;
                bool operator!=(const SideCrossIterator&) const;
                bool operator>(const SideCrossIterator&) const; 
                bool operator<(const SideCrossIterator&) const;
                int operator*() const;
                SideCrossIterator& operator++();
                SideCrossIterator begin() const;
                SideCrossIterator end() const;
        };

        class PrimeIterator{
            private:
                std::vector<int>::iterator iter; 
                size_t position;
            public:
                PrimeIterator(MagicalContainer &);
                ~PrimeIterator() = default;
                PrimeIterator(const PrimeIterator &);
                PrimeIterator& operator=(const PrimeIterator& );
                bool operator==(const PrimeIterator&) const;
                bool operator!=(const PrimeIterator&) const;
                bool operator>(const PrimeIterator&) const;
                bool operator<(const PrimeIterator&) const;
                int operator*() const;
                PrimeIterator& operator++();
                PrimeIterator begin() const;
                PrimeIterator end() const;
        };
    };
}