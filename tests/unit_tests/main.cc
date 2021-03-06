// Calls the unit tests for the PRISMS-PF code
// Orignal author: Stephen DeWitt (stvdwtt@umich.edu)

#include <iostream>
#include "unitTest.h"

int main(int argc, char **argv)
{
  //init MPI
  Utilities::MPI::MPI_InitFinalize mpi_initialization(argc, argv, numbers::invalid_unsigned_int);

  std::cout << "Beginning unit tests..." << std::endl;
  bool pass = false;
  int tests_passed = 0, total_tests = 0;
  
  // Unit tests for the method "computeInvM"
  total_tests++;
  unitTest<2,double> computeInvM_tester_2D;
  pass = computeInvM_tester_2D.test_computeInvM(argc, argv);
  tests_passed += pass;
  
  
  // Unit tests for the method "outputResults"
  total_tests++;
  unitTest<2,double> outputResults_tester_2D;
  pass = outputResults_tester_2D.test_outputResults(argc, argv);
  tests_passed += pass;
  
  // Unit tests for the method "computeStress"
  total_tests++;
  unitTest<1,dealii::VectorizedArray<double>[1][1]> computeStress_tester_1D;
  pass = computeStress_tester_1D.test_computeStress();
  tests_passed += pass;
  
  total_tests++;
  unitTest<1,dealii::Table<2, double>> computeStress_tester_1DT;
  pass = computeStress_tester_1DT.test_computeStress();
  tests_passed += pass;
  
  total_tests++;
  unitTest<2,dealii::VectorizedArray<double>[3][3]> computeStress_tester_2D;
  pass = computeStress_tester_2D.test_computeStress();
  tests_passed += pass;
  
  total_tests++;
  unitTest<2,dealii::Table<2, double>> computeStress_tester_2DT;
  pass = computeStress_tester_2DT.test_computeStress();
  tests_passed += pass;
  
  total_tests++;
  unitTest<3,dealii::VectorizedArray<double>[6][6]> computeStress_tester_3D;
  pass = computeStress_tester_3D.test_computeStress();
  tests_passed += pass;
  
  total_tests++;
  unitTest<3,dealii::Table<2, double>> computeStress_tester_3DT;
  pass = computeStress_tester_3DT.test_computeStress();
  tests_passed += pass;
  
  // Unit tests for the method "getRHS"
  //unitTest<2,double> getRHS_tester_2D;
  //pass = getRHS_tester_2D.test_getRHS();
  //tests_passed += pass;
  
  // Unit tests for the method "computeRHS"
  //unitTest<2,double> computeRHS_tester_2D;
  //pass = computeRHS_tester_2D.test_computeRHS();
  //tests_passed += pass;
  
  char buffer[100];
  sprintf(buffer, "\n\nNumber of tests passed: %u/%u \n\n", tests_passed, total_tests);
  std::cout << buffer;
  
  return 0;
}





