// test_land.cpp

#include "Land.h"
#include "CUnit/Basic.h"

using namespace std;

void landTest() {
    Land L;

    CU_ASSERT_EQUAL(L.GetTypeOfLand(),'.');
    CU_ASSERT_EQUAL(L.GetOccupiedStatus(),false);
    CU_ASSERT_EQUAL(L.GetGrassStatus(),false);
    CU_ASSERT_EQUAL(L.getposx(),0);
    CU_ASSERT_EQUAL(L.getposy(),0);
    L.SetTypeOfLand('L');
    L.SetGrassStatus(true);
    L.SetOccupiedStatus(true);
    L.setposx(1);
    L.setposy(1);
    CU_ASSERT_EQUAL(L.GetTypeOfLand(),'L');
    CU_ASSERT_EQUAL(L.GetOccupiedStatus(),true);
    CU_ASSERT_EQUAL(L.GetGrassStatus(),true);
    CU_ASSERT_EQUAL(L.getposx(),1);
    CU_ASSERT_EQUAL(L.getposy(),1);
}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("Land.cpp", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "land", landTest)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
    return CU_get_error();
}