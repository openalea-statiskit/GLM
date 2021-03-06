from statiskit import (linalg,
                       core,
                       glm)
from statiskit.data import glm as data

import unittest
from nose.plugins.attrib import attr

import math

@attr(linux=True,
      osx=True,
      win=True,
      level=0)
class TestBinomialRegression(unittest.TestCase):#, AbstractTestDiscreteRegression):
    # _eta = 4.7
    # _nb_param = 4  
    # _canonical_link = glm.BinomialLink()
    # _kappa = 5
    # _mu = _kappa * math.exp(_eta)/(1+math.exp(_eta))

    @classmethod
    def setUpClass(cls):
        """Test Binomial regression construction"""
        # cls.predictor_init()
        # cls._canonical_model = glm.BinomialRegression(cls._kappa, cls._pred, cls._canonical_link)
        cls._data = data.load('crabs')
        for index, event in enumerate(cls._data.Satellites.events):
            if event.value > 0:
                cls._data.Satellites.events[index] = core.DiscreteElementaryEvent(1)

    def test_Fisher_estimation(self):
        """Test binomial regression Fisher estimation"""
        data = self._data.extract(explanatories=[1],
                                  response=0)
        fe = glm.binomial_estimation(algo='Fisher',
                                     data=data,
                                     kappa=1)
        self.assertAlmostEqual(fe.estimated.predictor.alpha, -12.3508, places=4)
        self.assertAlmostEqual(fe.estimated.predictor.delta[0], 0.4972, places=4)
        self.assertAlmostEqual(fe.estimated.loglikelihood(data), -97.2263, places=4)

    def test_SA_estimation(self):
        """Test binomial regression steepest ascent estimation"""
        data = self._data.extract(explanatories=[1],
                                  response=0)
        fe = glm.binomial_estimation(algo='SA',
                                     data=data)
        self.assertEqual(fe.estimated.kappa, 1)
        self.assertAlmostEqual(fe.estimated.predictor.alpha, -12.3508, places=4)
        self.assertAlmostEqual(fe.estimated.predictor.delta[0], 0.4972, places=4)
        self.assertAlmostEqual(fe.estimated.loglikelihood(data), -97.2263, places=4)

    @classmethod
    def tearDownClass(cls):
        """Test Binomial regression deletion"""
        # del cls._canonical_model  
        pass