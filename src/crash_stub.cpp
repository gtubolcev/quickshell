#include <utility>
namespace qs { namespace crash { struct RelaunchInfo {}; class CrashHandler { public: static void init(){} static void setRelaunchInfo(const RelaunchInfo&){} }; }}
extern "C" void qsCheckCrash(int,char**){}
