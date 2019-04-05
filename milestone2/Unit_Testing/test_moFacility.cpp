// test_moFacility.cpp

#include "MatrixOfFacility.h"
#include "CUnit/Basic.h"

using namespace std;

void mofTest() {
    MatrixOfFacility Mf(10,10);

    CU_ASSERT_EQUAL(Mf.GetBarMax(),10);
    CU_ASSERT_EQUAL(Mf.GetKolMax(),10);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).getposx(),0);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).getposy(),0);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).GetTypeOfFacility(),'.');
    Facility F1(0,0,'T');
    Mf.setFacility(0,0,F1);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).getposx(),0);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).getposy(),0);
    CU_ASSERT_EQUAL(Mf.GetFacility(0,0).GetTypeOfFacility(),'T');
}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("MatrixOfFacility.cpp", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "mof", mofTest)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_run_tests();
    return CU_get_error();
}