#include "CUnit/Basic.h"
#include "Duck.h"

using namespace std;

void Duck_test() {
  // Check if first param matches with second[2]
  Duck d;
  CU_ASSERT_EQUAL(d.isAlive(), true);
  CU_ASSERT_EQUAL(d.render(), 'D');
  d.setEndurance(3);
  CU_ASSERT_EQUAL(d.getEndurance(),3);
  CU_ASSERT_EQUAL(d.getEndurance_Default(),17);
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
    pSuite = CU_add_suite("Duck_test_suite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Duck_test", Duck_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
