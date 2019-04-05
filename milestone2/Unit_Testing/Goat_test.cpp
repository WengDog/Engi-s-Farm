#include "CUnit/Basic.h"
#include "Goat.h"

using namespace std;

void Goat_test() {
  // Check if first param matches with second[2]
  Goat g;
  CU_ASSERT_EQUAL(g.isAlive(), true);
  CU_ASSERT_EQUAL(g.render(), 'G');
  g.setEndurance(3);
  CU_ASSERT_EQUAL(g.getEndurance(),3);
  CU_ASSERT_EQUAL(g.getEndurance_Default(),23);
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
    pSuite = CU_add_suite("Goat_test_suite", 0, 0);

    // Always check if add was successful
    if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Add the test to the suite
    if (NULL == CU_add_test(pSuite, "Goat_test", Goat_test)) {
    CU_cleanup_registry();
    return CU_get_error();
    }

    // Run the tests and show the run summary
    CU_basic_run_tests();
    return CU_get_error();
}
