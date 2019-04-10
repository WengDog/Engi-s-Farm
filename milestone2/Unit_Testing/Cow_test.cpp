#include "CUnit/Basic.h"
#include "Cow.h"

using namespace std;

void Cow_test() {
  // Check if first param matches with second[2]
  Cow c;
  CU_ASSERT_EQUAL(c.isAlive(), true);
  CU_ASSERT_EQUAL(c.render(), 'O');
  c.setEndurance(3);
  CU_ASSERT_EQUAL(c.getEndurance(),3);
  CU_ASSERT_EQUAL(c.getEndurance_Default(),20);
}

int main() {
    // Initialize the CUnit test registry
    if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

    // Sets the basic run mode, CU_BRM_VERBOSE will show maximum output of run details
    // Other choices are: CU_BRM_SILENT and CU_BRM_NORMAL
    CU_basic_set_mode(CU_BRM_VERBOSE);

    CU_pSuite pSuite = NULL;

    // Add a suite to the registry
    pSuite = CU_add_suite("Cow_test_suite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Cow_test", Cow_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}