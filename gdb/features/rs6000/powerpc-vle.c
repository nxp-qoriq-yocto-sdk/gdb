/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:
  Original: powerpc-e500.xml */

#include "defs.h"
#include "osabi.h"
#include "target-descriptions.h"

struct target_desc *tdesc_powerpc_vle;
static void
initialize_tdesc_powerpc_vle (void)
{
  struct target_desc *result = allocate_target_description ();
  struct tdesc_feature *feature;

  set_tdesc_architecture (result, bfd_scan_arch ("powerpc:vle"));

  feature = tdesc_create_feature (result, "org.gnu.gdb.power.core");
  tdesc_create_reg (feature, "r0", 0, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r1", 1, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r2", 2, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r3", 3, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r4", 4, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r5", 5, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r6", 6, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r7", 7, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r8", 8, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r9", 9, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r10", 10, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r11", 11, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r12", 12, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r13", 13, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r14", 14, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r15", 15, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r16", 16, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r17", 17, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r18", 18, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r19", 19, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r20", 20, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r21", 21, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r22", 22, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r23", 23, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r24", 24, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r25", 25, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r26", 26, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r27", 27, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r28", 28, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r29", 29, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r30", 30, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r31", 31, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "pc", 64, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "msr", 65, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "cr", 66, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "lr", 67, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "ctr", 68, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "xer", 69, 1, NULL, 32, "uint32");

  feature = tdesc_create_feature (result, "org.gnu.gdb.power.e200sprs");

  /* NOTE: regnum = SPR number + offset 100 */
  tdesc_create_reg (feature, "dec",      122, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "srr0",     126, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "srr1",     127, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "pid0",     148, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "decar",    154, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "csrr0",    158, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "csrr1",    159, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dear",     161, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "esr",      162, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivpr",     163, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "usprg0",   356, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "utbl",     368, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "utbu",     369, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg0",    372, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg1",    373, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg2",    374, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg3",    375, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg4",    376, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg5",    377, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg6",    378, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg7",    379, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tbl",      384, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tbu",      385, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "pir",      386, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "pvr",      387, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbsr",     404, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr0",    408, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr1",    409, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr2",    410, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac1",     412, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac2",     413, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac3",     414, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac4",     415, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dac1",     416, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dac2",     417, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dvc1",     418, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dvc2",     419, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tsr",      436, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tcr",      440, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor0",    500, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor1",    501, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor2",    502, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor3",    503, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor4",    504, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor5",    505, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor6",    506, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor7",    507, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor8",    508, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor9",    509, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor10",   510, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor11",   511, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor12",   512, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor13",   513, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor14",   514, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor15",   515, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "spefscr",  612, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1cfg0",   615, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1cfg1",   616, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor32",   628, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor33",   629, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor34",   630, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ivor35",   631, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "ctxcr",    660, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr3",    661, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcnt",    662, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr4",    663, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr5",    664, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac5",     665, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac6",     666, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac7",     667, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "altctxcr", 668, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "iac8",     668, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dberc0",   669, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mcsrr0",   670, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mcsrr1",   671, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mcsr",     672, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mcar",     673, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dsrr0",    674, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dsrr1",    675, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "dbcr6",    703, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg8",    704, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "sprg9",    705, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas0",     724, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas1",     725, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas2",     726, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas3",     727, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas4",     728, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mas6",     730, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tlb0cfg",  788, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "tlb1cfg",  789, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1finv1", 1059, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "hid0",    1108, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "hid1",    1109, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1csr0",  1110, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1csr1",  1111, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mmucsr0", 1112, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "bucsr",   1113, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "mmucfg",  1115, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "l1finv0", 1116, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "svr",     1123, 1, NULL, 32, "uint32");

  tdesc_powerpc_vle = result;
}
