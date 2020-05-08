#include "Tests.h"
#include <iostream>
#include <assert.h>

void testare()
{
    Rental Rental;
    Auto Car(1, "Ford", "Raptor"), Car2(2, "BMW", "M4"), Car3(3, "Ford", "Mondeo");
    LKW LKW1(5, "Ford", "F-150", 1900, 5);

    Kunde Customer(1, "Nume"), Customer2(2, "sugestiv"), Customer3(3, "123");

    Rental.add_auto(Car);
    Rental.add_auto(Car2);
    Rental.add_auto(Car3);
    Rental.add_auto(LKW1);
    assert(Rental.size_auto() == 4);

    Rental.add_client(Customer);
    Rental.add_client(Customer2);
    Rental.add_client(Customer3);
    //assert(Rental.size_clienti() == 3);

    Rental.update_client(Customer, "Andy");
    assert(Customer.get_name() == "Andy");

    Rental.remove_auto(Car);
    Rental.remove_auto(Car2);
    assert(Rental.size_auto() == 2);

    Rental.delete_client(Customer);
    Rental.delete_client(Customer2);
    //assert(Rental.size_clienti() == 1);

    LKW1.load(400);
    assert(LKW1.get_load() == 2300);
}