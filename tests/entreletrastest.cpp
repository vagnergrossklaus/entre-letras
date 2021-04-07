#include <gtest/gtest.h>

#include <entre-letras/entreletras.h>

class EntreLetrasTest : public ::testing::Test
{
};

TEST_F(EntreLetrasTest, testContar)
{

    EntreLetras entreLetras;

    EXPECT_EQ(entreLetras.contar('a', 'b'), 0);
    EXPECT_EQ(entreLetras.contar('a', 'c'), 1);
    EXPECT_EQ(entreLetras.contar('c', 'c'), 0);
    EXPECT_EQ(entreLetras.contar('c', 'j'), 6);
    EXPECT_EQ(entreLetras.contar('a', 'z'), 24);

    EXPECT_EQ(entreLetras.contar('A', 'B'), 0);
    EXPECT_EQ(entreLetras.contar('A', 'C'), 1);
    EXPECT_EQ(entreLetras.contar('C', 'C'), 0);
    EXPECT_EQ(entreLetras.contar('C', 'J'), 6);
    EXPECT_EQ(entreLetras.contar('A', 'Z'), 24);

    EXPECT_EQ(entreLetras.contar('P', 'A'), -1);
    EXPECT_EQ(entreLetras.contar('p', 'a'), -1);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
