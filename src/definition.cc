#include <pldk/lpg/extended_bnf/definition.hh>

namespace pldk
{
	namespace lpg
	{ 
		namespace extended_bnf
		{
			definition::definition(const std::string& name, const expression_ptr& expression)
				: name_(name), expression_(expression)
			{}
			definition::definition(const definition& definition)
				: name_(definition.name_), expression_(definition.expression_)
			{}

			definition& definition::operator=(const definition& definition)
			{
				if (empty())
				{
					name_ = definition.name_;
					expression_ = definition.expression_;

					return *this;
				}

				// TODO: Exception
			}

			bool definition::empty() const noexcept
			{
				return name_.empty() && expression_ == nullptr;
			}
		}
	}
}