#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink const volatile * get_pointer<struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink const volatile >(struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_777aaae3020452acbdd3b07e2f90506a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink, autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink >::Type, boost::python::bases< struct ::statiskit::glm::DirichletMultinomialSplittingLink > > class_777aaae3020452acbdd3b07e2f90506a("DirichletMultinomialSplittingCanonicalLink", "", boost::python::no_init);
    class_777aaae3020452acbdd3b07e2f90506a.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingCanonicalLink >::Type, autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingLink >::Type >();
    }

}