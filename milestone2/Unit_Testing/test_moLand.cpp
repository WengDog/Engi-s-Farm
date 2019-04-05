// test_moLand.cpp

#include "MatrixOfLand.h"
#include "CUnit/Basic.h"

using namespace std;

void mofTest() {
    MatrixOfLand Mf(10,10);

    CU_ASSERT_EQUAL(Mf.GetBarMax(),10);
    CU_ASSERT_EQUAL(Mf.GetKolMax(),10);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).getposx(),0);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).getposy(),0);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetTypeOfLand(),'.');
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetOccupiedStatus(),false);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetGrassStatus(),false);
    Land L1(0,0,'L',true,true);
    Mf.setLand(0,0,L1);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).getposx(),0);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).getposy(),0);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetTypeOfLand(),'L');
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetOccupiedStatus(),true);
    CU_ASSERT_EQUAL(Mf.GetLand(0,0).GetGrassStatus(),true);
}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("MatrixOfLand.cpp", 0, 0);

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