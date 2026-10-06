#define AUDIT_MAX 64
#define AUDIT_NAME 128

struct audit_record {
  int pid;
  char process[16];
  char operation[8];
  char filename[AUDIT_NAME];
  int result;
};
