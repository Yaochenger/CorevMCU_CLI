#ifdef PKG_USING_CorevMCU_CLI
#include "cli.h"
extern const struct cli_cmd_entry my_main_menu[];

static void finshToCLI(int argc, char**argv)
{
	irq_cli_flag = 0;
	rt_kprintf("<<Switch to CLI!>>\n");
    #ifdef PKG_USING_CorevMCU_CLI
	CLI_start_task(my_main_menu);
    #endif
}
MSH_CMD_EXPORT(finshToCLI,Switch to CLI: CLI component of Core-V-MCU);
#endif