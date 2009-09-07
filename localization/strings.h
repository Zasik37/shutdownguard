#include "en-US/strings.h"
#include "es-ES/strings.h"
#include "gl-ES/strings.h"
#include "lt-LT/strings.h"
#include "nn-NO/strings.h"
#include "nl-NL/strings.h"

struct {
	wchar_t *code;
	struct strings *strings;
} languages[] = {
	{L"en-US", &en_US},
	{L"es-ES", &es_ES},
	{L"gl-ES", &gl_ES},
	{L"lt-LT", &lt_LT},
	{L"nn-NO", &nn_NO},
	{L"nl-NL", &nl_NL},
};

int num_languages = 6;
