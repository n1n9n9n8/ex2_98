cmake_minimum_required(VERSION 3.12)
project(ex2_98)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex2_98 main.cpp interface.h date.cpp MyImplementation.h MyClasses/Elements/MyEmployee.cpp MyClasses/Elements/MyEmployee.h MyClasses/Elements/MyID.cpp MyClasses/Elements/MyID.h MyClasses/Elements/MyPlane.cpp MyClasses/Elements/MyPlane.h MyClasses/Elements/MyFlight.cpp MyClasses/Elements/MyFlight.h MyClasses/Elements/MyCustomer.cpp MyClasses/Elements/MyCustomer.h MyImplementation.cpp "MyClasses/Date strucre/DataTables.cpp" "MyClasses/Date strucre/DataTables.h" MyClasses/Elements.h MyClasses/Elements/MyReservation.cpp MyClasses/Elements/MyReservation.h)