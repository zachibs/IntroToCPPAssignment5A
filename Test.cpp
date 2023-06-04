#include "doctest.h"
#include "MagicalContainer.hpp"

using namespace ariel;
using namespace std;

TEST_SUITE("Size manipulation") {
    
    TEST_CASE("Adding"){
    MagicalContainer container;
    container.addElement(1);
    CHECK(container.size() == 1);
    container.addElement(2);
    CHECK(container.size() == 2);
    container.addElement(3);
    CHECK(container.size() == 3);
    container.addElement(4);
    CHECK(container.size() == 4);
    }
    
    TEST_CASE("Removing"){
    MagicalContainer container;
    container.removeElement(4);
    CHECK(container.size() == 3);
    container.removeElement(3);
    CHECK(container.size() == 2);
    container.removeElement(2);
    CHECK(container.size() == 1);
    container.removeElement(1);
    CHECK(container.size() == 0);
    }    

    TEST_CASE("Copy constructor"){
    MagicalContainer container;
    container.addElement(1);
    container.addElement(2);
    container.addElement(3);
    MagicalContainer container2(container);
    CHECK(container2.size() == 3);
    }

}

TEST_SUITE("Iterators"){

    TEST_CASE("AscendingIterator") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(8);
        container.addElement(3);

        MagicalContainer::AscendingIterator it(container);
        MagicalContainer::AscendingIterator end = it.end();
        it = it.begin();

        CHECK(*it == 2);
        ++it;
        CHECK(*it == 3);
        ++it;
        CHECK(*it == 5);
        ++it;
        CHECK(*it == 8);
        ++it;
        CHECK(it == end);
    }

    TEST_CASE("SideCrossIterator") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(8);
        container.addElement(3);

        MagicalContainer::AscendingIterator it(container);
        MagicalContainer::AscendingIterator end = it.end();
        it = it.begin();

        CHECK(*it == 2);
        ++it;
        CHECK(*it == 8);
        ++it;
        CHECK(*it == 3);
        ++it;
        CHECK(*it == 5);
        ++it;
        CHECK(it == end);
    }

    TEST_CASE("PrimeIterator") {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(2);
        container.addElement(8);
        container.addElement(3);

        MagicalContainer::AscendingIterator it(container);
        MagicalContainer::AscendingIterator end = it.end();
        it = it.begin();

        CHECK(*it == 2);
        ++it;
        CHECK(*it == 3);
        ++it;
        CHECK(*it == 5);
        ++it;
        CHECK(it == end);
    }
}
