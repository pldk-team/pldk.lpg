#ifndef PLDK_LPG_EXTENDED_BNF_DEFINITION_HH
#define PLDK_LPG_EXTENDED_BNF_DEFINITION_HH

#include <pldk/lpg/extended_bnf/expression.hh>

#include <string>

namespace pldk
{
	namespace lpg
	{
		namespace extended_bnf
		{
			class definition final : public expression
			{
			public:
				definition(const std::string& name, const expression_ptr& expression);
				definition(const definition& definition);
				definition(definition&& definition) noexcept = delete;
				~definition() = default;

			public:
				definition& operator=(const definition& definition);
				definition& operator=(definition&& definition) noexcept = delete;

			public:
				bool empty() const noexcept;

			private:
				std::string name_;
				expression_ptr expression_;
			};
		}
	}
}

#endif