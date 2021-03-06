
#include "Plugin.h"

namespace plugin { namespace NCSA_Statsd { Plugin plugin; } }

using namespace plugin::NCSA_Statsd;

plugin::Configuration Plugin::Configure()
	{
	plugin::Configuration config;
	config.name = "NCSA::Statsd";
	config.description = "Client for incrementing counters in statsd";
	config.version.major = 1;
	config.version.minor = 0;
	return config;
	}
