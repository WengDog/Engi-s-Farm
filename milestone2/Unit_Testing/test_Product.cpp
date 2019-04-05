//test_Product.cpp

#include "Product.h"
#include "CUnit/Basic.h"

void ProductTest() {
    Product P("susu",1000,true,false);

    CU_ASSERT_EQUAL(P.getPrice(),1000);
    CU_ASSERT_EQUAL(P.getName(),"susu");
    P.setPrice(1500);
    CU_ASSERT_EQUAL(P.getPrice(),1500);
}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("Product.cpp", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Product", ProductTest)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
    return CU_get_error();
}