#include <iostream>

constexpr int factorial(int n) {
    return (n <= 1) ? 1 : (n * factorial(n - 1));
}
int runtime_factorial(int n) {
    return (n <= 1) ? 1 : (n * runtime_factorial(n - 1));
}
static void BM_ConstexprFactorial(benchmark::State& state) { for (auto _ : state) {
    benchmark::DoNotOptimise(factorial(10));
}
}
BENCHMARK(BM_ConstexprFactorial);
static void BM_RuntimeFactorial(benchmark::State& state) { for (auto _ : state) {
    benchmark::DoNotOptimise(runtime_factorial(10));
}
}


int main()
{


}
