// test_facility.cpp

#include "Facility.h"
#include "CUnit/Basic.h"

void FacilityTest() {
    Facility L;

    CU_ASSERT_EQUAL(L.GetTypeOfFacility(),'.');
    CU_ASSERT_EQUAL(L.getposx(),0);
    CU_ASSERT_EQUAL(L.getposy(),0);
    L.SetTypeOfFacility('T');
    L.setposx(1);
    L.setposy(1);
    CU_ASSERT_EQUAL(L.GetTypeOfFacility(),'T');
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
    pSuite = CU_add_suite("Facility.cpp", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Facility", FacilityTest)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
    return CU_get_error();
}