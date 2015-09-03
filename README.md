<B>Code repository:</B> https://github.com/prisms-center/phaseField <br>
 
<B>What is PRISMS PhaseField?</B>

  It is a Finite Element Method (FEM) code implementing various phase field 
  and coupled mechanics models and its applications to some physical problems
  (spinodal decomposition, coupled transport and mechanics, precipitate evolution, etc.).
  It is build on top of the deal.II open source finite element library [http://www.dealii.org]
  
  This code is developed by the PRedictive Integrated Structural
  Materials Science (PRISMS) Center [http://www.prisms-center.org/]
  at University of Michigan which is supported by the U.S. Department 
  of Energy (DOE), Office of Basic Energy Sciences, Division of Materials Sciences 
  and Engineering under Award #DE-SC0008637

<B>Installation:</B> 

  1) Install deal.II (version 8.2.1 currently supported)<br>
  + Download Binaries (OSX and Linux) or  Virtual Machine (VMI) from https://www.dealii.org/download.html <br>
  (OR) <br>
  + Configure, compile and install the deal.II library with the 
  following configuration flags. Dependencies are MPI, p4est, PETSc libraries.<br>
     -DDEAL_II_WITH_MPI=ON, -DDEAL_II_WITH_LAPACK=ON, -DDEAL_II_WITH_P4EST=ON, -DDEAL_II_WITH_PETSC=ON

     Download: http://www.dealii.org/download.html <br>
     Installation instructions: http://www.dealii.org/8.2.1/readme.html <br>
     Installation instructions for external packages (P4EST, PETSC): https://www.dealii.org/developer/external-libs/ <br>

  + Additional software: CMake [http://www.cmake.org/download/] 

  2) Clone the PRISMS PhaseField GitHub repo https://github.com/prisms-center/phaseField<br>
  + $ git clone https://github.com/prisms-center/phaseField.git <br>
  (OR) <br>
  + $ git clone git@github.com:prisms-center/phaseField.git <br>
  and <br>
  + $ cd phaseField <br>
  + $ git checkout master <br>

<B>Usage:</B>

  Running phaseField applications, for example Cahn-Hilliard spinodal decomposition problem :<br> 
  + $ cd applications/cahnHilliard <br>
  For debug mode [default mode, very slow]: <br>
  + $ cmake CMakeLists.txt -DCMAKE_BUILD_TYPE=Debug <br>
  For optimized mode:<br>
  + $ cmake CMakeLists.txt -DCMAKE_BUILD_TYPE=Release <br>
  and <br>
  + $ make <br><br>
  Execution (serial runs): <br>
  + $ make run <br>
  Execution (parallel runs): <br>
  + $ mpirun -np nprocs ./main <br>
  [here nprocs denotes the number of processors]
  
  Updates: Since phaseField code is still under active development,
  regular code and documentation updates are pushed to the upstream
  repo (https://github.com/prisms-center/phaseField) and we strongly
  recommend users to synchronize their respective clones/forks at regular
  intervals or when requested by the developers through the
  announcements on the mailing list. 

<B>Visualization</B> 

  Output of the primal fields and postprocessed fields is in standard vtk 
  format (parallel:*.pvtu, serial:*.vtu files) which can be visualized with the 
  following open source applications:
  1. VisIt (https://wci.llnl.gov/simulation/computer-codes/visit/downloads)
  2. Paraview (http://www.paraview.org/download/)

<B>Getting started:</B>

  Examples of various initial boundary value problems (IBVP's) are located under the 
  applications/ folder. Easiest way to get started on the code is to 
  run the applications.

  Applications are intended to serve as (1) Demonstration of the
  capabilities of this library, (2) Provide a framework for
  further development of specialized/advanced applications by
  users. 

  Application or code under development/testing is preceded by an
  underscore. 

  List of folders:
  + include/: header files
  + src/: models (diffusion, mechanics and coupled models),
  matrixfree (base class for parallel implementation of parabolic and elliptic 
  intial boundary value problems)
  + applications/: Various phase field and mechanics example problems
  + docs/: Formulations, example documents, etc in PDF format
  + html/: HTML documentation generated by doxygen

<B>Documentation:</B>

  Detailed mathematical formulations, example simulations, code documentation, etc, provided:
  + Open html/index.html in any web browser <br>
  (OR)<br>
  + https://htmlpreview.github.io/?https://raw.githubusercontent.com/prisms-center/phaseField/master/html/index.html
 	
<B>License:</B>

  GNU Lesser General Public License (LGPL). Please see the file
  LICENSE for details.

<B>Mailing List:</B>
  
 + prismsphaseField.users@umich.edu	
 + prismsphaseField.dev@umich.edu  

<B>Further information, questions, issues and bugs:</B>

  Contact the developers at prismsphaseField.dev@umich.edu  



