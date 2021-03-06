#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_d73e80a59ffb56abab2ca1fb2ba3cf05;
            virtual return_type_d73e80a59ffb56abab2ca1fb2ba3cf05 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_d73e80a59ffb56abab2ca1fb2ba3cf05, class_type, copy, ); };
            typedef class ::statiskit::glm::NominalRegression * return_type_bfa5b81fc9ab5622b01dc04818a5e2c4;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_0_type;
            typedef struct ::statiskit::MultivariateSampleSpace const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_1_type;
            typedef struct ::statiskit::UnivariateSampleSpace const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_2_type;
            virtual return_type_bfa5b81fc9ab5622b01dc04818a5e2c4 build_estimated(param_bfa5b81fc9ab5622b01dc04818a5e2c4_0_type param_0, param_bfa5b81fc9ab5622b01dc04818a5e2c4_1_type param_1, param_bfa5b81fc9ab5622b01dc04818a5e2c4_2_type param_2) const override { PYBIND11_OVERLOAD_PURE(return_type_bfa5b81fc9ab5622b01dc04818a5e2c4, class_type, build_estimated, param_0, param_1, param_2); };
            typedef class ::std::vector< double, class ::std::allocator< double > >  return_type_24b0adb941fc5492937871be01730b17;
            typedef class ::statiskit::UnivariateConditionalData const & param_24b0adb941fc5492937871be01730b17_0_type;
            virtual return_type_24b0adb941fc5492937871be01730b17 w_init(param_24b0adb941fc5492937871be01730b17_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_24b0adb941fc5492937871be01730b17, class_type, w_init, param_0); };
            typedef class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  return_type_df3637527f20514ba94c994f022cf1b1;
            typedef class ::statiskit::UnivariateConditionalData const & param_df3637527f20514ba94c994f022cf1b1_0_type;
            virtual return_type_df3637527f20514ba94c994f022cf1b1 y_init(param_df3637527f20514ba94c994f022cf1b1_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_df3637527f20514ba94c994f022cf1b1, class_type, y_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_051b8c9bf3c75eaaa7f80b17b3a56772;
            typedef class ::statiskit::UnivariateConditionalData const & param_051b8c9bf3c75eaaa7f80b17b3a56772_0_type;
            typedef bool const & param_051b8c9bf3c75eaaa7f80b17b3a56772_1_type;
            virtual return_type_051b8c9bf3c75eaaa7f80b17b3a56772 operator()(param_051b8c9bf3c75eaaa7f80b17b3a56772_0_type param_0, param_051b8c9bf3c75eaaa7f80b17b3a56772_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_051b8c9bf3c75eaaa7f80b17b3a56772, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::build_estimated;
            using class_type::w_init;
            using class_type::y_init;
            using class_type::identifier;
            using class_type::children;
    };
}


namespace autowig {
}

void wrapper_f42a586a953550818a858c4fd5a80f82(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::Type, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > class_f42a586a953550818a858c4fd5a80f82(module, "_PolymorphicCopy_f42a586a953550818a858c4fd5a80f82", "");
    class_f42a586a953550818a858c4fd5a80f82.def(pybind11::init<  >());
    class_f42a586a953550818a858c4fd5a80f82.def("_build_estimated", static_cast< class ::statiskit::glm::NominalRegression * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, struct ::statiskit::MultivariateSampleSpace const &, struct ::statiskit::UnivariateSampleSpace const &) const >(&autowig::Publicist::build_estimated), pybind11::return_value_policy::reference_internal, "");
    class_f42a586a953550818a858c4fd5a80f82.def("_w_init", static_cast< class ::std::vector< double, class ::std::allocator< double > >  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::w_init), "");
    class_f42a586a953550818a858c4fd5a80f82.def("_y_init", static_cast< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::y_init), "");

}