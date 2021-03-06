extern int signature_check_enabled;
extern int script_assert_enabled;

void
toggle_signature_check();

void
toggle_script_asserts();

void
show_choose_zip_menu();

int
do_nandroid_backup(const char* backup_name);

int
do_nandroid_restore();

void
show_nandroid_restore_menu();

void
show_nandroid_menu();

void
show_partition_menu();

void
show_choose_zip_menu();

void
show_backup_menu();

int
install_zip(const char* packagefilepath);

int
__system(const char *command);

void
show_advanced_menu();

int
format_non_mtd_device(const char* root);

void
wipe_battery_stats();

void create_fstab();

char*
keyboard(char* title, char* buffer, int buf_len);
