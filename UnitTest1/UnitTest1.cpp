#include "pch.h"
#include "CppUnitTest.h"
#include "Shipment_r.h"
#include "mapping.h"
#include "Shipment.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(BT001)
        {
            // Test with valid size, weight, and destination
            double validSize = 0.25; //box size
            double validWeight = 1; //weight value
            Point validDestination = { 3, 2 }; //destination

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result); // Expected result for valid inputs
        }

        TEST_METHOD(BT002)
        {
            double validSize = 1;
            double validWeight = 10;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT003)
        {
            double validSize = 0.5;
            double validWeight = 100;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT004)
        {
            double validSize = 0;
            double validWeight = 200;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT005)
        {
            double validSize = 0.1;
            double validWeight = 200;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT006)
        {
            double validSize = 0.37;
            double validWeight = 300;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT007)
        {
            double validSize = 0.251;
            double validWeight = 500;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT008)
        {
            double validSize = 0.49;
            double validWeight = 600;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT009)
        {
            double validSize = 0.51;
            double validWeight = 700;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT010)
        {
            double validSize = 0.77;
            double validWeight = 800;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT011)
        {
            double validSize = 0.99;
            double validWeight = 900;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT012)
        {
            double validSize = 1.1;
            double validWeight = 100;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT013)
        {
            double validSize = 100;
            double validWeight = 1000;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT014)
        {
            double validSize = -10;
            double validWeight = 355;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT015)
        {
            double validSize = 0.25;
            double validWeight = 1;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT016)
        {
            double validSize = 0.5;
            double validWeight = 10;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT017)
        {
            double validSize = 1;
            double validWeight = 760;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT018)
        {
            double validSize = 0.25;
            double validWeight = 1000;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT019)
        {
            double validSize = 0.5;
            double validWeight = 0;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT020)
        {
            double validSize = 0.25;
            double validWeight = 0.99;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT021)
        {
            double validSize = 0.25;
            double validWeight = 1.1;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT022)
        {
            double validSize = 0.25;
            double validWeight = 999.9;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT023)
        {
            double validSize = 1;
            double validWeight = 1000.1;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT024)
        {
            double validSize = 1;
            double validWeight = -100;
            Point validDestination = { 3, 2 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT025)
        {
            double validSize = 0.25;
            double validWeight = 1;
            Point validDestination = { 24, 25 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT026)
        {
            double validSize = 0.5;
            double validWeight = 10;
            Point validDestination = { 7, 9 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT027)
        {
            double validSize = 1;
            double validWeight = 100;
            Point validDestination = { 23, 25 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT028)
        {
            double validSize = 0.25;
            double validWeight = 100;
            Point validDestination = { 26, 26 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT029)
        {
            double validSize = 0.5;
            double validWeight = 10;
            Point validDestination = { 1, 43 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT030)
        {
            double validSize = 0.25;
            double validWeight = 99;
            Point validDestination = { 26, 12 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT031)
        {
            double validSize = 0.25;
            double validWeight = 11;
            Point validDestination = { 5, 4 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT032)
        {
            double validSize = 0.25;
            double validWeight = 600;
            Point validDestination = { 12, 'c'};

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT033)
        {
            double validSize = 1;
            double validWeight = 100;
            Point validDestination = { '$', 12};

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT034)
        {
            double validSize = 1;
            double validWeight = 100;
            Point validDestination = { '2', '2'};

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT035)
        {
            double validSize = 0.25;
            double validWeight = 100;
            Point validDestination = { 'A', 'A'};

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }

        TEST_METHOD(BT036)
        {
            double validSize = 0.5;
            double validWeight = 10;
            Point validDestination = { 26, 78 };

            int result = validate(validSize, validWeight, validDestination);

            Assert::AreEqual(1, result);
        }
    };
}