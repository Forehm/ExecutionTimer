#include <string>
#include <iostream>
#include <chrono>


class ExecutionTimer
{
public:

	Timer() : start_(std::chrono::high_resolution_clock::now())
	{
	}

	string get_execution_time()
	{
		end_ = std::chrono::high_resolution_clock::now();
		duration_ = end_ - start_;
		float result = duration.count();
		std::string result_as_string = std::to_string(result);
		return result_as_string;
	}

private:

	std::chrono::time_point<std::chrono::steady_clock> start_;
	std::chrono::time_point<std::chrono::steady_clock> end_;
	std::chrono::duration<float> duration_;
};

