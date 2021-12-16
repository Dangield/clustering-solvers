#include <vector>
#include <string>

class sample
{
private:
	std::string id;
	std::vector<float> attribute_values;
public:
	sample();
	sample(std::string);
	~sample();
	void pushAttribute(float);
	std::string getId();
	std::vector<float> getAttributes();
	float getAttribute(int);
	int getAttributeAmount();
};