

#include <string>
#include <iostream>
#include <chrono>



using namespace std;



class Timer
{
public:

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}


	string get_execution_time()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float result = duration.count();
		string res = to_string(result);
		return res;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> start;
	std::chrono::time_point<std::chrono::steady_clock> end;
	std::chrono::duration<float> duration;
};

